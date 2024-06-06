#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long num1,num2;
    cout<< "Enter the input numbers : " ;
    cin>> num1 >> num2;


    cout<<endl <<" + => for summation"<< endl << " - => for subtracton "<<endl << " / => for division " << endl << " * => for multiplication" << endl ;
     cout<<endl <<"Enter the operation to be peformed : ";
    char s; cin>> s;

    cout<< "Answer is :";
    if( s == '+')
        cout<< num1 +  num2;

    else if( s== '-')
        cout<< num1 - num2;

    else if( s== '/')
    {
       double  ans = (double)num1/ num2 ;
        cout<< ans;
    }

    else if( s== '*')
        cout<< num1* num2;


}
