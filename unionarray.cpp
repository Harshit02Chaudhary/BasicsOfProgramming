#include<iostream>
using namespace std;

int main(){
    
    int arr1[] = {2,3,5,5,7,8,9};
    int arr2[] = {3,4,5,6,6};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

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
        cout<< arr1[i];
        i++;
      }
      else if
        (arr1[i] == arr2[j]){
        cout<< arr1[i] ;
        i++;
        j++;
      }
      else {
        cout<< arr2[j];
        j++;
      } 
    }
     //for remaining element of larger array
    while(i<m){
      cout<< arr1[i++];
      //i++;
    }
    while(j<n){
      cout<< arr2[j++];
      //j++;
    }
}
