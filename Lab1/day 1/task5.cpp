#include<iostream>
using namespace std;
int sum(int x, int y, int z=0, int w=0)
{
    return (x + y - z +-w);
}

int main()
{
    cout << sum(11, 12) << endl;
    cout << sum(11, 12, 25) << endl;
    cout << sum(12, 13, 15, 20) << endl;
    return 0;
}
