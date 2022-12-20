#include <iostream>
using namespace std;

int bin(int *arr, int low , int high,int key){
    
    
    while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]<key){
        low=mid+1;
        
    }
    else if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        high=mid-1;
    }
  //  else{
   //     return ;
    //}
    }
    return -1 ;
    
    
}

int main(void) {
            int n;
            cin>>n;
            int arr[n];
            int temp=0;
           for(int i=0;i<n;i++){
                cin>>arr[i];
            
            }
           // int brr[n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(arr[j]>=arr[i]){
                      temp=arr[j];
                      arr[j]=arr[i];
                        arr[i]=temp;
                        
                        
                    }
                    
                }
            }
            int key;
            cin>>key;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<"  ";
            }

int p=bin(arr,0,n-1,key);
if(p==-1)
cout<<"not found\n";
else
cout<<"value found at "<<p;
            
	
	return 0;
}



