#include<bits/stdc++.h>
using namespace std;
//using reference
void swap(int &a, int &b){ //a and b reference variable
    int t = a;              //dynamic initialization
    a = b;
    b = t;
    cout<<"after swap:"<<a<<" " <<b<<endl;
    cout<<"after swap:"<<a<<"(memory location)"<<&a<<" " <<b <<"(memory location)"<<&b<<endl;

}
//function using pointer
void swap1(int *a, int *b){ //function definition
    int t = *a;            //assign the value at address a to t
    *a = *b;               //put the value at b into a
    *b = t;                //put the value at t into b
    cout<<"after swap(using pointer):"<<&a<<" " <<&b<<endl;

}
int main()
{
    int n=7, m=9;
    swap(n,m);
    swap1(&n,&m);
    return 0;
}
