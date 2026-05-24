#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if ((a <= c && a >= b) || (a <= b && a >= c))
		cout << a;
	else if((b <= c && b >= a) || (b <= a && b >= c))
		cout << b << endl;
	else 
		cout << c;
	return 0;
}
