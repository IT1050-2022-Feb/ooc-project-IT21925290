#include "Examinee.h"
#include<iostream>
#include<cstring>

using namespace std;

Examinee::Examinee()
{
	strcpy(ExamineeID, "");
	strcpy(ExamineePassword, "");
}
Examinee::Examinee(const char ID[], const char Password[], Result *r, Exam *e)
{
  Rslt = r;
  exm = e;
	strcpy(ExamineeID, ID);
	strcpy(ExamineePassword, Password);
}

void Examinee::displayExamineeDetails()
{
  cout << "Examinee ID :" << ExamineeID << endl;
	cout << "Examinee password :" << ExamineePassword << endl;
	Rslt -> display();
  exm -> displayExamDetails();
}

void Examinee::setDetails(const char ID[], const char Password[]) 
{
  strcpy(ExamineeID, ID);
	strcpy(ExamineePassword, Password);
}

Examinee::~Examinee()
{
	cout << "Examinee deleting" << endl;
}