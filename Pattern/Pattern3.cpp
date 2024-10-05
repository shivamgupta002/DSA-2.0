#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    /*
        1
        0 1
        1 0 1
    */
    // int a = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a;
    //     int b;
    //     b = !a;
    //     for (int k = 0; j < i; j++)
    //     {
    //         cout << b;
    //         b = !b;
    //     }
    //     a = !a;
    //     cout << endl;
    // }

    /*
        1         1
        1 2     2 1
        1 2 3 3 2 1
    */

    // for (int i = 0; i < n; i++)
    // {
    //     int a = 1;
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << a++ << " ";
    //     }
    //     for (int k = 0; k < n - i - 1; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (int l = 0; l < n - i - 1; l++)
    //     {
    //         cout << " ";
    //     }
    //     int b = i + 1;
    //     for (int m = 0; m < i + 1; m++)
    //     {
    //         cout << b-- << " ";
    //     }

    //     cout << endl;
    // }

    /*
        1
        2 3
        4 5 6
    */

    // int a = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << a++ << " ";
    //     }
    //     cout << endl;
    // }

    /*
        A
        A B
        A B C
    */

    // for (int i = 0; i < n; i++)
    // {
    //     char a = 'A';
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << a++ << " ";
    //     }
    //     cout << endl;
    // }

    /*
        A B C
        A B
        A
    */

    // for (int i = 0; i < n; i++)
    // {
    //     char a = 'A';
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << a++ << " ";
    //     }
    //     cout << endl;
    // }

    /*
        A
        B B
        C C C
    */

    // char a = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << a <<" ";
    //     }
    //     a++;
    //     cout<<endl;
    // }

    /*
            A
          A B A
        A B C B A
    */

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - 1; j > i; j--)
    //     {
    //         cout << " ";
    //     }
    //     char a = 'A';
    //     for (int k = 0; k < i+1; k++)
    //     {
    //         cout << a++ << " ";
    //     }
    //     a=a-2;
    //     for (int l = 0; l < i; l++)
    //     {
    //         cout<<a--<<" ";
    //     }

    //     cout << endl;
    // }

    /*
        C
        C B
        C B A
    */

    // for (int i = 0; i < n; i++)
    // {
    //     int a = (65 + n) - 1;
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << char(a--) << " ";
    //     }
    //     cout << endl;
    // }

    /*
     * * * * * *
     * *     * *
     *         *
     *         *
     * *     * *
     * * * * * *
     */

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << "* ";
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << "/ ";
    //     }
    //     for (int l = i; l > 0; l--)
    //     {
    //         cout << "/ ";
    //     }
    //     for (int m = n; m > i; m--)
    //     {
    //         cout << "* ";
    //     }

    //     cout << "\n";
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int k = 0; k < (n-i)-1; k++)
    //     {
    //         cout << "/ ";
    //     }
    //     for (int l = 0; l <(n-i)-1; l++)
    //     {
    //         cout << "/ ";
    //     }
    //     for (int m = 0; m < i+1; m++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << "\n";
    // }

    /*
     *         *
     * *     * *
     * * * * * *
     * *     * *
     *         *
     */

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int k = 0; k < (n - i) - 1; k++)
    //     {
    //         cout << "/ ";
    //     }
    //     for (int l = 0; l < n - i - 1; l++)
    //     {
    //         cout << "/ ";
    //     }
    //     for (int m = 0; m < i + 1; m++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // for (int i = 1; i < n ; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << "* ";
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << "/ ";
    //     }
    //     for (int l = 0; l <i; l++)
    //     {
    //         cout << "/ ";
    //     }
    //     for (int m = n; m > i; m--)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    /*
     * * * *
     *     *
     *     *
     * * * *
     */

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 || i == n - 1 || j == 0 ||j == n -1)
    //         {
    //             cout << "* ";
    //         }else{
    //             cout << "/ ";
    //         }
    //     }
    //     cout << endl;
    // }

    /*
        4444444
        4333334
        4322234
        4321234
        4322234
        4333334
        4444444
    */
    int size = 2 * n - 1;
    int start=0;
    int end = size - 1;
    int arr[size][size];

    while (n != 0) {
    for (int i = start; i <= end; i++)
    {
      for (int j = start; j <= end; j++)
      {
        if (i == start || i == end || j == start || j == end)
        {
          arr[i][j] = n;
        }
      }
    }
    start++;
    end--;
    n--;
  }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}