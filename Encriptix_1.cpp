#include<bits/stdc++.h>
using namespace std;


int main()
{
    srand((signed) time(NULL));
    int random = rand();

    int input;

    while(input != random)
    {
        cout<<"Enter the input :" ;
        cin>> input ;

        if(input == random )
            {
                cout<< "Correct";
                break;
            }

        if(input > random)
            cout<< "high"  << endl;

        else
            cout<< "low"<< endl;



    }



}