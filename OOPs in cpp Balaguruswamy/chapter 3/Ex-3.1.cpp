// Write a function using reference variables as arguments to swap the values of a pair of integers.
#include <bits/stdc++.h>
using namespace std;

pair<int,int> swapp(pair<int,int> &p) {
    swap(p.first,p.second);
    return p;
}

int main(){
    pair<int,int> x; 
    x = {1,2};
    cout<<x.first<<" "<<x.second<<endl;
    swapp(x);
    cout<<x.first<<" "<<x.second;
    return 0;
}