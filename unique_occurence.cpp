#include<bits/stdc++.h>
using namespace std;

int main(){

    // brute force method : trave through array, count element and compare to find answer.
    int ans = 0;
    int arr[] = {1,1,2,2,3,3};
    bool store[6] = {0};
    int val = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;

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
            }
        cout<< arr[i] << " " << count << endl;
        v.push_back(count);
    }

        for(int i=0; i<=v.size(); i++){
            if(v[i] == v[i+1]){
                cout<< "false" << endl;
            }
            else 
                cout<< "true" << endl;
                break;
        }

}