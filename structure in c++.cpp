#include<iostream>
#include<string.h>
using namespace std;
struct book{
	int bookid;
	string title;//char title[20];
	float price;
	void inputbook(){
	struct book b;
	cin>>bookid;
	cin.ignore();
	getline(cin,title);//cin.getline(b.title,20)
	cin>>price;
	
}
void displaybook(){
	cout<<bookid<<" "<<title<<" "<<price<<endl;
}
};

int main(){
		struct book b1={1,"cpp",420990
		};
		struct book b2,b3;
		b2.bookid=2;
		b2.title="helo";//strcmp(b2.title,"helo")
		b2.price=23094;
		b3.inputbook();
		b1.displaybook();
		b2.displaybook();
		b3.displaybook();
return 0;
}

