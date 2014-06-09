#pragma once
#include <iostream>
using namespace std;
class Student
{
	char *name;
	char *sername;
	char *language;

public:
	char getName();
	char getSername();
	char getLanguage();
	void show();
	Student(char *name,char *sername , char *language);
	~Student(void);
};

