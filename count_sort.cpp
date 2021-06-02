#include<iostream> 
using namespace std; 
int main(){
int array[6]={6,9,2,4,1,7}; 
int count[9]; 
int i; 
for(i=0;i<=9;i++){
	count[i]=0; 

}
for(int k=0;k<=9;k++){
	count[array[i]]++; 
}
i=0; 
int j=0; // required value will be available in the index of the count array 
while (i<7){ 
	if (count[i]>0){
		array[j]=i; 
		count[i]--; 
		j++; 

	}
else{
	i++;
}
}
}
