#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


//2
void output(int* arr, int size) {
	for (int i = 0; i < size;i++) {
		cout << arr[i] <<' ';
	}
}

int findMin(int* arr, int size) {
	int min = arr[0];
	int indexMin = 0;
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
			indexMin = i;
		}
	}

	return indexMin;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//1
	/*srand(time(0));
	int randomNumber = rand() % 100;
	int guessNum;
	

	do {
		cout << "Введите число OT 1 ДО 100: ";
		cin >> guessNum;

		if (guessNum < randomNumber) {
			cout << "Введите число больше\n";
		}
		else if (guessNum > randomNumber) {
			cout << "Введите число меньше\n";
		}
		else {
			cout << "Вы угадали число!\n";
		}
	} while (randomNumber != guessNum);*/

	//2
	/*int low = 1;
	int high = 100;
	int mid, compare;

	do {
		mid = (low + high) / 2;
		printf("Ваше число %d ?\n", mid);
		cout << "1 - Число больше\n2 - Число меньше\n0 - Da!";
		cin >> compare;

		if (compare == 1) {
			low = mid + 1;
		}
		else if (compare == 2) {
			high = mid + 1;
		}
		else if (compare == 0) {
			printf("Ваше число %d", mid);
		}
	} while (compare !=0);*/

	//3
	//srand(time(0));
	//const int SIZE = 10;
	//int arr[SIZE];

	//for (int i = 0; i < SIZE; i++) {
	//	arr[i] = rand() % 1000;
	//}
	//output(arr, SIZE);
	//cout << endl;
	//int temp;
	//int a = 0;
	//for (int i = 0; i < SIZE - 1; i++) {
	//	for (int j = 0; j < SIZE - i - 1; j++) {
	//		if (arr[j] > arr[j + 1]){
	//			temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//			a++;
	//		}
	//	}
	//}
	//output(arr, SIZE);
	//cout << endl;
	//cout << " кол-во свичей = " << a;


	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE];
	int newArray[SIZE];
	int minEL;
	for (int i = 0; i < SIZE; i++) {
	arr[i] = rand() % 1000;
	}
	output(arr, SIZE);

	for (int i = 0; i < SIZE; i++) {
		minEL = findMin(arr, SIZE);
		newArray[i] = arr[minEL];
		arr[minEL] = INT_MAX;
		cout << endl;
		output(newArray, SIZE);
	}
	cout << endl;
	output(newArray, SIZE);
}
