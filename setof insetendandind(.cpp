#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;

	    set<int>s1;
	    set<int>s2;
	    int c=0;
	    while(n--){
	        int x,y;
	        cin>>x>>y;
	        if(s1.find(x)==s1.end()){
	            s1.insert(x);
	            c++;
	        }
	        if(s2.find(y)==s2.end()){
	            s2.insert(y);
	            c++;
	        }
	    }
	    
	    cout<<c<<endl;
	    
	}
	return 0;
}

