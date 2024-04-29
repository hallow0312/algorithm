#include <iostream>
#include <limits.h>
using namespace std;

#define SIZE 5
#define INF INT_MAX-100000

class Graph
{

private:
	bool visited[SIZE];

	int distance[SIZE];

	int map[SIZE][SIZE];


public:

	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			distance[i] = 0;
			visited[i] = false;
			for (int j = 0; j < SIZE; j++)
			{
				map[i][j] = 0;
			}
		}
	}
	void SettingMap(int y, int x, int distance)
	{
		map[y][x] = distance;
	}

	int SmallNode()
	{
		//최소 비용을 찾아주는 함수 
		int Min = INF;
		int index = 0;

		for (int i = 0; i < SIZE; i++)
		{
			if (visited[i] == true)
			{
				continue;
			}

			if (Min > distance[i])
			{

				Min = distance[i];
				index = i;

			}


		}

		return index;

	}
	void Dijkstra(int start)
	{
		visited[start] = true;

		for (int i = 0; i < SIZE; i++)
		{
			distance[i] = map[start][i];
		}
		for (int i = 0; i < SIZE - 1; i++)
		{

			int find = SmallNode(); //최소비용 노드 탐색 
			cout << find << endl;
			visited[find] = true;
			for (int j = 0; j < SIZE; j++)
			{
				// 방문하지 않은 노드 중에서 시작점이 최소 비용노드를 
				// 경유하는게 더 가까운값을 갱신함 .

				if (visited[j] == true)
				{
					continue;
				}


				if (distance[j] > distance[find] + map[find][j])
				{
					distance[j] = distance[find] + map[find][j];
				}

			}


		}


	}
	void Distance()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << distance[i] << " ";
		}
	}

};

int main()
{

#pragma region 다익스트라 알고리즘 

	// 시작점으로부터 모든 노드까지의 최소거리를 구해주는 
	// 알고리즘.

	// 1. distance 배열의 weight [시작점 노드 ] 의 값들로 초기화 시켜줌 

	//2. 시작점 방문 처리

	//3. Distance 배열에서 최소 비용 노드를 찾고 방문처리 
	// 단 이미 방문한 노드는 제외 

	// 4. 최소비용 노드를 거쳐갈지 고려해서 distance 배열을 갱신한다.
	// 방문 노드는 역시 제외 

	//5. 모든 노드를 방문 할 때 까지 3~4 반복 .

	// 방문하지 않은 노드 중에서 가장 작은 distance를 가진 노드를 방문하고 , 그노드와 연결된 다른 노드 까지의 거리를 계산한다 .


	Graph graph;
	graph.SettingMap(0, 0, 0);
	graph.SettingMap(0, 1, 7);
	graph.SettingMap(0, 2, 4);
	graph.SettingMap(0, 3, 6);
	graph.SettingMap(0, 4, 1);

	graph.SettingMap(1, 0, INF);
	graph.SettingMap(1, 1, 0);
	graph.SettingMap(1, 2, INF);
	graph.SettingMap(1, 3, INF);
	graph.SettingMap(1, 4, INF);

	graph.SettingMap(2, 0, INF);
	graph.SettingMap(2, 1, 2);
	graph.SettingMap(2, 2, 0);
	graph.SettingMap(2, 3, 5);
	graph.SettingMap(2, 4, INF);

	graph.SettingMap(3, 0, INF);
	graph.SettingMap(3, 1, 3);
	graph.SettingMap(3, 2, INF);
	graph.SettingMap(3, 3, 0);
	graph.SettingMap(3, 4, INF);

	graph.SettingMap(4, 0, INF);
	graph.SettingMap(4, 1, INF);
	graph.SettingMap(4, 2, INF);
	graph.SettingMap(4, 3, 1);
	graph.SettingMap(4, 4, INF);

	graph.Dijkstra(0);
	graph.Distance();


#pragma endregion









	return 0;
}