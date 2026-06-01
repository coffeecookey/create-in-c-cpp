// Write a function that creates a vector of user-given size M using new operator

#include <bits/stdc++.h>
using namespace std;

void makevec(int n){
    // ptr variable = new datatype[value];
    int * arr = new int[n];
    
    for(int i=0; i < n; i++){
        arr[i] = i;
        cout<<arr[i]<<" ";
    }
    delete[] arr;
}

int main(){
    int M;
    cout<<"enter size of vector: "<<endl;
    cin>>M;
    makevec(M);
    return 0;
}