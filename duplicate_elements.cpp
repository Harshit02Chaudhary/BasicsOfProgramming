#include<bits/stdc++.h>
using namespace std;

int main(){
    /*int var[] = {4,6,2,1};
    int mini = INT_MIN;
    if(var[0] !=INT_MIN){
        cout<< var[0] << endl;
    }*/
    //sort(var.begin(), var.end());

//simpler brute force approach 

    int ans = 0;
    int arr[] = {5,2,7,1,3,4,1,7,8};
    bool store[] = {0};
    int val = sizeof(arr)/sizeof(arr[0]);
    
    //traverse a loop 
    for(int i=0; i<val; i++){
        int count=1; 

        //check if previously visited
        if(store[i]==1){           
            continue;
        }

        //nested loop to compare and find the frequency of element

        for(int j=i+1; j<val; j++){                 // can intialize (j) with zero but then full loop will traverse everytime
            if(arr[i]==arr[j]){
                store[j] = 1 ;
                count++;
                }
            if(count>1){
                cout<< arr[i] << endl;
                break; 
            }
        }
        //cout<< arr[i] << " " << count << endl;
    }
    

}