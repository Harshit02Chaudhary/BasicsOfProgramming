#include<iostream>
using namespace std;

int main(){
    int size;
    cout<< "enter the size of array : ";
    cin>> size;

    int arr[100];
    //taking input in array
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }

    int sumofarray(int arr[], int size);

    cout<< "sum of this array is : "<< sumofarray(arr,size);
}

int sumofarray(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i]; 
    }
    return sum;
}