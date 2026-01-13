#include<iostream>
using namespace std;
//#define 
inline double c_f(float c);
inline double f_c(float f);
inline int mymin(int a,int b);
inline double simpleintrest(double p,double r,double t);
inline double amount(double p,double r,double t);
int main(void)
{
    float c,f;
    int a,b;
    double p,r,t;
    cout<<"Enter celsius:"<<"\t";
    cin>>c;
    c=c_f(c);
    cout<<"Convert fahrenheith: "<<c<<endl;
    cout<<"Enter fahrenheith:\t";
    cin>>f;
    f=f_c(f);
    cout<<"Convert celsius: "<<f<<endl;
    
    cout<<"Enter 2 number :"<<"\t";
    cin>>a>>b;
    int a1=mymin(a,b);
    //b=mymin(a,b);
    cout<<a;
    
    cout<<"Enter principle ,rate,time :\t";
    cin>>p>>r>>t;
    double p1=simpleintrest(p,r,t);
    cout<<"Simple Intrest:"<<p1;
    double a2=amount(p,r,t);
    cout<<"\nAmount :"<<a2;
    system("pause");
    return 0;
}
inline double c_f(float c)
{
       return c*(9/5)+32;
}
inline double f_c(float f)
{
       return (f*1.8)+32;
}
inline int mymin(int a,int b)
{
       if(a<=b)
       {
               cout<<"a is less"<<a<<endl;
               }
               else{
                    cout<<"b is less"<<b <<endl;
                    }
}
inline double simpleintrest(double p,double r,double t)
{
       return p*r*t/100;
}       
inline double amount(double p,double r,double t)
{
       return p*(1+r)/t;
       }
                          
                         
