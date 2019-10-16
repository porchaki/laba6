#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
int a,b,c,k,s1,s2;
setlocale(LC_ALL, "rus");
cout<<"Введите стороны прямоугольника и сторону квадрата"<<endl;
cin>>a>>b>>c;
s1 = a*b;
s2=c*c;
k=s1 / s2;
cout<<"В прямоугольнике поместится"<<" "<<k<<" "<<"квадратов"<<endl;
system("pause");
return 0;
}

 