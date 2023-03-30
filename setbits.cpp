#include<iostream>
using namespace std;

int main(){
    int a, b, ans;
    int setbits(int );
    cout<< "enter two numbers : "<< endl;
    cin>> a >> b ;
    ans = setbits(a) + setbits(b) ; 
    cout << "total setbits in both number are : " << ans << endl ;
}

int setbits(int n){
    int count=0;
   
    while(n>0){
   
        count += (n&1) ;
        n >>= 1;
    }
    return count;
}
