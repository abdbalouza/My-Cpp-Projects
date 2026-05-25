#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, result, b;
	char d;
	cin >> a;
	cin >> d;
	cin >> b;
	cout << "= ";
	switch (d)
	{
	case '+':result = a + b; break;
	case '-':result = a - b; break;
	case '*':result = a * b; break;
	case '/':result = a / b; break;
	case '.':result = sqrt(a); break;
	}
	cout << result << endl;
	return 0;
}
