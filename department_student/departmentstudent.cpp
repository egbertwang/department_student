// departmentstudent.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <map>
#define N 20
#define M 300

using namespace std;

/*struct Student {
	string Sno;
	string FreeTime[50];
	string ApplicationsDepartment[5];
	string Tags[10];
	string AlreadyDepartment[5];
	int NumDepartment;
};

struct Department {
	string Did;
	string EventSchedules[50];
	string Tags[10];
	int LitmitNum;
	int AMember[300];
	int BMember[300];
	int SNum;
};*/

struct Department {
	string department_no;
	string event_schedules[20];
	string tags[15];
	int accept_members;
	int member_limit;
};
struct Student {
	string student_no;
	string applications_department[5];
	string free_time[20];
	string tags[15];
	int join_departments;
};



void ReadIN()
{

}

int main()
{
	
	system("pause");
    return 0;
}

