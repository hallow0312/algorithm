#include <iostream>
using namespace std;


#define SIZE 8

void QuickSort(int list[], int start, int end)
{	// pivot 값 설정 
	int pivot = start;
	// left 값 설정 
	int left = start + 1;
	//right 값 설정
	int right = end;

	
	//5. left 가 right 보다 크거나 같을 때 까지 반복 
	if (start < end)
	{
		while (left <= right)
		{
			while (left <= end && list[pivot] >= list[left]) //left 값이 end과 같거나 작고 left 인덱스 배열값이 pivot 인덱스 배열값보다 작으면 반복 
			{
				left++; //left 값 증가 
			}
			while (right > start && list[right] >= list[pivot]) // right 값이 start 값 보다 크고 right 인덱스 배열값이 pivot 인덱스 배열값보다 크면 반복
			{
				right--; //right 값 감소 
			}

			if (left > right)
			{
				swap(list[pivot], list[right]);
			}
			else
			{
				swap(list[left], list[right]);
			}
		}
		//8. 피벗을 기준으로 나누어진 두 배열에 대해 
		// 재귀 적으로 퀵 정열 실행 (왼쪽)
		QuickSort(list, start, right - 1);
		//9. 피벗을 기준으로 나누어진 두배열에 대해 재귀적으로
		//퀵 정렬 실행 (오른쪽)
		QuickSort(list, right + 1, end);
	}
	else
	{
		return;
	}

}

int main()
{

#pragma region 퀵정렬 
	
	 
	//기준 점을 획득한 다음 해당 기준점을 기준으로 
	// 배열을 나누고 한족에는 기준점보다 작은값들이 위치하고 
	// 다른한쪽에는 기준점보다 큰값들이 위치하도록함 .
	
	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여 
	// 모든 배열이 기본 배열이 될때 까지 반복하면서 정렬하는 알고리즘 

	 // 최악의 시간 O(n^2);
	// 평균 (n log n)
	
	//1. pivot 값 먼저 잡기 [0]
	int list[8] = { 5,9,6,2,1,3,4,7};
	int start, end;

	
	start = 0;
	end = SIZE - 1;
	cout << "QuickSort 전 : ";
	for (const int& element : list)
	{
		cout << element << " ";
	}
	
	QuickSort(list, start, end);
	cout << endl<<"QuickSort 후 : ";

	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	
	return 0;

}