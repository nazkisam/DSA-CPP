#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
 int start = 0;
 int end = size -1;
 int mid = start +(end -start)/2;

while (end>=start){
if(arr[mid] == key){
cout<<"element is present at :";
return mid;
}
else if(arr[mid]>key) {
 end = mid-1;
 mid = start + (end - start)/2;

}
else if(arr[mid]<key){
  start = mid+1;
  mid = start + (end - start)/2;
  }
}
cout<<"not present";
return -1;
}




int main(){
  
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int size = 10;
int key = 10;

int result = binarySearch(arr,size,key);
cout<<result;

return 0;
}