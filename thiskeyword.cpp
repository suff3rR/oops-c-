#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    Cricketer(){

    }
    Cricketer(string name, int runs){
        this->name = name; // "This" keyword is used to point to a class
        this->runs = runs;
    }
};
void print(Cricketer c){
    cout<<c.name<<" "<<c.runs<<endl;
}
int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Sachin tendulkar",100000);
    print(c1);m., 
    print(c2);

    return 0;
}