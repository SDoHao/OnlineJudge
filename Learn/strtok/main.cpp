#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char text1[15] = "abc.c$ccc";
	char* p;
	p = strtok(text1, ".$");
	if (p) printf("%s\n", p);//cout << *p << endl;
	p = strtok(nullptr, ".$");
	if (p) printf("%s\n", p);//cout << *p << endl;
	p = strtok(nullptr, ".$");
	if (p) printf("%s\n", p);

	string str = "44.44-jJ";
	char text2[10];//char* text2 = (char*)malloc(sizeof(char) * 10);
	char* buff = nullptr;
	strcpy(text2, str.c_str());

	p = strtok_s(text2, "-.", &buff);
	if (p) printf("%s\n", p);
	p = strtok_s(nullptr, "-.", &buff);
	if (p) printf("%s\n", p);
	p = strtok_s(nullptr, "-.", &buff);
	if (p) printf("%s\n", p);
	return 0;
}