#include <iostream>
using namespace std;

int main()
{
	/*
	 * * *
	 * * *
	 * * *
	 */

	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 		cout<<"* ";
	// 	}
	// 	cout<<"\n";
	// }

	/*
	 *
	 * *
	 * * *
	 */

	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<i+1;j++){
	// 		cout<<"* ";
	// 	}
	// 	cout<<"\n";
	// }

	/*
		1
		1 2
		1 2 3
		1 2 3 4
		1 2 3 4 5
	*/

	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = 0; j < i+1; j++)
	// 	{
	// 		cout<< j+1 << " ";
	// 	}
	// 	cout<< "\n";
	// }

	/*
		1
		2 2
		3 3 3
		4 4 4 4
		5 5 5 5 5
	*/

	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = 0; j < i + 1; j++)
	// 	{
	// 		cout << i + 1 << " ";
	// 	}
	// 	cout << endl;
	// }

	/*
	 * * * * *
	 * * * *
	 * * *
	 * *
	 *
	 */

	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = 5; j > i; j--)
	// 	{
	// 		cout<<"* ";
	// 	}
	// 	cout<<"\n";
	// }

	/*
		1 2 3 4 5
		1 2 3 4
		1 2 3
		1 2
		1
	*/

	for (int i = 0; i < 5; i++)
	{
		int a = 1;
		for (int j = 5; j > i; j--)
		{
			cout << a++ << " ";
		}
		cout << endl;
	}
}