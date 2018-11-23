#include <stdio.h>
#include <conio.h>
#include <string.h>

const char *t_name[] = {
    "Rachit Kataria",
    "Yogesh Kumar",
    "Niyati Tank",
    "Ritik Gupta",
    "Glenn Monteiro",
};

const char *t_add[] = {
	"Vashi",
	"Govandi",
	"Undefined",
	"Kalamboli",
	"Ulwe",
};

const int t_rollno[5] = {70,64,36,18,35};

struct Details {
	char Add[1024];
	char Name[100];
	int Roll;
};

void printDetails(struct Details *Stud,int i);

void main()
{
	int i;
	struct Details Stud[5];
	
	for(i=0;i<5;i++)
	{
		Stud[i].Roll=t_rollno[i];
		strcpy(Stud[i].Name,t_name[i]);
		strcpy(Stud[i].Add,t_add[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printDetails(&Stud[i],i+1);
	}
}

void printDetails(struct Details *Stud,int i)
{
	printf("\n\nDetails For %dth Student :\n\nName : %s\nRoll No : %d\nAddress : %s",i,Stud->Name,Stud->Roll,Stud->Add);
}
