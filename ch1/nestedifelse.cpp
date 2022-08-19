#include<iostream>
using namespace std;


int main(){

        //nested if else
        int age;
        cout<<"\n enter age ::";
        cin>>age;
        if(age>=18){

            cout<<"\n You are elg for voating..";
            if(age>=21){

                cout<<"\n elg for marrige";
            }
            else{
                cout<<"\n not elg for marrige...";
            }
        }
        else{
            cout<<"\ n not elg for voating..";
            if(age>=5){
                cout<<"\n alg for schooling..";
            }
            else{
                cout<<"\n not evn elg for schooling...";
            }
        }

}
