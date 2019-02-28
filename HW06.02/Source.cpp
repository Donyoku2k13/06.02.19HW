#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>
#include <stdlib.h>
#include <cstring>
using namespace std;


bool asc(int a, int b) {
	return a > b;
}
bool desc(int a, int b) {
	return a < b;
}
void bubblesort(int *a, int n, bool(*func)(int, int)) {
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (func(a[i], a[i + 1]) == 1)
				swap(a[i], a[i + 1]);
		}

	}
}
void fillArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		*p = 1 + rand() % 10;
	}
}
void printArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		cout << *p <<" ";
	}
	cout << endl;
}

int bigger(int *mas, int size, int num)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] > num) {
			count++;
		}
	}
	return count;
}
int bigger2(int *mas, int size, int num)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] > num) {
			count++;
		}
	}
	return count;
}
void reverse(int a[], int n) {
	int b;
	for (int *p = a; p < a + n; p++)
	{
		*p = 1 + rand() % 10;
	}
	for (int i = 0; i < n / 2; i++) //сам переворот массива
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
	for (int i = 0; i < n; i++) cout << a[i] << "; ";
 
}
int main() 
{
	
	//1.	*Напишите функцию, которая определяет количество  элементов передаваемого массива, которые больше определенного числа, это число тоже передается в функцию. Реализовать перегрузки для различных типов массивов.
	/*int mas[5];
	int b;
	cin >> b;
	int mas2[5];
	fillArray(mas, 5);
	fillArray(mas2, 5);
	bubblesort(mas, 5);
	bubblesort(mas2, 5);
	cout << bigger(mas, 2, b) << endl;
	cout << bigger2(mas2, 2, b) << endl;*/

	//2.	**Написать функцию, которая меняет порядок элементов передаваемого массива на обратный. Внутри функции запрещено использовать вспомогательный массив. Реализовать перегрузки для различных типов массивов.
	/*int a[6];
	reverse(a, 6);
	cout << a[6] << endl;*/
	

	system("pause");
}

