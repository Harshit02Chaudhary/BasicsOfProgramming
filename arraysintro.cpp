#include<iostream>
using namespace std;

int main(){
    //declaration of array
    int num[5] = {};
    int number[5] = {0,1,2,3,4};

    //initializing array with 0
    cout<< number[4] << endl;

    /* initializing array with 1 
    int one[5] = {[0 ... 4] = 1};
    cout<< one[3]; */
    int val;
    int n = 5;
    for(int i=0; i<n; i++){
        num[i] = 1;
        val = num[i];
        cout<< val << " " ;
    }

    void printarrays(int arr[], int size);

    printarrays(number, 5);

}
    //array as function parameters

    void printarrays(int arr[], int size){
        cout<<endl <<"printing the arrays" << endl;
        for(int i=0; i<size; i++){
            cout<< arr[i]<< " ";
        }
    }

