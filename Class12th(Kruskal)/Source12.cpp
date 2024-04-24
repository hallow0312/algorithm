#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define SIZE 10
int Find(int* arr, int x)
{
	if (arr[x] == x)
	{
		return x;
	}

	return arr[x] = Find(arr, arr[x]);
}
void Union(int* arr, int x, int y)
{
	x = Find(arr, x);
	y = Find(arr, y);

	if (x != y)
	{
		if (x < y)
		{
			//a 가 b보다 작으면 
			arr[y] = x;


		}
		else if (y < x)
		{
			//y값이  x보다 작으면 
			arr[x] = y;

		}
	}
}

bool Same(int* arr, int x, int y)
{
	x = Find(arr, x);
	y = Find(arr, y);
	if (x == y)
	{
		return true;

	}
	else
	{
		return false;
	}

}


class Graph
{
private:
	class Edge
	{
	private:
		int x;
		int y;
		int distance;


	public:
		Edge(int x, int y, int distance)
		{
			this->x = x;
			this->y = y;
			this->distance = distance;

		}
		bool operator < (Edge& edge)
		{
			return this->distance < edge.distance;
		}
		int& ReturnX(Edge edge)
		{
			return edge.x;
		}
		int& ReturnY(Edge edge)
		{
			return edge.y;
		}
		int& ReturnDis(Edge edge)
		{
			return edge.distance;
		}
	};
	vector<Edge> v;
	int sum;
public:
	Graph()
	{
		sum = 0;
	}
	void CreateEdge(int x, int y, int distance)
	{
		v.push_back(Edge(x, y, distance));

	}
	void Sort()
	{
		sort(v.begin(), v.end());
	}
	void Print()
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << "[" << v[i].ReturnX(v[i]) << "," << v[i].ReturnY(v[i]) << "," << v[i].ReturnDis(v[i]) << "]" << endl;
		}
	}
	void KrusKal()
	{

		int parent[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			parent[i] = i;
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (Same(parent, v[i].ReturnX(v[i]), v[i].ReturnY(v[i])) == false)
			{
				sum += v[i].ReturnDis(v[i]);
				Union(parent, v[i].ReturnX(v[i]), v[i].ReturnY(v[i]));
			}
		}

	}
	int Cost()
	{
		return sum;
	}
};




int main()
{

#pragma region 신장트리 (Spanning Tree)
	// 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는 부분 그래프 
	// 그래프의 모든 정점을 최소 비용으로 연결하는 트리 
	// 그래프의 정점의 수가 n개 일때 간선의 수는 n-1 개;

	// 최소 비용 신장 트리 (Minimum Spanning Tree , MST)
	// 그래프의 간선들의 가중치 합이 최소인 신장 트리 

	Graph graph;
	graph.CreateEdge(1, 2, 15);
	graph.CreateEdge(1, 3, 5);
	graph.CreateEdge(2, 3, 25);
	graph.CreateEdge(2, 5, 36);
	graph.CreateEdge(3, 4, 55);
	graph.CreateEdge(4, 5, 24);
	graph.CreateEdge(4, 6, 28);
	graph.CreateEdge(5, 6, 31);
	graph.Sort();
	//graph.Print();
	graph.KrusKal();
	cout << graph.Cost() << endl;

#pragma endregion






	return 0;
}