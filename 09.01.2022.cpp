#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


		int main() {

			setlocale(LC_ALL, "Russian");

			//1
			//int a = 0;
			//cin >> a;
			//int b = a * a;
			//int c = b * b;

			//cout << c << endl;

			//2
			/*double x, y, z;
			cin >> x ;
			cin >> y;
			cin >> z;

			double g = (x * y) / (z * 4);
			cout <<g<< endl;*/

			//3
			/*float a, b, c;
			cin >> a;
			cin >> b;
			cin >> c;
			if (a < b && b < c) {
				cout << "Da "<< endl;
			}
			else if (b > a && a > c) {
				cout << "Da "<< endl;
			}
			else {
				cout << "Net";
			}*/

			//4
			//int a = 3;
			//int b = 4;
			//int c = 7;
			//if (a == b)
			//	cout << "da";
			//else if (b == c)
			//	cout << "da";
			//else if (c == a)
			//	cout << "da";
			//else
			//	cout << "net";

			//5
			//for (int i = 0; i < 4; i++) {
			//	cout<<"*******" << endl;
			//}

			//6
			/*int a = 1;
			int b = 0;

			for (int i = 0; i < 37; i++) {
				a = a + 3;
				cout << a << " + ";
				b = b + a;
			}

			cout << endl;
			cout << b;*/



			//n

			/*int a = 0;
			int b = 0;
			int c = 0;
			int d = 123;

			a = d / 100;
			cout<<a<<endl;

			b = (d % 100) / 10;
			cout << b<<endl;

			c = d % 10;
			cout << c << endl;*/



			//n1
			//int a, b;
			//cin >> a;
			//cin >> b;

			//if (a > b) {
			//	cout << "pervoe bolshe = " << a<<endl;
			//}
			//else if (b > a) {
			//	cout << "vtoroe bolshe = " << b << endl;
			//}
			//n2
			//int a1, b1, c1;
			//cin >> a1;
			//cin >> b1;
			//cin >> c1;

			//if (a1 == b1 || a1 == c1 || b1 == c1) {
			//	cout << "yes";
			//}
			//else {
			//	cout << "no";
			//}




			//CowAndBull

			/*const int Size = 4;

			int CowBull[Size];
			int findNum[Size];
			int bull = 0;
			int cow = 0;

			srand(time(NULL));
			for (int i = 0; i < Size; i++)
			{
				CowBull[i] = rand() % 10;
			}
			for (int i = 0; i < Size; i++)
			{
				cout << "попробуйте угадать: ";
				cin>>findNum[i];
				cout << endl;
			}

			for (int i = 0; i < Size; i++) {
				if (findNum[i] == CowBull[i]) {
					cout << "Вы угадали!" << endl;
					bull+=1;
				}
				else {
					cout << "Не угадал(" << endl;
				}
			}

			for (int i = 0; i < Size; i++) {
				for (int j = 0; j < Size; j++) {
					if (findNum[i] == CowBull[j]) {
						cout << "Вы угадали!" << endl;
						cow+=1;
					}
				}
			}

			cout << "Быков : " << bull<<endl;
			cout << "Коров : " << cow - bull << endl;
			cout<<"Загаданное число было: ";
			for (int i = 0; i < Size; i++)
			{
				cout<<CowBull[i];
			}*/

		}
