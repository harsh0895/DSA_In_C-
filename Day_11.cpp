// Solving Pattern Printing Programs by using for loop:-
// Hard level:-

#include<iostream>
using namespace std;

int main(){


    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    int space = 0;

    // Pyramid pattern printing:-
    // using 4 loop:-

    // for( int i=1; i<=row; i++ ){
    //     space = row-i;
    //     for( int j=1; j<=space; j++ ){
    //         cout<<"  ";
    //     }
    //     for( int k=1; k<=i; k++ ){
    //         cout<<"* ";
    //     }
    //     for( int R=2; R<=i; R++ ){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // using 3 loop:-

    for( int i=1; i<=row; i++ ){
        space = row-i;
        for( int j=1; j<=space; j++ ){
            cout<<"  ";
        }
        int star = 2*i-1;
        for( int k=1; k<=star; k++ ){
            cout<<"* ";
        }
        cout<<endl;
    }

    // reverse order:-

    // for( int i=row; i>=1; i-- ){
    //     space = row-i;
    //     for( int j=1; j<=space; j++ ){
    //         cout<<"  ";
    //     }
    //     int star = 2*i-1;
    //     for( int k=1; k<=star; k++ ){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // palindrome pattern printing:-
    
    // for( int i=1; i<=row; i++ ){
    //     space = row-i;
    //     for( int j=1; j<=space; j++ ){
    //         cout<<"  ";
    //     }
    //     for( int k=1; k<=i; k++ ){
    //         cout<<k<<" ";
    //     }
    //     for( int m=i-1; m>=1; m-- ){
    //         cout<<m<<" ";
    //     }
    //     cout<<endl;
    // }

        // 4th pattern:-
        // uppercase:- 

        // for( int i=row; i>=1; i-- ){
        //     // print star left 1 block:-
        //     for( int j=1; j<=i; j++ ){
        //         cout<<"* ";
        //     }
        //     space = 2*row - 2*i; 
        //     for( int k=1; k<=space; k++ ){
        //         cout<<"  ";
        //     }
        //     // print star left 2 block:-
        //     for( int R=1; R<=i; R++ ){
        //         cout<<"* ";
        //     }
        //     cout<<endl;
        // }
        
        // lowercase:-

        // for( int i=1; i<=row; i++ ){
        //     // print star left 1 block:-
        //     for( int j=1; j<=i; j++ ){
        //         cout<<"* ";
        //     }
        //     space = 2*row - 2*i; 
        //     for( int k=1; k<=space; k++ ){
        //         cout<<"  ";
        //     }
        //     // print star left 2 block:-
        //     for( int R=1; R<=i; R++ ){
        //         cout<<"* ";
        //     }
        //     cout<<endl;
        // }

}