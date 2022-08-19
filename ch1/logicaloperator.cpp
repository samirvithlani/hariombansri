#include<iostream>

using namespace std;

int main(){

    //         &&
    // no even 20
    // no %2 ==0  && no > 20
    // T    T    T
    // F    -    F
    // T    F    F
    //all condition must sati
    // no %2 ==0  || no > 20
    //  T    -     T
    //  F    T     T
    //  F    F     F

    int no;
    cout<<"\n enter no :";
    cin>>no;


    if(no % 2 ==0 || no > 20){

        cout<<"\n True";
    }
    else{
        cout<<"\n False";
    }

}
