#include <iostream>
using namespace std;


#define CALL_MAX(a,b) ((a) > (b) ? (a) : (b))

//ʵ���ܽ᣺
//	++aʱ�� b > aʱ�� a���ۼ�һ��
//			b <= a ʱ��a���ۼ�����
//	++bʱ��	a > b, b���ۼ�һ��
//			a <= b,b���ۼ�����




int main() {
	int a = 5, b = 0;
	CALL_MAX(++a, b);		//a���ۼ� 2 ��
	cout << a << endl;

	CALL_MAX(++a, b + 8);	//a���ۼ� 1 ��

	//1.��b > aʱ��a���ۼ�һ��
	//	b <= aʱ��a���ۼ�����
	cout << a << endl;


	//1. b < a
	CALL_MAX(a, ++b);		//b���ۼ�һ��
	cout << "b: " << b << endl;
	b = 8;
	//2. b == a
	CALL_MAX(a, ++b);		//b���ۼ�����
	cout << "b: " << b << endl;	
	b = 10;
	//3. b > a
	CALL_MAX(a, ++b);		//b���ۼ�����
	cout << "b: " << b << endl;	

	system("pause");
	return 0;
}
