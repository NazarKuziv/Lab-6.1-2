// Lab_06_1-2.cpp
// < Кузів Назар >
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву рекурсивним способом
// Варіант 6


#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void  Create(int* b, const int size, const int Low, const  int High,int i);
int Sum(int* b, const int size,  int& S, int& k,int i);

int main()
{
	srand((unsigned)time(NULL));

	const int n = 22;
	int b[n];

	int Low = -40;
	int High = 50;

	Create(b, n, Low, High,0);

	cout << setw(4) << "b[] = {";

	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << b[i] << ",";

	}
	cout << "}" << endl;
	cout << endl;

	int S = 0;
	int k = 0;

	Sum(b, n, S, k, 0);

	cout << "Number =" << k << endl;
	cout << setw(4) << "Sum = " << S << endl;
	cout << endl;
	cout << setw(4) << "b[] = {";
	for (int d = 0; d < n; d++)
	{
		cout << setw(4) << b[d] << ",";
	}
	cout << "}" << endl;

	return 0;

}
void  Create(int* b, const int size, const int Low, const  int High, int i)
{
	b[i] = Low + rand() % (High - Low + 1);

	if (i < size - 1)

		Create(b, size, Low, High, i + 1);
}

int Sum(int* b, int size, int& S, int& k, int i)
{

	if (!(b[i] > 0 && b[i] % 5 == 0)) 
	{
		S += b[i];
		k++;
		b[i] = 0;
	}

	if(i<size-1)

	return Sum(b, size, S, k, i + 1);
	else
		return 0;
	
				
}