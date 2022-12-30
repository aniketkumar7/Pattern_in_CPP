#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}

/*
Output :
Enter the number of rows : 10
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 1  2  3  4  5  6  7  8  9  10 
 */