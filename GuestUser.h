#include "Feedback.h"
#pragma once

class GuestUser
{
protected:

	char ExamineeName[20];
	char ExamineeAddress[40];
	char ExamineeEmail[15];
	char ExamineeDoB[10];
	char ExamineeNIC[10];
	char ExamineeContact[10];

public:
	GuestUser();
	GuestUser(const char Name[],const char Address[], const char Email[], const char DoB[], const char NIC[], const char contact[]);
	void setDetails(const char Name[], const char Address[], const char Email[], const char DoB[], const char NIC[], const char contact[]);
	void displayDetails();
  void giveFeedbackandReview(char Email, Feedback *f);
	~GuestUser();
};