#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void FC(int F) {
	double C;
	C = (F - 32) / 1.8;
	cout << C<<endl;
}

void DMM(int D) {
	double MM;
	MM = D * 25.4;
	cout << MM<<endl;
}

void MKM(int M) {
	double KM;
	KM = M*1.60094;
	cout << KM << endl;
}

void BvT(int B) {
	double T;
	T = B * 0.1364;
	cout << T << endl;
}

void V(int h, int r) {
	double p = 3.14;
	double V = p * (r * r) * h;
	cout << V<<endl;
}
int Max(int a, int b) {
	if (a > b) {
		cout << a << endl;
		return a;
	}
	else if (b > a) {
		cout << b << endl;
		return b;
	}
	else {
		cout << "=\n";
	}
}

int SR(int a, int b) {
	if (a > b) {
		cout <<a<<">"<<b<< endl;
		return a;
	}
	else if (b > a) {
		cout << a << "<" << b << endl;
		return b;
	}
	else {
		cout << a << "=" << b << endl;
	}
}

int main() 
{
	FC(50);
	DMM(3);
	MKM(8);
	BvT(72);
	V(43, 5);
	Max(1, 2);
	SR(1, 1);
}
