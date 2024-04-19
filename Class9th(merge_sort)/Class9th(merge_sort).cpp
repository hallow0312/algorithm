#include <iostream>
using namespace std;
#define SIZE 8


void merge(int* list, int left, int right, int* sorted)
{
	int middle = (left + right) / 2;
	int leftStart = left;

	int rightStart = middle + 1;
	int i = left;
	while (leftStart <= middle && rightStart <= right)
	{
		if (list[leftStart] < list[rightStart])
		{
			sorted[i++] = list[leftStart++];

		}
		else
		{
			sorted[i++] = list[rightStart++];

		}


	}

	while (leftStart <= middle)
	{
		sorted[i++] = list[leftStart++];

	}

	while (rightStart <= right)
	{
		sorted[i++] = list[rightStart++];

	}

}

void merge_sort(int* list, int left, int right)
{
	if (left >= right)
	{
		return;
	}

	int middle = (left + right) / 2;

	merge_sort(list, left, middle);

	merge_sort(list, middle + 1, right);

	int sorted[SIZE] = { 0, };

	merge(list, left, right, sorted);

	for (int i = left; i <= right; i++)
	{
		list[i] = sorted[i];

	}


}
int main()
{

#pragma region  합병 정렬
	//하나의 리스트를 두 개의 균등한 크기로 분할 하고 분활된 
	// 부분리스트를 정렬한 다음 , 두 개의 정렬된 부분 리스트를 합하여 전체가 정렬된 리스트가 되게함 .

	//1. 리스트의 길이가 0 or 1 이면 이미 정렬 된것으로 봄 
	//2. 그렇지 않은 경우에는 
	//2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의 두 부분 리스트로 나눈다.
	// 
	//2-2. 각 부분 리스트를 재귀적으로 합병 정렬을 이용해 정렬한다 .
	// 
	//2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 합병한다 .
	// 시간복잡도 O(n log n)
	int list[SIZE] = { 3,5,2,7,4,1,8,6 };


	merge_sort(list, 0, SIZE - 1);

	for (const int& element : list)
	{
		cout << element << " ";
	}
#pragma endregion




	return 0;
}