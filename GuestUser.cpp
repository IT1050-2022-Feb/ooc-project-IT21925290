#include "GuestUser.h"
#include <cstring>
#include<iostream>
using namespace std;

GuestUser::GuestUser()
{
	strcpy(ExamineeName,"");
	strcpy(ExamineeAddress,"");
	strcpy(ExamineeEmail,"");
	strcpy(ExamineeDoB,"");
	strcpy(ExamineeNIC,"");
	strcpy(ExamineeContact,"");
}

GuestUser::GuestUser(const char Name[],const char Address[], const char Email[], const char DoB[], const char NIC[], const char contact[])
{
	strcpy(ExamineeName, Name);
	strcpy(ExamineeAddress, Address);
	strcpy(ExamineeEmail, Email);
	strcpy(ExamineeDoB, DoB);
	strcpy(ExamineeNIC, NIC);
	strcpy(ExamineeContact, contact);
}

void GuestUser::setDetails(const char Name[], const char Address[], const char Email[], const char DoB[], const char NIC[], const char contact[])
{
  strcpy(ExamineeName, Name);
	strcpy(ExamineeAddress, Address);
	strcpy(ExamineeEmail, Email);
	strcpy(ExamineeDoB, DoB);
	strcpy(ExamineeNIC, NIC);
	strcpy(ExamineeContact, contact);
}

void GuestUser::displayDetails()
{
  cout << "Examinee Name :" << ExamineeName << endl;
  cout << "Examinee Address :" << ExamineeAddress << endl;
  cout << "Examinee Email :" << ExamineeEmail << endl;
	cout << "Examinee Date of Birth :" << ExamineeDoB << endl;
	cout << "Examinee NIC :" << ExamineeNIC << endl;
	cout << "Examinee Contact Number :" << ExamineeContact << endl;
}

void GuestUser::giveFeedbackandReview(char Email, Feedback *f)
{
  f -> displayFeedbackDetails();
}

GuestUser::~GuestUser()
{
	//Destructor
}