//Write a program that takes an integer input from the user and prints out all the even numbers 
//from 0 up to the input number (inclusive) using a for loop
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"please enter the number : ";
    int num;
    cin>>num;
    int i = 0;
    for(i=0;i<=num;i+=2)
    {
    
        cout<< i <<endl;
    }
    
    
    return 0;
    }
    