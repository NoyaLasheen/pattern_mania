/*

1
01
101
0101
10101


*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0) )
            cout<<1;
            else
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}