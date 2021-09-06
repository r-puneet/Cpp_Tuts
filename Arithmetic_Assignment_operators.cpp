#include<iostream>
using namespace std;

int main(){

    float a, b, result=0;
    char c;
    cout<<"Enter Number: ";
    cin>>a;

    cout<<"Enter Number: ";
    cin>>b;

    cout<<"Enter the calculation operator from the following:- "<<endl;
    cout<<"+ -> addition"<<endl;
    cout<<"- -> subtraction"<<endl;
    cout<<"* -> multiplication"<<endl;
    cout<<"/ -> division"<<endl;
    cin>>c;

    if (c == '+')
    {
        result = a+b;
        cout<<"Result: "<<result<<endl;
    }
    else if (c == '-')
    {
        result = a-b;
        cout<<"Result: "<<result<<endl;
    }
    else if(c == '*')
    {
        result = a*b;
        cout<<"Result: "<<result<<endl;
    }
    else if (c == '/')
    {
        result = a/b;
        cout<<"Result: "<<result<<endl;
    }
    else
    {
        cout<<"Choose operator from the given choices";
    }

    cout<<endl;

    return 0;
    
}