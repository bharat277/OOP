#include<iostream>
using namespace std;
int area(int,int);
float area(float);
int main()
{
        int len,br;
        float rad;
        cout<<"Enter length and breadth of rectangle:";
        cin>>len>>br;
        cout<<"Enter radius of circle:";
        cin>>rad;
        cout<<"\nArea of rectangle is "<<area(len,br);
    cout<<"\nArea of circle is "<<area(rad);
}
int area(int len,int br)
{
    return(len*br);
}
float area(float rad)
{
    return(3.14*rad*rad);
}
