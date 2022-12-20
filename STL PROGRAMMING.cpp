#include<iostream>
using namespace std;


template <typename V>
V greater(V a,V b){
    return (a>b)?a:b;
}

int main()
{
      
cout<<greater('A','R')<<endl;
    return 0;
}
