// departmentstudent.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <map>

using namespace std;

struct Student {
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
};

void ReadIN()
{

}

int main()
{

    return 0;
}

