#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n1,n2,n3,n4, lastOne;
    double avg=0.0;
    cin>>n1>>n2>>n3>>n4;
    avg = (n1*2+n2*3+n3*4+n4)/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;

    if(avg>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg>=5.0){
        cout<<"Aluno em exame."<<endl;
        cin>>lastOne;
        cout<<"Nota do exame: " <<lastOne<<endl;
        double reCalAvg = (lastOne+ avg)/2;
        if(reCalAvg >=5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<reCalAvg<<endl;
    }
    else{
        cout<<"Aluno reprovado."<<endl;
    }
    return 0;
}
