#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            cout<<" "<<j<<" ";
        }
        for(int j=1; j<=(i-1); j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}

/*
Output :
Enter the number of rows :10
 1  2  3  4  5  6  7  8  9  10 
 2  3  4  5  6  7  8  9  10  1 
 3  4  5  6  7  8  9  10  1  2 
 4  5  6  7  8  9  10  1  2  3 
 5  6  7  8  9  10  1  2  3  4 
 6  7  8  9  10  1  2  3  4  5 
 7  8  9  10  1  2  3  4  5  6 
 8  9  10  1  2  3  4  5  6  7 
 9  10  1  2  3  4  5  6  7  8 
 10  1  2  3  4  5  6  7  8  9 
 */