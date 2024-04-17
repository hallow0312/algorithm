#include <iostream>
#include <vector>
using namespace std;

#define SIZE 9

class Graph
{
private:

	vector<int> graph[SIZE];
	bool visited[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}

	}
	void DFS(int start)
	{	//현재 노드 출력
		cout << start << " ";
		// 현재 노드 방문한것으로 표시 
		visited[start] = true;
		// 현재  노드와 연결된 다른 노드를 재귀적으로 방문함.
		for (int i = 0; i < graph[start].size(); i++)
		{
			// 현재 노드와 연결된 다음노드를 가져옴 
			int next_graph = graph[start][i];
			if (visited[next_graph] != true)
			{
				// 다음 노드를 방문하지 않은 노드라면 DFS 함수를 호출 
				DFS(next_graph);
			}

		}
	}
	void InsertEdge(int vertex, int edge)
	{
		graph[vertex].push_back(edge);

	}



};


int main()
{

#pragma region 깊이 우선 탐색(Depth First Search)
	// root 노드에서 시작해서 다음 분기로 넘어가기전에  
	// 해당 분기를 완벽하게 탐색하는 방법.

	// 깊이 우선 탐색은 스택 자료구조를 사용
	// 1. 시작 노드를 스택에 넣고 방문처리 

	//2. 스택의 최상단 노드에 방문하지 않은 인접 노드가 있으면 
	// 그 노드를 스택에 넣고 방문 처리함 .

	//3. 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 꺼냄 

	//3. 더 이상 2번의 과정을 수행할 수 없을 때 까지 반복 .
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

	graph.DFS(1);




#pragma endregion









	return 0;
}