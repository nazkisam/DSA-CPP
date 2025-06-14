#include<iostream>
using namespace std;
 

void insertionSort(int arr[] , int size){

for(int i=1 ; i<size ; i++){

int j  = i-1; 
int temp = arr[i];
for(;j>=0;j--){
  
  if(arr[j]>temp){
    arr[j+1] = arr[j];
  }
  else{
    break;
  }

}
 arr[j+1] = temp;
 
}

}






int main(){
    int arr[5] = {3,2,1,5,4};
    
    insertionSort(arr,5);

    cout<<"Sorted Array ";

    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i];
    }
}