
#include <iostream>
using namespace std;

int main() {
int n, m,s;
setlocale(LC_ALL, "rus");
cout<<"введите количество секунд"<<endl;
cin>>n;
s=n%60;
cout<<"с последней минуты прошло"<<" "<<s<<" "<<"секунд"<<endl;
system("pause");


    return 0;
}