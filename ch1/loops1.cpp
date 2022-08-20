#include<iostream>
using namespace std;

int main(){

    int i,sum=0,no=5;
    for(i=1;i<=10;i++){

        cout<<"\n"<<no<<" * "<< i << " = "<<no*i;
        //0 = 0 + 1; =1
        //1 = 1 + 2 = 3
        //3 = 3 + 3 = 6
        //6 = 6 + 4 10
        //10 = 10 +5 15
        //15 = 15 +6 21
        //21 = 21 + 7 28
        //28 = 28 + 8 36
        //36 = 36 + 9 45
        //45 = 45  + 10 55


        sum = sum +i;
    }

    cout<<"\n sum = "<<sum;

}
