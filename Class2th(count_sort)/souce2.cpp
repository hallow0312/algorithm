#include<iostream>
using namespace std;

#define SIZE 5
int main()
{
#pragma region 계수 정렬 
	// 데이터의 값을 직접 비교하지 않고 
	// 단순하게 각 숫자가 몇개 있는지 개수를 세어 저장한 다음 ,
	// 정렬하는 알고리즘 

	/*
	int arr[] = { 1,2,3,4,1,1,5};
	int arr_count[SIZE] = { 0, };

	int arr_size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < arr_size; i++)
	{
		arr_count[arr[i] - 1] = ++arr_count[arr[i] - 1];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr_count[i] << " ";
	}
	*/




#pragma endregion
#pragma region 문자열 뒤집기 

	/*
	string s;
	cin >> s;
	cout << s << " : ";
	for (int i = 0; i < s.length()/2; i++)
	{
		swap(s[i], s[s.length() - 1 - i]);
	}
	cout << s;
	*/
#pragma endregion


	return 0;
}