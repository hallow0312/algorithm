#include <iostream>
using namespace std;
#define INF 1000000
#define SIZE 4
class Graph
{
private:

	int map[SIZE][SIZE] =
	{
		{0,5,INF,8},
		{7,0 ,9,INF},
		{2,INF,0,4},
		{INF,INF,3,0}
	};


public:

	void FloyedWashall()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				for (int k = 0; k < SIZE; k++)
				{
					int distance = map[k][i] + map[j][k];
					if (distance < map[j][i])
					{
						map[j][i] = distance;
					}
				}
			}
		}
	}

	void Print()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (map[i][j] == INF)
				{
					cout << "INF ";
				}
				else
				{
					cout << map[i][j] << " ";
				}
			}
			cout << endl;
		}
	}
};
int main()
{

#pragma region 플로이드 워셜
	// 모든 지점에서 다른 모든 지점 까지의 최단 경로를 
	// 모두 구해야 하는 경우 사용하는 알고리즘 

	// 시간 복잡도 O (n^3)

	Graph graph;
	graph.FloyedWashall();
	graph.Print();
#pragma endregion











	return 0;
}