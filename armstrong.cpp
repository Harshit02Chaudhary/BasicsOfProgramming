#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num, digit, ans = 0 ;
    cout<< "enter a number to find armstrong : " ;
    cin>> num ;
    int i = num ;
    while(i != 0){
        digit = i%10 ;
        ans += pow(digit,3) ;
        i = i/10 ;
        cout<< ans << endl;
    }
    if(num == ans){
        cout<< "number is armstrong ";
    }
    else{
        cout<< "not a armstrong number ";
    }
}