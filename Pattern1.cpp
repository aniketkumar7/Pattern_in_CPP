#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter the number of rows :";
    cin>> n;
    cout<<"Enter the number of columns :";
    cin>> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1 or j==1 or i==n or j==m)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

/*
Output:
Enter the number of rows :8
Enter the number of columns :12
* * * * * * * * * * * * 
*                     * 
*                     * 
*                     * 
*                     * 
*                     * 
*                     * 
* * * * * * * * * * * * 
*/