#include <iostream>
using namespace std;

/*#define PI 3.14
#define STR "Hello world!"

#define forever while (true)
#define forever for (int i = 0; ; i++)\
cout << i << endl
#define begin {
#define end }*/

#define sum(a, b) (a + b)

#define loop(a) for (int i = 0; i < a; i++)

#define _NUM 10

#ifndef NUM // if not defined
int globalN = 10;
#else
#error "NUM �� ������ ������������!"
int globalM = 15;
#endif

#if NUM != 10
void func(int n) {
	cout << n << endl;
}
#elif NUM > 5
string func(int n) {
	return "N";
}
#else
int func(int n) {
	return n;
}
#endif



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ��������� �������������
	/*cout << "Pi = " << PI << endl;
	n = 10 * PI;
	cout << "n = " << n << endl;
	cout << STR << endl;
	string hi = STR;*/
	// ����������� ���� while
	/*forever{
		cout << "������� �����: "; // Enter number
		cin >> n;
		if (n == 0)
			break;
	}*/
    // ����������� ���� for
	/*forever{
		cout << "������� ����� " << i + 1 << ": "; // Enter number
		cin >> n;
		if (n == 0)
			break;
	}*/

	// ������������� undef
	/*cout << "pi = " << PI << endl;

#undef PI
#define PI 3.5

	cout << "pi = " << PI << endl;*/
	// ������
	/*cout << "������� ��� �����: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;*/

	//loop(55) cout << "#";

	return 0;
}