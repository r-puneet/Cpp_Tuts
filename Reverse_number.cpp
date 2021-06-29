/*
if a number is given 1234 reverse it as 4321
*/
#include<iostream>
using namespace std;

int main(){
    int n, reverse;
    cout<<"Enter Numbers to reverse:";
    cin>>n;

    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit; 
        n=n/10; // dividing n by 10 give only integer value e.g 123/10 = 12.3 output would be 12
    }
    cout<<reverse<<endl;
}