#include<iostream>
using namespace std;

int main(){
    int num[100];
    int size;
    cout<< "enter size of an array " ;
    cin>> size;

    for(int i=0; i<size; i++){
        cin >> num[i];
    }

    int getMax(int num[], int size);
    int getMin(int num[], int size);

    cout<< "Maximum value in the array is : "<< getMax(num, size)<< endl;
    cout<< "Minimum value in the array is : "<< getMin(num, size)<< endl;
}

int getMax(int num[], int size){
  
    int max = INT_MIN;                                    //default MIN value in INT datatype 

        for(int i=0; i<size; i++){
            if(max < num[i]){
                max = num[i];
            }
        }
        return max;
}

int getMin(int num[], int size){
  
    int min = INT_MAX;                                    //default MAX value in INT datatype 

        for(int i=0; i<size; i++){
            if(min > num[i]){
                min = num[i];
            }
        }
        return min;
}