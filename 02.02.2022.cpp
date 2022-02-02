#include <iostream>
using namespace std;

//1
//int input(int* arr, int size)
//{
//	cout << "1 array : ";
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand();
//	}
//	return *arr;
//}
//
//void out1(int* arr, int n)
//{
//	for (int i = n - 1; i >= 0; i--)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//int input1(int* array, int size) 
//{
//	cout << "2 array : ";
//	for (int i = 0; i < size; i++)
//	{
//		array[i] = rand();
//	}
//	return *array;
//}
//
//void out2(int* array, int m) 
//{
//	for (int i = m - 1; i >= 0; i--)
//	{
//		cout << array[i] << " ";
//	}
//}
//const int  SIZE = 5;
//

	//1

	/*cout << "Введите размер 1 массива: " << endl;
	int n = 0;
	cin >> n; 
	int* mas = new int[n];

	input(mas, n);
	out1(mas, n); 
	cout << endl;

	cout << "Введите размер 2 массива: " << endl;
	int m = 0;
	cin >> m; 
	int* mass = new int[m];

	input(mas, m);
	out1(mas, m);*/

//2
//void Arr(int[][SIZE], const int size);
//int findMin(int[][SIZE], const int size);
//int findMax(int[][SIZE], const int size);


bool calcFirstMove();
void drowCube(int res);
int computerOrPlayerThrow();
void showIntermediateResult(int pointsOfComputer, int pointsOfUser, int numberThrow);

int main() {
	//	setlocale(LC_ALL, "Russian");
	//	srand(time(NULL));

		/*int matrix[SIZE][SIZE] = {};

		Arr(matrix, SIZE);

		cout << endl;
		cout << "Мин: " << findMin(matrix, SIZE) << endl;
		cout << "Макс: " << findMax(matrix, SIZE) << endl;

		return 0;
	}

	void Arr(int arr[][SIZE], const int size)
	{
		for (int i = 0; i < size; i++)
		{

			for (int j = 0; j < size; j++)
			{
				arr[i][j] = 30 + rand() % 31;

				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

	int findMin(int arr[][SIZE], const int size)
	{
		int min = arr[0][0];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[i][j] < min)
					min = arr[i][j];
			}
		}
		return min;
	}

	int findMax(int arr[][SIZE], const int  size)
	{
		int max = arr[0][0];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[i][j] > max)
					max = arr[i][j];
			}
		}
		return max;*/




	setlocale(LC_ALL, "rus");
 srand(time(NULL));
 
 int playerScore = 0; // для накопления очков
 int computerScore = 0;
 int whoMove = 0; 
 char userName[16] = {};
 
 cout << "Ваше имя (латиницей): ";
 cin >> userName;
 
 whoMove = calcFirstMove(); // если будет 0 - ходит игрок, 1 - ходит компьютер
 
 for (int i = 0; i < 4; ++i)
 {
 for (int j = 0; j < 2; j++)
 {
 if (whoMove)
 {
 cout << "\nХодишь ты. ";
 playerScore += computerOrPlayerThrow();
 }
 else
 {
 cout << "\nХодит компьютер. ";
 computerScore += computerOrPlayerThrow();
 }
 whoMove = !whoMove; // инверсия
 }
 
 showIntermediateResult(computerScore, playerScore, i); 
 } 
 
 if (computerScore > playerScore)
 {
 cout << "\n\nПобедитель этой игры - КОМПЬЮТЕР\n!";
 cout << "Желаем успехов в следующий раз.\a\a\a\a\a\n\n";
 }
 else if (computerScore < playerScore)
 {
 cout << "\n\nПобедитель этой игры - " << userName << "!!! ";
 cout << "Поздравляем!!!\a\a\a\a\a\n\n";
 }
 else
 {
 cout << "\n\nВ этой игре НИЧЬЯ\a\a\a\a\a\n\n";
 }
 
 return 0;
}
 
bool calcFirstMove() // генерирует и возвращает случайное число 0 или 1
{
 return rand() % 2;
}
 
void showIntermediateResult(int computerScore, int playerScore, int numberThrow) {
 cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
 cout << "Комп: " << computerScore << "  |||  Ты:" << playerScore << endl;
 cout << "После " << numberThrow + 1 << "-го броска ";
 if (computerScore > playerScore)
 cout << " выигрывает компьютер!!!\n";
 else if (computerScore < playerScore)
 cout << " выигрываете Вы!!!\n";
 else cout << " ничья!!!\n";
 cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}
 
// вызывается в функции computerOrPlayerThrow()
void drowCube(int res) 
{
 switch (res)
 {
 case 1:
 cout << "1\n";
 break;
 case 2:
 cout << "2\n";
 break;
 case 3:
 cout << "3\n";
 break;
 case 4:
 cout << "4\n";
 break;
 case 5:
 cout << "5\n";
 break;
 case 6:
 cout << "6\n";
 break;
 }
}
 
int computerOrPlayerThrow() // реализация броска пары кубиков и возврат полученных очков
{
 int result = 0;
 char c = 0;
 
 cout << "Нажми Y и Enter, чтобы бросить кубики: "; 
 do
 {
 cin.sync(); // очистка буфера
 cin >> c;
 } while (c != 'y' && c != 'Y');
 
 int tmp = 0; // для накопления очков пары брошенных кубиков
 for (int i = 0; i < 2; ++i) {
 tmp = 1 + rand() % 6;
 drowCube(tmp);
 result += tmp;
 cout << endl;
 }
 
 cout << "Всего на кубиках " << result << " очков";
 return result;
}
