#include<bits/stdc++.h>

using namespace std;
int Euclid(int num1, int num2)
{
	int result = 0;
	int a = max(num1, num2);
	int b = min(num1, num2);
	while (true)
	{
		if (a % b == 0)
		{
			result = b;
			break;
		}
		int temp = a % b;
		a = b;
		b = temp;

	}
	return result;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << Euclid(a, b) << '\n';
	return 0;

}