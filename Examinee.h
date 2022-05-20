#include "GuestUser.h"
#include "Exam.h"
#pragma once

class Examinee: public GuestUser
{
private:

	char ExamineeID[5];
	char ExamineePassword[10];
  Result* Rslt;
  Exam* exm;

public:
	Examinee();
	Examinee(const char ID[], const char Password[], Result *r3, Exam *e);
	void displayExamineeDetails();  
	void setDetails(const char ID[], const char Password[]);
	~Examinee(); 

};