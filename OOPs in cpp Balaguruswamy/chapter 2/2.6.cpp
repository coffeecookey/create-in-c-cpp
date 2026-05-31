#include <bits/stdc++.h>
using namespace std;

class temp{
    double f;
    double convert(int f){
        // don't use 5/9 since they are integers and will eval to 0!! use 5.0/9.0
        return (f-32) * (5.0/9.0);
    };

    public:
    void display_in_celsius(){
        cout<<"temp in celsius is: "<<convert(f)<<endl;
    };
    void getTemp(){
        cout<<"enter temp in farenheit: ";
        cin>>f;
    };

};

int main(){
    temp t;
    t.getTemp();
    t.display_in_celsius();
    return 0;

}