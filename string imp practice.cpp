#include <iostream>
#include<cstring>

using namespace std;  
int main( ) {  
    string s1 = "Hello";    
        char ch[] = { 'C', '+', '+'};    
        string s2 = string(ch); 
        string s3="how are you";
        s1=s2.append(s1);
        cout<<s1<<endl;    
        cout<<s2<<endl;    
        string s4=strcmp(s3,s2);
        cout<<s3<<endl;
        
}  
