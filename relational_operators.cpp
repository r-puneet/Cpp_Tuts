#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Relational Operators"<<endl;
    cout<<"Enter Number:";
    cin>>a;
    cout<<"Enter Number:";
    cin>>b;

    // True = 1  || False = 0
    cout<<(a == b)<<endl; //Returns true when value of variable a is equal to variable b else false.
    cout<<(a != b)<<endl; //Returns true when value of variable a is not equal to variable b else false.
    cout<<(a < b)<<endl;  //Returns true when value of variable a less than to variable b else false.
    cout<<(a > b)<<endl;  //Returns true when value of variable a is greater than to variable b else false.
    cout<<(a <= b)<<endl; //Returns true when value of variable a is less than or equal to variable b else false.
    cout<<(a >= b)<<endl; //Returns true when value of variable a is greater than or equal to variable b else false.
    return 0;
}