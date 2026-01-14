#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
               
               int x=a%b;
               a=b;
               b=x;
               
    }
     cout<<"\na:"<<a<<endl;
}    

int main()
{
    int n1,n2;
    cout<<"Enter no1 & no2 :\t";
    cin>>n1>>n2;
    gcd(n1,n2);
    system("pause");
    return 0;
}    
