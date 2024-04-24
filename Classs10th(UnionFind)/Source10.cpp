#include<iostream>
using namespace std;
#define SIZE 9




class UnionFind
{
private:
	int parent[SIZE];

public:
	UnionFind()
	{
		parent[0] = NULL;
		for (int i = 1; i < SIZE; i++)
		{
			parent[i] = i;
		}
	}
	void Union(int x, int y)
	{
		x = Find(x);
		y = Find(y);

		if (x != y)
		{
			if (x < y)
			{
				//a 가 b보다 작으면 
				parent[y] = x;


			}
			else if (y < x)
			{
				//y값이  x보다 작으면 
				parent[x] = y;

			}
		}
	}
	int Find(int x)
	{
		if (parent[x] == x)
		{
			return x;
		}

		return parent[x] = Find(parent[x]);
	}
	bool Same(int x, int y)
	{
		x = Find(x);
		y = Find(y);
		if (x == y)
		{
			return true;

		}
		else
		{
			return false;
		}

	}
	void print()
	{
		int i = 1;
		while (1)
		{
			if (i > SIZE - 1)
			{
				break;
			}
			int a = Find(i);
			cout << a << " ";
			i++;
		}
		cout << endl;
	}

	
};

int main()
{

#pragma region 유니온파인드
	//여러 노드가 존재 할 때 어떤 노드가 다른 노드와 연결되어 
	// 있는지 확인하는 알고리즘.

	// 유니온 파인드의 시간복잡도 : O(logN)
	UnionFind unionfind;
	unionfind.Union(2, 3);
	unionfind.Union(1, 2);
	unionfind.Union(4, 5);
	unionfind.Union(5, 6);


	unionfind.print();

	cout << unionfind.Same(1, 2) << endl;
	cout << unionfind.Same(1, 3) << endl;
	cout << unionfind.Same(4, 5) << endl;
	cout << unionfind.Same(5, 6) << endl;

	

#pragma endregion










	return 0;
}