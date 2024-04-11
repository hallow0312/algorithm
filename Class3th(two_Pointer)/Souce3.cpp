#include<iostream>
using namespace std;

#define SIZE 6

int main()
{

#pragma region 투 포인터 알고리즘

	// 두개의포인터를 두고 값을 비교하여 
	// 문제를 해결하는 알고리즘 

	//원하는 값 M;
	//2중 for 문 단점 : O(n^2) = 비효율적이다 

	// 투포인터 알고리즘 변수 start end 생성 

	//int arr[SIZE] = { 2,3,1,4,2,5 };
	//
	//// 현재 원하는 값 M = 5 ;
	//int count = 0;
	//start 랑 end 는 0부터 시작 
		//누적 합 

	//1. 현재 부분합이 M 이상이면 , start 1씩 증가 ;  
	//2. 현재 부분합이 M미만이면 end 1씩 증가 ;
	//3. 현재 부분합이 M 과 같으면  count 값 증가 시킴 .

	//시간복잡도 : O(n)
	/*int M = 5;
	int start = 0;
	int end = 0;
	int sum = 0;
	while (start <= end)
	{


		if (end < SIZE)
		{

			if (sum < M)
			{
				sum += arr[end++];

			}
			else if (sum >= M)
			{
				sum -= arr[start++];

			}


			if (sum == M)
			{
				count++;
			}

		}
		else
		{
			break;
		}

	}
	cout << count;*/

#pragma endregion

#pragma region 최소공배수 

	/*
	int x, y;

	cin >> x >> y;
	int lcm = 1;
	int num = 2;
	while (x > 0 && y>0)
	{


		if (x % num == 0 && y % num == 0)
		{
			lcm *= num;
			x = x / num;
			y = y / num;
			num = 2;
		}
		else
		{
			num++;
		}

		if (num > x || num > y)
		{
			lcm *= x;
			lcm *= y;
			break;
		}


	}

	cout << "최소 공배수 : " << lcm<<endl;
	*/
#pragma endregion


	return 0;
}