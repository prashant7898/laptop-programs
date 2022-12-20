#include<stdio.h>
#include<string.h>
//using namespace std;
union student {
	int rollno;
	char name[34];
	char favchar;
	
}piyush,rahul,pushpraj;

int main(){
//union student rahul,piyush,pushpraj;

rahul.rollno=1294;
strcpy(rahul.name,"hello");
printf("%s is the name of rahul ",rahul.name);
printf("%d is the name of rahul ",rahul.rollno);
return 0;
}

