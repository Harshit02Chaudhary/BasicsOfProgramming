#include<iostream>
#include<math.h>
using namespace std;

int bin_to_dec(int num){
   int rem, i = 0, ans = 0 ;
   while(num != 0){
       rem = num % 10;
       ans += rem*pow(2,i);
       num = num/10;
       i++; 
   } 
   return ans;
}

int main(){
    int num;
    cout << "enter a binary number : ";
    cin>> num ;
    cout<< "decimal representation = " << bin_to_dec(num);
}