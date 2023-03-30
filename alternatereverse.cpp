#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3,6,4,8,-2};
    int brr[6] = {2,66,-15,23,5,99};

    void altreverse(int arr[], int size);
    void printarray(int arr[], int size);

    altreverse(arr, 5);
    altreverse(brr, 6);

    printarray(arr, 5);
    printarray(brr, 6);

}

void printarray(int arr[], int size){
        for(int i=0; i<size; i++){
            cout<< arr[i] << " ";
        }
        cout<< endl;
}

void altreverse(int arr[], int size){
        int start = 0;
        int next = 1;

        while(next < size){
                swap(arr[start], arr[next]);
                start += 2;
                next += 2;
        }
}