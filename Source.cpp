#include <iostream>
using namespace std;
int main() {
	/*//For1.Даны целые числа K и N(N > 0).Вывести N раз число K.
	/*int n;
	int k;
	cout << "n:";
	cin >> n;
	cout << "k:";
	cin >> k;
	for (int i = 0; i < n; ++i) {
		cout << k << endl;
	}*/
	//For2.Даны два целых числа A и B(A < B).Вывести в порядке возрастания все
	//целые числа, расположенные между A и B(включая сами числа A и B), а
	//также количество N этих чисел.
	/*int a, b;
	int n = 0;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	for (int i = a; i <= b; i = i + 1) {
		cout << i << " ";
		n++;
	}
	/*cout <<"qty= " << n << endl;*/
	/*//For3.Даны два целых числа A и B(A < B).Вывести в порядке убывания все
	//целые числа, расположенные между A и B(не включая числа A и B), а
	//также количество N этих чисел.*/		/*int a, b;
	int n = 0;
	//cout << "a:";
	cin >> a;
	cout << "b:";
	/*cin >> b;
	for (int i = b-1; i > a; i = i - 1) {
		cout << i << " ";
		n++;
	}
	cout << "qty= " << n << endl;*/
	/*//For4.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1,
	//2, . . ., 10 кг конфет.*/
	/*double prise;
	cout << "input prise: ";
	cin >> prise;*/

	/*for (int weinght = 1; weinght <= 10; weinght++) {
		cout << weinght << "kg costs" << weinght * prise << " $" << endl;*/
	/*}
	system("pause");*/
	/*//For5◦
	//.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
	//0.2, . . ., 1 кг конфет.*/	/*double prise;
	cout << "input prise: ";
	cin >> prise;
	for (double weinght = 0.1; weinght <= 1.0; weinght += 0.1) {
		cout << weinght << "kg costs " << weinght * prise << " $" << endl;
	}
	system("pause");*/	/*//For6.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1.2,
	//1.4, . . ., 2 кг конфет.*/	/*double prise;
	cout << "input prise: ";
	cin >> prise;
	for (double weinght = 1.2; weinght <= 2; weinght += 0.2) {
		cout << weinght << "kg costs " << weinght * prise << " $" << endl;
	}
	system("pause");*/
	/*//For7.Даны два целых числа A и B(A < B).Найти сумму всех целых чисел
	//от A до B включительно.*/
	int a, b;
	cin >> a >> b;
	for (int i = a; i > b; ++i) {
		cout << i << endl;
	}
}