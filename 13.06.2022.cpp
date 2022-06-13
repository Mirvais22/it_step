//word.h
#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <cstring>

using namespace std;

class word
{
	string eng;
	string rus;

public:
	word() 
	{ 
		eng = nullptr;
		rus = nullptr; 
	}
	word(string cstr)
	{
		auto len = cstr.find_first_of('\t');
		eng = cstr.substr(0, len);
		rus = cstr.substr(len + 1);
	}
	string get_eng() { return eng; }
	string get_rus() { return rus; }
};



//main
#include <iostream>
#include "word.h"
#include <vector>

using namespace std;

int main()
{
	const char str[255]{ "gainst	предл.; поэт.; см. against  см. against." };
	string cstr(str);
	word a = word(cstr);
	cout << a.get_eng()<<"\n"<<a.get_rus();
}
