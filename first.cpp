#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int num=1, num1;
    //cin>>num;
    //for(int i=0; i>=0; i++){            //infinite loop
        switch ( num )
        {
        case 1:
            cout<<"Hello World..."<<endl;
            cout<<"program exiting....."<<endl;
            //exit(0);      //exit success   
        case 2: 
            cout<<"case 2"<<endl;
            //continue                             //do not use continue statement within a switch case
        default: 
            cout<<"default";
            break;
        }
    
    
}