/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
#include <iostream>
using namespace std;
class rahul{
    int x,y;
    public:
    rahul():x(0),y(0){}
    
    void operator+(rahul r){
        rahul temp;
        temp.x=x+r.x;
        temp.y=y+r.y;
        cout<<temp.x<<" "<<temp.y;
        
    }
    void set(int a,int b)
    {
       x=a;
	   y=b;	
	}
};
int main(){
    rahul r1,r2;
    r1.set(3,4);
    r2.set(5,2);
    
    r1+r2;
    //cout<<"complex no. "<<r3;
    return 0;
    
    
}
*/
#include <iostream>
using namespace std;
int rahul=90;
static void function(int a ,int b)
{
cout << "Value of a is : " <<b<<a<< endl;
}
void function(int &b)
{
cout << "Value of b is : " <<b<< endl;
}

int main()
{
int rahul=87;
rahul=9;
cout<<::rahul+rahul;
int x=10;
function(x,78);
function(x);
return 0;
}/*
#include <iostream>

using namespace std;

void function(int);
void function(int,int);

void function(int x)
{
std::cout << "Value of x is : " <<x<< std::endl;
}
void function(int y,int z=87)
{
std::cout << "Value of y is : " <<y<< std::endl;
std::cout << "Value of z is : " <<z<< std::endl;
}
int main()
{
function(7);
return 0;
}

double hello(double ,int);
int hello(int);
//void function(float);
//void function(int);
void function(float x)
{
std::cout << "Value of x is : " <<x<< std::endl;
}
void function(int y)
{
std::cout << "Value of y is : " <<y<< std::endl;
}
int main()
{
function(3.4f);
function(34);
return 0;
}*/

/*int main()
{
   // cout<<"Hello World";
  //hello();
  // cout<<hello(5.5,4.5);
  // hello();
    return 0;
}
double hello(double a,int b){
    
    printf("hello");
    return a+b;
}
int hello(int r){
    return 3.14*r*r;
}*/
