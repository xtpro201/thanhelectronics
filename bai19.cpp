////code by xtpro
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
#define ROW 100
#define COL 100

void nhapMang(int mt[][COL], int& m, int& n);
void xuatMang(int mt[][COL], int m, int n);

int main()
{
	int mt[ROW][COL]; 
	int nRow, nCol; 
	nhapMang(mt, nRow, nCol);
	xuatMang(mt, nRow, nCol);

	return 0;
}

void nhapMang(int mt[][COL], int& m, int& n)
{
	srand(time(NULL));

	cout << "Nhap so dong : ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mt[i][j] = rand() % 100;
		}
	}
}

void xuatMang(int mt[][COL], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mt[i][j] << "\t";
		}
		cout << endl;
	}
}