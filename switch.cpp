#include<iostream>
using namespace std;

int main(){
    int num, rem, notes;
    cout<<"enter amount "<<endl;
    cin>>num;
    int a=100, hundred, fifty, twenty, one;
   
    switch (a) {

        case 100: rem = num%100;
                  notes = num/100;
                  hundred = notes;
                  cout<< hundred <<" hundred rs notes"<<endl;

        case 50:  notes = notes + rem/50;
                  fifty = rem/50;
                  rem = rem%50; 
                  cout<< fifty <<" fifty rs notes"<<endl;

        case 20:  notes = notes + rem/20;
                  twenty = rem/20;
                  rem = rem%20;
                  cout<< twenty << " twenty rs notes"<<endl;

        case 1: notes = notes + rem/1;
                one = rem/1;
                cout<< one << " one rs notes" <<endl;
                cout<< notes << " total notes";
                break;
    }
}