#include <bits/stdc++.h>
using namespace std;
int m = 5;
int main(){
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout<<"in inner block!"<<endl;
        cout<<"k is "<<k<<endl;
        cout<<"m is "<<m<<endl; // local, output:30
        cout<<"::m is "<<::m<<endl; //global, output:5
    }
    return 0;
}
// the :: allows access to the global value of this variable, even when there is a local variable with the same name.