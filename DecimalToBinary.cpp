#include<iostream>
#include<math.h>
using namespace std;

int dec_to_bin(int no){
    
    // divide by 2 and store remainder in reverse order
    int rem , ans = 0, i = 0 ;
    while(no != 0){
        rem = no%2;
        ans += rem*pow(10,i) ;
        no = no/2;
        i++;
    }
    return ans;
    
}

int main(){
    
    // 2nd approach with bitwise & operator 
    int num, bit, ans = 0 ;
    cout << "enter a number for binary conversion : ";
    cin >> num ;
    int i = 0 ; 
    /*while(num != 0){
        bit = num & 1 ;
        ans += bit*pow(10,i) ;              //prints reverse number (ans = ans + bit*pow(10,i))
        num = num>>1;
        i++ ; 
    }*/
        cout<< "binary representation of your number is : " << dec_to_bin(num) ;
    
}

