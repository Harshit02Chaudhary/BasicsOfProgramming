#include<bits/stdc++.h>
using namespace std;

int main(){
  int n ;
  int arr[] = {1, 4, 45, 6, 10, -8};
  n = sizeof(arr)/sizeof(arr[0]);
  int i = 0;
  int j = n-1;

  int key = 16;

  sort(arr, arr + n); 

  while(i<j){
    //cout<< i;
    if(arr[i]+arr[j] == key){
      cout<< arr[i] << " " << arr[j];
      break;
    }
    else if(arr[i]+arr[j] < key){
      i++;
    }
    else{
      j--;
    }
  }
}