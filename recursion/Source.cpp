#include <iostream> // рекурсия -это прием программирования, при котором функция вызывает саму себя, либо косвенно 
using namespace std;
long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}

int main() {
	setlocale(LC_ALL, "Russian");// 5!= 1*2*3*4*5
	int n;                                           // 5!=4!*5, 3!=2!*3,2!=1!*1, 1!=0!*1,  0!=1
	cout << "input chisla:";
	cin >> n;
	cout << n << "!=" << factorial(n) << "\n";
	return 0;
}