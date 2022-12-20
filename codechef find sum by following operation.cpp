#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int arr[n];
	    int l[q],r[q];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=0;i<q;i++)
	    cin>>l[i]>>r[i];
	    int j=0;
	    
	        int f=0;
	    for(int i=l[j]-1;i<r[j] ;i++){
	        
	        if(f%2==0)
	          arr[i]+=1;
	        else
	          arr[i]-=1;
	        f++;
	        if(i==r[j]-1 && q!=0){
	            j++;
	            q--;
	            continue;
	        }
	       
	    }
	    
	      
	    int sum=0;
	    for(int i=0;i<n;i++)
	    sum+=arr[i];
	    for(int i=0;i<n;i++)
	    cout<<arr[i]<<"  ";
	    
	    
	    cout<<sum<<endl;
	}
	return 0;
}

