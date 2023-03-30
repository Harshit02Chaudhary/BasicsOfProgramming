// #include<iostream>
// using namespace std;

// int main(){
//   int i = 2%10;
//   //cout<< i;

//   while(i){
//     cout<< i ;
//     i--;
//   }
// }

#include<iostream>
using namespace std;
 
// int main() {
//      int n;
//      cin >> n;
//      int i = 0;
//      int col = 0;
//      int ele=5*n+2;
//      while(i < n) {
//           ele=5*col+2;
//          if(ele%4==0){
//             col++;
//             continue;
//          }
//          else{
//             col++;
//             cout<<ele<<endl;
//             i++;
//          }   
//      }
// }


// int main() {
//     int i;
//     for (i = 0; i < 10; i++); {
//         cout << i;
//     }
//     return 0;
// }

//first repeating element 
int main(){
int arr[] = {10,5,3,4,3,5,6};
int n = sizeof(arr)/sizeof(arr[0]);
int ans;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
              cout<< arr[j];
              return 0;
            }   
        }
    }
    return 1;
}