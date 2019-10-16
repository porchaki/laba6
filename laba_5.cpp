#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
int a,b,c;
setlocale(LC_ALL, "rus");
cout<<"¬ведите год"<<endl;
cin>>a;
b=a/100;
c=a%100;
if (c!=0){
b=b+1;
}
cout<<b<<" "<<"век"<<endl;
system("pause");
return 0;
}