#include <iostream>
using namespace std;
int main(void)
{
    float s_n, sp, pp, n_s_a, n_p_a, to, b_s_a, b_p_a, tb, st, stt, sd, rc, tt, np;

    cout << "Enter share no.=" << endl;
    cin >> s_n;

    cout << "Selling price:" << endl;
    cin >> sp;

    cout << "Enter purches price:" << endl;
    cin >> pp;

    n_s_a = sp * s_n;
    cout << "NMet selling price:" << n_s_a << endl;

    n_p_a = pp * s_n;
    cout << "Net purches amount:" << n_p_a << endl;

    to = n_s_a + n_p_a;
    cout << "Turnover: " << to << endl;

    b_s_a = n_s_a * 0.03 / 100;
    cout << "Brokerage for selling amt:" << b_s_a << endl;

    b_p_a = n_p_a * 0.03 / 100;
    cout << "Brokerage for purches amt:" << b_p_a << endl;

    tb = b_s_a + b_p_a;
    cout << "Total brokerageg:" << tb << endl;
	
	st=tb*10.36/100;
	cout<< "Service Tax: "<<st<<endl;
	
	stt=0.025/100*n_s_a;
	cout<<"Security Transaction Tax :"<<stt;
	sd=to*0.002/100;
	cout<<"Stamp duty:"<<sd<<endl;
	
	rc=to*0.004/100;
	cout<<"Regulatory charges:"<<rc;
	
	tt=tb+st+sd+stt+rc;
	cout<<"Total tax :"<<tt<<endl;
	
	np=n_s_a-n_p_a-tt;
	cout<<"Net profit:"<<np<<endl;
	
	
    
}
