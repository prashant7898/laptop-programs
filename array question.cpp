#include <stdio.h>
#include <stdlib.h>


int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);

	    int n;
        scanf("%d",&n);	    
	   int arr[n];
	   for(int i=0;i<n;i++){
	       scanf("%d",&arr[i]);
	   }
	   int brr[n];
	   int j=0;
	   int sum=0;
	   for(int i=0;i<n;i++){
	       sum+=arr[i];
	   }
	   for(int i=0;i<n;i++){
	       
	       if(i==j)
	       brr[i]=(sum-arr[j]);
	       j++;
	      
	   }
	   for(int i=0;i<n;i++){
	       printf("%d  ",brr[i]);
	   }
	
	return 0;
}


