//inline keyword sends a request to the compiler.
//inline function always make normal , do not complicated!

#include<bits/stdc++.h>
using namespace std;

inline float addition(float m, float n){
    return (m+n);
}
inline float multiplication(float x, float y){
    return (x*y);
}
inline double division(double p, double q){
    return (p/q);
}
int main()
{
    float a = 10.590;
    float b = 9.410;
    cout<<addition(a,b)<<endl;
    cout<< multiplication(a,b)<<endl;
    cout<<division(a,b)<<endl;
    return 0;
}
