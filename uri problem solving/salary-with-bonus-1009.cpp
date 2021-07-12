#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    double salary,soldValue, total,parcentage = 15;
    string name;
    cin>>name;
    cin>>salary;
    cin>>soldValue;
    total = parcentage/100 * soldValue + salary;
    printf("Total %.2f\n",total);
    return 0;
}
