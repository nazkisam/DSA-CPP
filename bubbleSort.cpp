#include<iostream>
#include<algorithm>
using namespace std;

// n is the size of the array
void bubbleSort(int arr[], int n){

for(int i =1; i<n ; i++){

  for(int j=0; j<n-1;j++){

    if(arr[j]>arr[j+1]){

      swap(arr[j],arr[j+1]);
  
     }
   }
 }
} 

int main(){
int arr[5] = {2,3,5,1,4};

bubbleSort(arr,5);


cout<<"sorted array";

for(int i= 0 ; i<5 ; i++){
 cout<<arr[i]<<" ";
}

return 0;
}
