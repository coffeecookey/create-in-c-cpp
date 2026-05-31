#include <iostream>
#include <string>
using namespace std;

class person{
    string name;
    int age;

    public:
    void getData();
    void print();
};
// i have defined the class above, now to access the functions, i need to use :: operator ie the scope resolution operator to define the functions outside the class
// void (func name with :: operator) (input parameters if any)
void person :: getData(){
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter age: ";
    cin>>age;
}
void person::print(){
    cout<<name<<endl;
    cout<<age<<endl;
}

int main(){
    person p;
    p.getData();
    p.print();

    return 0;

}