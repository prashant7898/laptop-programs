#include <stdio.h>
#include <stdlib.h>
#define MIN(i, j) (((i) < (j)) ? (i) : (j))

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d%d",&n,&k);
	    int a=n%k;
	    int b=n/k;
	    int arr[k];
	    for(int i=0;i<k;i++){
	        if(i==0){
	            arr[i]=(a+b);
	        }else
	            arr[i]=b;
	    }
	    int min=0;
	    for(int i=0;i<k;i++){
	        printf("%d\n",arr[i]);
	    }
	    
	   
	    for(int i=0;i<=k-2;i++){
	        min+=(abs(arr[i+1]-arr[i]));
	    }
	    printf("%d\n",min);
	}
	return 0;
}


