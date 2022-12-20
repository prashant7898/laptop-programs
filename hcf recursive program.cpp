/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int hcf(int n1,int n2){
    if(n1%n2==0)
    return n2;
    if(n1>n2)
        hcf(n1%n2,n2);
    else
        hcf(n1,n2%n1);
}

int main()
{
    printf("Hello World ");
    int s=hcf(25,500);
    printf("%d",s);

    return 0;
}

