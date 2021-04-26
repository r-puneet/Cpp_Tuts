#include<iostream>
using namespace std;

/* print sum of numbers as user input times */
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
    sum=sum+counter;
    }
    cout<<sum<<endl;
    
    return 0;
}