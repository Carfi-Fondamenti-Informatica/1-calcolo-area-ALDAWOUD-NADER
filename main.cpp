#include <iostream>
using namespace std;

int main(){
int a,b,c;
    float areaR,areaT1,areaS,areaT2;
    cout << "Inserire il valore di a"<<endl;
    cout << "Inserire il valore di b"<<endl;
    cout << "Inserire il valore di c"<<endl;
    cin >> a >> b >> c;
    areaR = (a*b);
    areaT1= (a*b)/2;
    areaS=(a*a);
    areaT2=(0.5*(a+b)*c);
    cout << "il valore di a è "<< a <<endl ;
    cout << "il valore di b è "<< b <<endl;
    cout << "il valore di c è "<< c <<endl;
    cout << "area di rettangolo"<< areaR<<endl ;
    cout << "area di triangolo"<< areaT1 <<endl;
    cout << "area di quadrato"<< areaS <<endl;
    cout << "are di trapezio "<< areaT2<<endl ;


}
