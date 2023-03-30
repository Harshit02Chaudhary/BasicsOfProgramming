#include<iostream>
using namespace std;

int main(){

    int arr[5] = {3,6,2,7,8};
    int a[6] = {19,-3,7,5,8,10};

    void reverse(int arr[], int n);

    void printarray(int arr[], int size);

    reverse(arr,5);
    reverse(a, 6);
    printarray(arr,5);
    printarray(a,6);
     
}

void printarray(int arr[], int size){
        for(int i=0; i<size; i++){
            cout<< arr[i] <<" ";
        }
        cout<<endl;
}

void reverse(int arr[], int n){
        int start = 0;
        int end = n-1;
        
        while(start<=end){
            swap(arr[start], arr[end]);
            start++;
            end--; 
        }

}