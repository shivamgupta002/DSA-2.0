#include <iostream>
using namespace std;

int main()
{
    int n=5;

    /*
         *
       * * * 
     * * * * *
    */
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < (i*2)+1; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
        * * * * *
          * * *
            *   
    */

//    for (int i = n; i > 0; i--) {
//     for (int k = 0; k < n - i; k++) {
//       cout << " ";
//     }
//     for (int j = 0; j < (i * 2) - 1; j++) {
//       cout << "*";
//     }
//     for (int k = 0; k < n - i; k++) {
//       cout << " ";
//     }
//     cout << endl;
//   }

    /*
            *
          * * *
        * * * * *
        * * * * *
          * * *
            *
    */

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - i - 1; j++) {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < (i * 2) + 1; k++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = n; i > 0; i--) {
    //     for (int k = 0; k < n - i; k++) {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < (i * 2) - 1; j++) {
    //         cout << "*";
    //     }
    //     for (int k = 0; k < n - i; k++) {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    /*
        *
        * *
        * * *
        * * 
        *
    */

   for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
}