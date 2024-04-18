\#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define SIZE 9

class Graph
{
private:
	queue<int> Queue;
	bool visited[SIZE];
	vector <int > graph[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}
	void InsertEdge(int vertex, int edge)
	{
		graph[vertex].push_back(edge);
	}
	void BFS(int start)
	{
		int temp, next;
		visited[start] = true;
		Queue.push(start);

		while (!Queue.empty())
		{
			temp = Queue.front();
			Queue.pop();
			cout << temp << " ";
			for (int i = 0; i < graph[temp].size(); i++)
			{

				next = graph[temp][i];
				if (visited[next] != true)
				{
					Queue.push(next);
					visited[next] = true;
				}
			}


		}





	}
};


int main()
{

#pragma region 너비 우선 탐색
	// root 노드에서 시작한 다음 인접한 노드를 먼저 
	// 탐색하는 방법.
	// 시간복잡도 : O(v+e)


	Graph graph;
	graph.InsertEdge(1, 2);
	graph.InsertEdge(1, 3);
	graph.InsertEdge(1, 8);

	graph.InsertEdge(2, 1);
	graph.InsertEdge(2, 7);

	graph.InsertEdge(3, 1);
	graph.InsertEdge(3, 4);
	graph.InsertEdge(3, 5);

	graph.InsertEdge(4, 3);
	graph.InsertEdge(4, 5);

	graph.InsertEdge(5, 3);
	graph.InsertEdge(5, 4);

	graph.InsertEdge(6, 7);

	graph.InsertEdge(7, 2);
	graph.InsertEdge(7, 6);
	graph.InsertEdge(7, 8);

	graph.InsertEdge(8, 1);
	graph.InsertEdge(8, 7);

	graph.BFS(1);


#pragma endregion





	return 0;
}