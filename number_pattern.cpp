/*

    1 
   1 2 
  1 2 3 
 1 2 3 4
1 2 3 4 5

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the rows: ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=n;j++)
        {
           if(j<=n-i)
           cout<<" ";
           
           else
            {
                cout<<k<<" "; 
                k+=1;
            }
           
        }
        cout<<endl; 
    }
    return 0;
}