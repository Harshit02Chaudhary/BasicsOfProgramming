#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1,0,1,0,2,2,2};
    int zero=0, one=0, two=0;
    for(int i=0; i<7; i++){
      if(arr1[i]==0){
        zero++;
      }
      else if(arr1[i]==1){
        one++;
      }
      else if(arr1[i]==2){
        two++;
      }
    }
    int j=0;
    while(zero--){
      arr1[j]=0;
      j++;
    }
    while(one--){
      arr1[j]=1;
      j++;
    }
    while(two--){
      arr1[j]=2;
      j++;
    }
    for(int i=0; i<7; i++){
      cout<< arr1[i] << " ";
    }
}