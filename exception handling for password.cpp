#include<iostream>
#include<cctype>
using namespace std;
int main(){
string s;
cin>>s;
int flag=0,flag1=0,flag2=0;
try{
	for(int i=0;i<s.length();i++){
		if(isupper(s[i]) )
		flag=1;
		if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' ||s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' )
		flag1=1;
		//(32–47 / 58–64 / 91–96 / 123–126
		if((s[i]>31 && s[i]<=47) || (s[i]>57 && s[i]<=64) || (s[i]>90 && s[i]<=96) || (s[i]>122 && s[i]<=126))
		flag2=1; 
		
}
if(flag==1 && flag1==1 && flag2==1 && s.length()>=6)
cout<<"the given password is correct\n";
else 
throw "ther given password is not correct\n";

}
catch(const char *e){
	cout<<"exception is present , pls resolve it\n"<<e<<endl;
}
cout<<"ggg";
return 0;
}

