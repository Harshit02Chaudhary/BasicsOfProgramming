#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,4,6,24,3,1,10,45,3,7};
    int size = 10;
    for(int i=0; i<size; i++){
        cout<< arr[i] << " " ;
    }
    int key;
    cout<<endl << "enter number you want to search : ";
    cin>> key;
    //whether 1 is present or not?

    bool linearsearch(int arr[], int size, int key);

    if(linearsearch(arr, size, key)==1){
            cout<< "present" << endl;
    }
    else 
        cout<< "absent" << endl;

}

bool linearsearch(int arr[], int size, int key){
    int i = 0;
    while(i<size){
        if(key==arr[i]){
            return true;
        }
        i++;
    }
    return false;
}

































/*
bool linearsearch(int arr[], int size, int key){
        for(int i=0; i<size; i++){
            if(arr[i]==key){
                return 1;
            }
        }
        return 0;
}




/*void linearsearch(int arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i]==1){
            cout<< "1 is present " <<endl;
            
        }
        else
            cout<< "1 is not present"<<endl;
             
    }
    
}*/


