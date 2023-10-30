#include <iostream>
using namespace std;

int main()
{

    // Que 1:-
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int space = 0;

    for (int i = 1; i <= row; i++)
    {
        space = row - i;
        for (int j=1; j<=space; j++)
        {
            cout<<"  ";
        }
        for (int k=i; k>=1; k--)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

    // Que 2:-

    for( int i=1; i<=row; i++ ){
        space = row-i;
        for( int j=1; j<=space; j++ ){
            cout<<"  ";
        }
        for( int k=row; k>space; k-- ){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    
}