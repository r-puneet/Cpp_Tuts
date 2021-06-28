// WAP using for loop to sum the numbers from 1 through n

#include<iostream>
using namespace std;

int main()
{
    int val, n, sum = 0;

    cout<<"Enter the limit number = ";
    cin>>n;

    for(val=1;val<=n;++val){
        sum += val;
    }
    cout<<"sum of numbers from 1 to "<<n<<" is = "<<sum<<endl;
}