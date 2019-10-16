#include <iostream>
using namespace std;

int main() {
int k,n;
setlocale(LC_ALL, "rus");
cout<<"введите номер дня"<<endl;
cin>>k;
n =k%7;
cout<<"номер дня недели - "<<" "<<n<<endl;
system("pause");

    return 0;
}