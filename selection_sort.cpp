#include<iostream>
using namespace std; 

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(arr[j]<arr[k]){
                k=j; 

                
            }
            swap(&arr[i],&arr[k]); 

        }
    }
}
