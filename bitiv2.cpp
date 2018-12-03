#include<iostream>
using namespace std;
int n, k, p;
unsigned n;
/*SETARE BIT N DE PE POZITIA K CU VALOAREA P*/
int main()
{
    cout<<"k=..."; cin>>k;
    cout<<"n=";cin>>n;
    cout<<"p=1 sau 0 :"; cin>>p;
    n=n<<32-k;
    n=>>31;
    cout<<n;
    return 0;
}

