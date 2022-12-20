#include<iostream>
using namespace std;
class member{
protected:
	string name;
	int age;
	long long phone_no;
	int salary;
	public:
		void printsalary(){
			cout<<"salary is "<<salary<<endl;
			
		}
};
class employee:public member{
	public:
		void setmembers(string n,int a,long long phone,int sal){
			name=n;
	age=a;
	phone_no=phone;
	 salary=sal;
		}
			void display(){
			cout<<"name is "<<name<<endl;
			cout<<"age is "<<age<<endl;
			cout<<"salary  is "<<salary<<endl;
			cout<<"phone no. is "<<phone_no<<endl;
		}
	string specialization;
	string department;
	
};
class manager:public member{
	public:
		void setmembers(string n,int ag,long long phone,int sal){
			name=n;
	age=ag;
	phone_no=phone;
	 salary=sal;
		}
		void display(){
			cout<<"name is "<<name<<endl;
			cout<<"age is "<<age<<endl;
			cout<<"salary  is "<<salary<<endl;
			cout<<"phone no. is "<<phone_no<<endl;
		}
	string specialization;
	string department;
	
};
int main(){
	employee e;
	manager m;
//	e.name="rahul";
//	m.name="piyush";
//	e.age=20;
//	m.age=23;
//	e.salary=100000;
//	m.salary=200000;
//	e.phone_no=7898246089;
//	long long r=m.phone_no=7415456193;
e.setmembers("rahul",20,7898246089,100000);
m.setmembers("piyush",23,7415456193,200000);
	e.printsalary();
	m.printsalary();
	e.display();
	m.display();
	
//cout<<e.name<<endl;
//cout<<m.name<<endl;
//cout<<e.age<<endl;
//cout<<m.age<<endl;
//cout<<e.phone_no<<endl;
//cout<<r<<endl;
return 0;
}

