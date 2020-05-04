#include<iostream>
#include<bits/stdc++.h> 

using namespace std; 

int count( int S[], int m, int n ) 
{ 
	int i, j, x, y; 

	int table[n + 1][m]; 
	
	for (i = 0; i < m; i++) 
		table[0][i] = 1; 

	for (i = 1; i < n + 1; i++) 
	{ 
		for (j = 0; j < m; j++) 
		{ 
			x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0; 
 
			y = (j >= 1) ? table[i][j - 1] : 0; 

 			table[i][j] = x + y; 
		} 
	} 
	return table[n][m - 1]; 
} 


int main() 
{ 
	int arr[] = {2, 3};  //Enter denominations of all chages here
	int m = sizeof(arr)/sizeof(arr[0]); 
	int n = 11;  //Enter amount whose change is to be obtained
	cout << "Total solutions possible="<<count(arr, m, n); 
	return 0; 
} 




