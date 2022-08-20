#include<iostream>

using namespace std;

int main(){


    int age;
    a:
    b:
    cout<<"\n enter age ";
    cin>>age;

    if(age<18){
            cout<<"\n going to a:";
        goto a;
    }
    else if(age<25){

        cout<<"\n going to b:";
        goto b;
    }


}
