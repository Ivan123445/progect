#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");                                      

	int a, b;

	cout << "Введите размер массива: " << endl;
	
	while (1 == 1)                                           //защита от дурака
	{
		cin >> a >> b;
		if (a > 0 && b > 0)
		{
			break;
		}
		else
		{
			cout << "Вы ввели неверные значения, повторите: " << endl;
		}

	}
	int** oldarr = new int* [a];                              //инициализация массива
	int** newarr = new int* [a];
	int* buf;

	cout << "Исходная матрица: " << endl;
	for (int i = 0; i < a; i++)
	{
		oldarr[i] = new int[b];

		for (int j = 0; j < b; j++)
		{
			oldarr[i][j] = rand() % 20;
			cout << oldarr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl << "Зеркальная матрица: " << endl;
	for (int i = 0; i < a; i++)
	{
		newarr[i] = new int[b];

		for (int j = 0; j < b; j++)
		{
			newarr[i][j] = oldarr[a - i - 1][j];
			cout << newarr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < a; i++)
	{
		delete[] oldarr[i];
		delete[] newarr[i];
	}

	delete[] oldarr;
	delete[] newarr;
	

	return 0;
}
