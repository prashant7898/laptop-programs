#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int cum[n+1];
		cum[0]=0;
		for(int i=1;i<=n;i++){
			cum[i]=cum[i-1]+arr[i-1];
		}int j=0;
		int maxsum=INT_MIN;
		for(int i=1;i<=n;i++){
			int sum=0;
			for(j=0;j<=i;j++){
				sum=cum[i]-cum[j];
				maxsum=max(sum,maxsum);
			}
		}
		cout<<maxsum;
return 0;
}

