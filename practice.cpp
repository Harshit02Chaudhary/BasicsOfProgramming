#include<bits/stdc++.h>
using namespace std;

int main(){

  int arr[] = {2,3,4,8,6,7};
  int i = 2;
  cout<<arr[i]++;
  cout<< i;
  cout<<arr[i]<<endl;


  cout<<arr[i++];
  cout<< i;
  cout<<arr[i];

}

// #include<iostream>

// using namespace std;

// //Write your totalPrime function here
// bool prime(int n){
//   int i=2;
//   if(n==2){
//     return true;
//   }
//   while(i<n){
//     if(n%i == 0){
//       return false;
//     }
//     i++;
//   }
//   return true;
// }

// int totalPrime(int S, int E){
//   int num = 0;
//     while(S<=E){
//         if(prime(S)){
//             num++;
//         }
//         S++;
//     }
//     return num;
// }

// int main() {
//     int S, E;
//     cin >> S >> E;
//     cout<<totalPrime(S, E);
//     return 0;
// }