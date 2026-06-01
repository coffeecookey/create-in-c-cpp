#include <bits/stdc++.h>
using namespace std;

void print(int x){
    int count = 1;
    for(int i=1; i <= x; i++){
        for(int j=1; j<=i; j++){
            cout<<count;
        }
        count++;
        cout<<"\n";
    }
}

int main(){
    print(10);
    return 0;
}