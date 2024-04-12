#include<iostream>
using namespace std;
#define SIZE 7

void BinarySearch(int arr[], int left, int right,int key)
{
	if (left > right)
	{
		cout << "Can't Find " <<key<< endl;
		return;
	}

	int count = (left + right) / 2;

	if (arr[count] == key)
	{
		cout << "Find " << arr[count] << endl;
		return;
	}
	else if (arr[count] < key)
	{
		left = count + 1;
	}
	else if (arr[count] > key)
	{
		right = count - 1;
	}
	return BinarySearch(arr, left, right, key);
}
int main()
{
#pragma region 이진탐색 

	//오름 차순으로 정렬 된 리스트에서 특정한 값의 위치를 찾는 알고리즘.

	//for 문으로 원하는 숫자를 찾게 되면 시간복잡도 O(n)

	// 이진 탐색으로 찾게 되면 시간복잡도 O(lg n)
	/*int buffer[SIZE] = { 5,6,11,13,27,55,88 };
	int key;
	cin >> key;
	int left = 0;
	int right = SIZE - 1;

	BinarySearch(buffer, left, right, key);*/
	/*
	while (1)
	{	
		//1. 배열의 가운데 요소의 인덱스를 key 로 설정 
		int count = (left + right) / 2;
		// left 값이 right 값 보다 크면 탐색 중단 
		if (left > right)
		{
			cout << "Can't Find " << key;
			break;
		}
		//buffer[count] 값이 key  와 같으면 검색 종료 
		if (buffer[count] == key)
		{
			cout << "Find "<< buffer[count] << endl;
			break;
		}
		else if (buffer[count] > key)	 // 찾고자하는 key 값이 buffer[count] 값보다 작다면 left~count-1 사이의 값을 검색하게  해준다 
		{
			right = count - 1;
		}
		else if (buffer[count] < key)	// 찾고자하는 key 값이 buffer[count] 보다 크다면 count+1~right 사이의 값을 검색하게 해준다 해준다 .
		{
			left = count + 1;
		}
	}
	*/
	
	
#pragma endregion

#pragma region 단일 책임 원칙 

	// 하나의 객체는 반드시 하나의 책임만 가지고 있어야 함 .
	// 하나의 클래스가 여러 책임을 가지고 있다면 , 클래스를 분리하여야 함 .

#pragma endregion

#pragma region 개방 폐쇄 원칙 
	// 클래스는 확장에 대해서는 열려있어야하지만 수정에 대해서는 닫혀 있어야함 .
#pragma endregion

#pragma region 리스코프 치환 원칙
	// 하위 클래스는 상위 클래스에서 가능한 행위를 수행할 수 있어야하며, 
	// 하위클래스는 상위클래스의 행위를 변경하지 않고 확장할 수 있어함 .
#pragma endregion



	return 0;
}