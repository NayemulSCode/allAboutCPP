//with compiler error
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cout<<N/365<<" ano(s)"<<endl<<N%365/30<<" mes(es)"<<endl<<N%365%30<<" dia(s)"<<endl;
    return 0;
}

