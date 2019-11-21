#include <iostream>
using namespace std;


#define CALL_MAX(a,b) ((a) > (b) ? (a) : (b))

//实验总结：
//	++a时： b > a时， a被累加一次
//			b <= a 时，a被累加两次
//	++b时：	a > b, b被累加一次
//			a <= b,b被累加两次




int main() {
	int a = 5, b = 0;
	CALL_MAX(++a, b);		//a被累加 2 次
	cout << a << endl;

	CALL_MAX(++a, b + 8);	//a被累加 1 次

	//1.当b > a时，a被累加一次
	//	b <= a时，a被累加两次
	cout << a << endl;


	//1. b < a
	CALL_MAX(a, ++b);		//b被累加一次
	cout << "b: " << b << endl;
	b = 8;
	//2. b == a
	CALL_MAX(a, ++b);		//b被累加两次
	cout << "b: " << b << endl;	
	b = 10;
	//3. b > a
	CALL_MAX(a, ++b);		//b被累加两次
	cout << "b: " << b << endl;	

	system("pause");
	return 0;
}
