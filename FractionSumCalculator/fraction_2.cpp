#include <iostream>
using namespace std;
int main()
{
	float a, sum = 0;
	for (int i = 1; i <= 4; i++)
	{
		cin >> a;
		sum += a - int(a);
	}
	cout << sum;
	return 0;
}
