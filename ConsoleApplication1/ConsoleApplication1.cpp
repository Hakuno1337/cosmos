#include<iostream>
#include<math.h>
using namespace std;
int main()

{
	// 1-ая задача
	int a, b, c;
	double res;
	cout << "The first is hight, the second is length,3 the third is width" << endl;
	cin >> a >> b >> c; // Ввод трех целых чисел с клавиатуры 
	res = sqrt(a * a + b * b + c * c); // Вычисление длины диагонали кирпича
	cout << fixed;
	cout.precision(2);
	// Вывод результата с точностью до dvex carkfksd dfkldfkdfl
	// Вывод нового результата
	cout << "\nThe diagonal of the brick with edges " << a << " , " << b << " and " << c << " is " << res << endl;
}
