#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1 =3, y1 =3;
	int x2 =3, y2 =3;

	int arr1[y1][x1] ={{1,2,3},{4,5,6},{7,8,9}};
	int arr2[y2][x2] ={{1,2,3},{4,5,6},{7,8,9}};

	if (x1 != x2 && y1 != y2) cout << "Matrix cannt be added" << endl;
	else
	{
		for (int i=0; i<y1; i++)
		{
			for (int j=0; j<x1; j++){
				cout << arr1[i][j] + arr2[i][j] << " ";
			}
			cout << endl;
		}
	}	
			
}
