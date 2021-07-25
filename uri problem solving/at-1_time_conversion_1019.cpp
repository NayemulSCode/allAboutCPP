///int hours = (int) (time / 3600);
///int minutes = ((int) (time / 60)) % 60;
///int seconds = time % 60;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cout<<N/3600<<":"<<N/60%60<<":"<<N%60<<endl;
    return 0;
}
