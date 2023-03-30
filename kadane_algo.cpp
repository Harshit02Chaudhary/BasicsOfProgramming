#include<iostream>
using namespace std;

int contigous_sum(int arr[], int n){
    int sum = 0;
    int ans = INT_MIN;

    for(int i=0; i<n; i++){
      //2 element ka sum liya
        sum = sum + arr[i];

      //ans me max sum store kraya
        ans = max(ans,sum);
      
      //agr sum less than zero hai to wapis zero kr do
        if(sum<0){
          sum = 0;
        }
        
    }

    return ans;
}

int main(){

  int arr[] = {-2,-3,4,-1,-2,1,5,-3};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<< contigous_sum(arr, n);
}