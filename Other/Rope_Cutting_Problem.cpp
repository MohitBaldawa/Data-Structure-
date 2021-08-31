// Rope Cutting Problem

#include<iostream>
using namespace std;

void RopeCut(int n, int a, int b, int c)
{
    a = (n/a);
    b = (n/b);
    c = (n/c);

    int maximum = max(a,b);
    maximum = max(c,maximum);

    cout<<"Maximum is "<<maximum<<"cuts";
}
int main()
{
    int n,a,b,c;
    cout<<"Give Total length: "<<endl;
    cin>>n;

    cout<<"Give a length: "<<endl;
    cin>>a;
    
    cout<<"Give b length: "<<endl;
    cin>>b;
    
    cout<<"Give c length: "<<endl;
    cin>>c;

    RopeCut(n,a,b,c);
    


}