#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d, S;
	cin >> a >> b >> c >> d;
	S = a + b + c + d;
	int A = a, B = b, C = c, D = d, E;
	E = A + B + C + D ;
	cout << S - E;
}
