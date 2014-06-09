
#include <iostream>
#include <map>
#include <conio.h>
#include <fstream>
#include "Student.h"
using namespace std;
#pragma once
class Group
{
public:
	multimap <char *,Student> students;
	void showAll();
	void addStudent(char *path);
	void readStudents(char *path);
	void menu();
	Group(void);
	~Group(void);
};

