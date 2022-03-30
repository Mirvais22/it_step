#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
using namespace std;

int my_strlen(char* s) {
	int count{ 0 };
	while (s[count] != '\0')
		count++;
	return count;
}

char* my_strnest(char* s, char c, int n) {
	for (size_t i = 0; i < n; i++)
		s[i] = c;
	return s;
}

char* my_strcat(char* s1, char* s2) {

	int count{ 0 };
	int count1{ 0 };
	int count2{ 0 };

	while (s1[count] != '\0') {
		count++;
	}
	while (s2[count1] != '\0') {
		count1++;
	}
	
	for (size_t i = count; i < count + count1; i++) {
		s1[i] = s2[count2];
		s1[i + 1] = '\0';
		count2++;
	}

	return s1;
}

char* my_strncat(char* s1, char* s2, int n) {

	int count{ 0 };
	int count1{ 0 };
	int count2{ 0 };

	while (s1[count] != '\0') {
		count++;
	}
	while (s2[count1] != '\0') {
		count1++;
	}

	for (size_t i = count; i < (count + count1)-(count1 - n); i++) {
		s1[i] = s2[count2];
		s1[i + 1] = '\0';
		count2++;
	}

	return s1;
}

char* my_strcmp(char* s1, char* s2) {
	int count{ 0 };
	int count1{ 0 };

	while (s1[count] != '\0') {
		count++;
	}
	while (s2[count1] != '\0') {
		count1++;
	}
	for (size_t i = 0; i < count; i++)
	{
		for (size_t j = 0; j < count1; j++)
		{
			if (s1[i] == s2[j]) {
				return 0;
			}
		}
	}
	return s1, s2;
}
int main() {
	setlocale(LC_ALL, "Russian");
	const int BUFF_SIZE = 512;
	cout << "1 :  ";
	char* buffer = new char[BUFF_SIZE];
	cin.getline(buffer,BUFF_SIZE);
	cout << endl;
	cout << "2 :  ";
	char* buffer1 = new char[BUFF_SIZE];
	cin.getline(buffer1, BUFF_SIZE);

	//int answer = my_strlen(buffer);
	//cout << answer << endl;

	//char* test = my_strnest(buffer, 'w', 4);

	/*char* task1 = my_strcat(buffer, buffer1);
	cout << task1;*/
	/*int n = 2;
	char* task2 = my_strncat(buffer, buffer1,n);
	cout << task2;*/

	char* task3 = my_strcmp(buffer, buffer1);
	cout << task3;

	cout << endl;
	cout<< "You text: " << buffer << endl;

	delete[] buffer;
	delete[] buffer1;
}
