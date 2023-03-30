#include<iostream>
using namespace std;

int main(){
   int m = 5, n = 5;
    int arr1[m] = {2,3,5,5,7};
    int arr2[n] = {3,4,5,6,6};

    int i = 0, j = 0;
    
    while(i<m && j<n){
      //cout<<arr1[i]<< endl; 
      if(arr1[i] == arr1[i-1]){
        i++;
      }
      else if(arr2[j] == arr2[j-1]){
        j++;
      }
      else if(arr1[i] < arr2[j]){
        i++;
      }
      else if
        (arr1[i] == arr2[j]){
        cout<< arr1[i] ;
        i++;
        j++;
      }
      else if
        (arr1[i] > arr2[j]){
        j++;
      } 
    }
    
}