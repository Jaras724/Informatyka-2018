#include <iostream>
using namespace std;
bool parzysta (int n){
if(n%2==0) return true;
    else
        return false;
}
int main(){
int x;
cout << "Podaj liczbe: ";
cin >> x;
if (parzysta(x))
    cout<<"parzysta";
    else
        cout<<"nieparzysta";
}
