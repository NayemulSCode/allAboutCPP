
#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    if(n<0 || n>100){
        cout<<"Fora de intervalo"<<endl;
    }
    else if(n>=0.0000 && n<=25.0000){
        cout<<"Intervalo [0,25]"<<endl;
    }
    else if(n>25.0000 && n<=50.0000){
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(n>50.0000 && n<=75.0000){
        cout<<"Intervalo (50,75]"<<endl;
    }
    else{
        cout<<"Intervalo (75,100]"<<endl;
    }
    return 0;
}
