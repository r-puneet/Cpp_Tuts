#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n;
    cout<<"Enter Number:";
    cin>>n;

    bool flag=0; // to find out if loop breaks or not

    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            flag=1;  // if loop break flag will become 1
            break;
        }
    }
    if(flag==0){
        cout<<"Prime Number"<<endl;
    }
    return 0;
}