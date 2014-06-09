#include "Group.h"


Group::Group(void)
{
}


Group::~Group(void)
{
}

void Group::menu(){
	system("cls");
	readStudents("1.txt");
	cout << "1.Add student " << endl;
	cout << "2.Show all " << endl;
	cout << "3.Exit " << endl;
	char answer;
	while(true){
		answer = getch();
		switch(answer){
		case '1':
			system("cls");
			addStudent("1.txt");
			break;
		case '2':
			system("cls");
			showAll();
			break;
		case '3':
			exit(0);
			break;
		};
	}
}

void Group :: showAll(){
	multimap<char * , Student> :: iterator iter = students.begin();

	while ( iter != students.end()){
		(*iter).second.show();
		iter++;
	}
	system("pause");
	menu();
}

void Group :: readStudents(char *path){
	char tempName[20];
	char tempSername[20];
	char tempLanguage[20];
	Student	*s;

	ifstream f("1.txt");

	while (!f.eof()){
		f.getline(tempName,sizeof(tempName));
		f.getline(tempSername,sizeof(tempSername));
		f.getline(tempLanguage,sizeof(tempLanguage));

		s = new Student(tempName,tempSername,tempLanguage);
		students.insert(pair<char *, Student>(tempSername,*s));
	
	}
	f.close();
}

void Group :: addStudent(char *path){
	char temp[25];
	
	ofstream f(path,ios :: app);
	cout << "Enter name :" << endl ;
	cin >> temp;
	char *name = new char[strlen(temp) + 1];
	strcpy(name,temp);
	f<<endl<<name<<endl;

	cout << "Enter sername :" << endl ;
	cin >> temp;
	char *sername = new char[strlen(temp) + 1];
	strcpy(sername,temp);
	f<<sername<<endl;
	
	cout << "Enter language :" << endl ;
	cin >> temp;
	char *language = new char[strlen(temp) + 1];
	strcpy(language,temp);
	f<<language<<endl;

	Student *s = new Student(name,sername,language);

	students.insert(pair<char *,Student>(sername,*s));
	f.close();
	menu();
}

