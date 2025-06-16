#include<iostream>

using namespace std;


void insertionSort(int arr[], int size){

for(int i=1;i<size;i++){

int temp = arr[i];
 
int j = i-1;

for(;j>=0; j--){
  
  if (arr[j]>temp){
    arr[j+1]= arr[j];


  }
  else{
    break;
  }

}

  arr[j+1]=temp;
}

}

int main(){

int arr[5] = {3,2,1,5,6};

insertionSort(arr,5);

cout<<"sorted array";

for(int i= 0 ; i<5 ; i++){
 cout<<arr[i]<<" ";
}

return 0;


}