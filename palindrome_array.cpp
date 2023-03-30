#include<iostream>
using namespace std;

int main(){

  int arr[] = {3,6,0,6,3};
  int n = sizeof(arr)/sizeof(arr[0]);

  int i=0, j=n-1;

  while(i<=j){
      
      if(arr[i] == arr[j]){
        i++;
        j--;
      }
      else{
        cout<< "not palindrome";
        return 0;
      }
  }
  cout<< "palindrome";
}