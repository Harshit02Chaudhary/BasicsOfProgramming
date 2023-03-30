#include<iostream>
using namespace std;


int first_repeating(int arr[], int n){

//find max element in array 
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
          max = arr[i];
        }
    }

//create temp array and initialize with zero
    int temp[max+1];

    for(int i=0; i < (max+1); i++){
        temp[i] = 0;
    }

//store frequency of each element in temp array
    for(int i=0; i<n; i++){
        int num = arr[i];
        temp[num]++;
    }

//check if frequency greater than one....print that element
    for(int i=0; i<n; i++){
        int num = arr[i];
        if(temp[num] > 1){
          return i;
        }
    }

  return -1;
}

int main(){

    int arr[] = {10,5,3,4,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<< arr[first_repeating(arr, n)];
}