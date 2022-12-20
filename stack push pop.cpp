/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct stack{
    int arr[5];
    int tos;
    
};
void push(struct stack *,int );
int pop(struct stack *);


int main(){

    struct stack s;
    int i,x;
    s.tos=-1;
    for(int i=0;i<5;i++){
        printf("enter element no.\n");
        scanf("%d ",&x);
        push(&s,x);
    }
     for(int i=0;i<5;i++){
         x=pop(&s);
         if(x!=0)
            printf("popped element is %d\n",x);
            
     }
    return 0;
    
}
void push(struct stack *p,int x){
    if(p->tos==4)
    {
        printf("\n stack overflow\n");
        return ;
    }
    x=p->arr[++p->tos];
    
    printf("pushed element in stack %d\n",x);
    
    
}
 
 int pop(struct stack *p){
    int x;
     if(p->tos==-1){
         printf("stack is in underflow\n");
         return 0;
     }
     x=p->arr[p->tos--];
 
     return x;
 }

