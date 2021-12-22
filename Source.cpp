#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}
int Mul(int* a, int* b, const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
		c += pow(a[i],2) + pow(b[i],2);
	return c;
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 5;
	int a[n], b[n];
	int Low = -10;
	int High = 10;

		Create(a, n, Low, High);
	Print(a, n);
	Create(b, n, Low, High);
	Print(b, n);
	cout << "a^2+b^2 = " << Mul(a, b, n) << endl;
	return 0;
}