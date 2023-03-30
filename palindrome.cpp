#include<iostream>
using namespace std;
int main(){
    int num, rem, rev = 0;
    cout<< "enter a number : " ;
    cin>> num ; 
    int i = num ;
    while(i>0){
        rem = i%10 ;
        rev = rev*10 + rem ;
        i = i/10 ;   
    }
    
    if(num == rev){
        cout<< "number is palindrome : "<< rev << endl;
    }
    else{
        cout<< "not palindrome : "<< rev << endl;
    }
}