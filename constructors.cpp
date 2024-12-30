#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
    Car(){ // This is the default constructor... This is made by default by the compiler....This is used to initialize objects using "." operator

    }
    Car(int p,string n,string t, int s){
        name = n;
        price = p;
        type = t;
        seats = s;
    }
    
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.type<<" "<<c.seats<<endl;
}
int main(){
    Car rari(3,"Ferrari","Supercar",2);
    print(rari);
    return 0;
}