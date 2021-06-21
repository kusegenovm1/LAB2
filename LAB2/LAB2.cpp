#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

void func1() {
	string s;
	cout << "Введите строку" << endl;
	getline(cin, s);
	int count = 1;

	for (int i = 0; i < s.length(); i++) {
		cin.ignore();
		if (s[i] == s[i + 1])
			count++;
		else {
			cout << (int)s[i] << count;
			count = 1;
		}
	}
	cout << endl;
}

void func2() {
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* arr = new int[n];
	int count = 0;
	for (int i = 0; i < n; i++) //ввод значений массива 
		cin >> arr[i];
	for (int i = 0; i < n; i++) {     // сортировка массива
		for (int j = i; j > 0 && arr[j - 1] > arr[j];j--)
			swap(arr[j - 1], arr[j]);
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < n; i++)  //вывод отсортированного массива
		cout << arr[i] << " ";
	cout << endl;
}
void func3() {
	string s1, s2, s3;
	long position;
	cout << "Введите строку: ";
	getline(cin, s1);
	cout << "Какую подстроку искать?: ";
	getline(cin, s2);
	cout << "Заменить на: ";
	getline(cin, s3);

	while ((position = s1.find(s2, 0)) != string::npos)
		s1.replace(position, s2.length(), s3);
	cout << "Строка после замены: " << s1;

}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1:" << endl;
	func1();
	cout << "Задание 2:" << endl;
	func2();
	cout << "Задание 3:" << endl;
	func3();
}
