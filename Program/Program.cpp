#include<iostream>
using namespace std;

#define SIZE 5
int main()
{
#pragma region 거품 정렬(Bubble Sort)
		
	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘 

	// 거품 정렬의 시간복잡도 : O(n^2)

	/*
	int arr[SIZE] = {12,21,45,11,0 };

	
	for (int i = 0; i < SIZE - 1; i++)
	{	
		for (int j = 0; j < (SIZE-i)-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	cout << "Bubble sort : [ ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]";
	*/
#pragma endregion

#pragma region 선택정렬(Selection Sort)
	// 주어진 리스트 중에 최솟값을 찾아서 맨 앞에 위치 한 값과 교체하는 방식으로 
	// 정렬하는 알고리즘 
	// 시간복잡도 (O^2)
	
	/*int arr[SIZE] = { 21,11,4,1,17 };
	
	for (int i = 0; i < SIZE-1; i++)
	{
		int min_index = i; 
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[min_index] > arr[j]) 
			{
				min_index = j; 
			}
		}
		swap(arr[i], arr[min_index]); 

		cout << i+1<< " 번째 회전 : [";
		for (int k = 0; k < SIZE; k++)
		{
			cout << arr[k] << " ";
		}
		cout <<"]"<< endl;
	}

	cout << endl<<"Selection Sort : [ ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]"<<endl;*/
#pragma endregion

	
	return 0;
}