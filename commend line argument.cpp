#include<stdio.h>
#include<conio.h>
int main(int argc,char* argv[]){
int i;
printf("number of arguments is %d\n",argc);
for(i=0;i<argc;i++){
	printf("argument %d = %s\n",i,argv[i]);
}

}

