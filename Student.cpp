#include "Student.h"


Student::Student(char *name,char *sername , char *language)
{
	this->name = new char[strlen(name) +1];
	this->sername = new char[strlen(sername) +1];
	this->language = new char[strlen(name) +1];

	strcpy(this->name,name);
	strcpy(this->sername,sername);
	strcpy(this->language,language);
}

Student::~Student(void)
{
}

char Student :: getName(){
	return *name;
}

char Student :: getSername(){
	return *sername;
}

char Student :: getLanguage(){
	return *language;
}

void Student :: show(){
	cout << this->name << endl;
	cout << this->sername << endl;
	cout << this->language << endl;
}



