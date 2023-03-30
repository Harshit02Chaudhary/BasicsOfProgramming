#include<iostream>
using namespace std;

int minswaps(int arr[], int n, int key){

  int count = 0;

  //find element less than equal to k in array
  for(int i=0; i<n; i++){
    if(arr[i] <= key){
        count++;
    }
  }

  //check first window.. 
  int bad = 0;
  for(int i=0; i<count; i++){
    if(arr[i] > key){
      bad++;
    }
  }

  //check remaining window...
      //agr previous element bad(ganda) hai...or vo window se gya hai to bad ko decrease kr do
      //agr new element bad(ganda) hai...or vo window me aaya hai to bad ko increase kr do 
  int ans  = bad;
  for(int i=0, j=count; j<n; i++,j++){
      
      if(arr[i] > key){
        bad--;
      }
      
      if(arr[j] < key){
        bad++;
      }

     min(ans, bad);
  }

  return ans;
}

int main(){

  int n;
  int arr[] = {2,7,9,5,8,7,4};
  n = sizeof(arr)/sizeof(arr[0]);

  int key = 5;

  cout<< minswaps(arr, n, key);

}
