#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
int k,n;
setlocale(LC_ALL, "rus");
cout<<"������� ����� ���"<<endl;
cin>>k;
n =(k-1)%7+1;
cout<<"����� ��� ������ - "<<" "<<n<<endl;
system("pause");

    return 0;
}