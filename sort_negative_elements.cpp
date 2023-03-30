#include<iostream>
using namespace std;

int main(){
  int m , j = 0;
  int arr1[7] = {2,-1,4,-3,-4,5,6};
 
 // m = sizeof(arr1)/sizeof(arr1[0]);
 
  for(int i=0; i<7; i++){
    
    if(arr1[i] < 0){
      swap(arr1[i],arr1[j]);
      j++;
    }
  }
  for(int i=0; i<7; i++){
    cout<< arr1[i] << " ";
  }
}