#include <iostream>
using namespace std;
int add(int a, int b, int c, int d)
{
    return a + b + c + d;
}

int main()
{
    int n1, n2, n3, n4;

    cout << "Enter four integers: ";
    cin >> n1 >> n2 >> n3 >> n4;

    int sum = add(n1, n2, n3, n4);

    cout << "Addition = " << sum << endl;
    system("pause");
    return 0;
}
