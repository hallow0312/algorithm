#include<iostream>
using namespace std;

#define VALUE 100000
int Fibonacci(int* list, int x)
{
	if (x == 1)
	{
		list[x] = x;
		return list[x];
	}
	else if (x < 1)
	{
		return 0;
	}

	if (list[x] != 0)
	{
		return list[x];
	}

	return list[x] = Fibonacci(list, x - 1) + Fibonacci(list, x - 2);
}



int main()
{

#pragma region 동적 계획법
	//특정 범위 까지의 값을 구하기 위해서 
	// 그것과 다른범위 까지의 값을 이용하여 효율적으로 값을 
	// 구하는 알고리즘.

	//메모이제이션
	//프로그램이 동일한 계산을 반복해야 할 때, 이전에 계산한 값을 
	// 메모리에 저장함으로써 동일한 계산을 반복 수행하는
	// 작업을 제거하여 프로그램의 실행 속도를 향상시키는 기법 .
#pragma endregion
	int list[VALUE + 1] = { 0, };
	cout << Fibonacci(list, 46) << endl;

	return 0;
}