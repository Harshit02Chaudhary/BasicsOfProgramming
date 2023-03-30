#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int arr[] = {12,3,4,1,6,9};
  int n = sizeof(arr)/sizeof(arr[0]);

  int sum = 13;

  int k=0, i=k+1, j=n-1;
  
  for(k=0; k<n; k++){
      
      i=k+1, j=n-1;
      
      while(i<j){
          
          if(arr[i] + arr[j] + arr[k] < sum){
            i++;
          }

          else if(arr[i] + arr[j] + arr[k] > sum){
            j--;
          }

          else{
            cout<< arr[k] << " " << arr[i] << " " << arr[j] ;
            return 0;
          }
      }
  }
  cout<< "no valid elements present";
}