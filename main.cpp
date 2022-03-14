#include <iostream>
using namespace std;

int main(){
 float a=0,b=0,c=0;
    float areaR,areaT1,areaQ,areaT2;
    cin >> a >> b >> c;

    areaT1= (a*b)/2;
    areaQ=a*a;
    areaR=a*b;
    areaT2=0.5*(a+b)*c;


    cout << "area di triangolo"<< areaT1<<endl ;
    cout << "area di quadrato"<< areaQ <<endl;
    cout << "area di rettangolo"<< areaR<<endl;
    cout << "area di trapezio "<< areaT2<<endl ;
 
return0;



}
