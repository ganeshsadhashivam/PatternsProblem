#include<iostream>
using namespace std;
int main() {
	/*
	* 1.pattern
	*****
	*****
	*****
	*****
	*****
	
	*/
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "*";
		}
		cout << endl;
	}

	/*
	* 2.pattern
	* 
	**
	***
	****
	*****
	
	*/
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	/*
	3.pattern
	1
	12
	123
	1234
	12345
	*/
	for (int i = 0; i <= 5; i++) {
		for (int j = 0+1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
	/*
	4.pattern 
	    1
		22
		333
		4444
		55555
	
	*/

	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << i;
		}
		cout << endl;
	}


	/*
	5.pattern
	*****
	****
	***
	**
	*

	
	*/
	cout << endl;
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			cout << "*";
		}
		cout << endl;
	}


	/*
	 6.Pattern
		12345
		1234
		123
		12
		1
	*/
	cout << endl;
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j < 5-i; j++) {
			cout << j+1;
		}
		cout << endl;
	}


	/*
	* 7.pattern
		*
	   ***
	  *****
	 *******
	*********
	
	*/
	cout << endl;
	int i, j,k;
	for ( i = 0; i < 5; i++) {
		for (j = 0; j < 5-i-1; j++) {
			cout << " ";
		}
			for (k = 0; k < (2*i+1); k++) {

			cout << "*";
			}
		cout << endl;
	}
	
	/*
	* 8.pattern
	*********
	 *******
	  *****
	   ***
		*
	
	*/

	cout << endl;
	//int i, j, k;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			cout <<" ";
		}
		for (int k = 0; k < 2*5 -(2 * i + 1); k++) {

			cout <<"*";
		}
		cout << endl;
	}
		
	/*
	 9.
		    *
		   ***
		  *****
		 *******
		*********
		*********
		 *******
		  *****
		   ***
			*
	
	*/
	cout << endl;
	//int i, j, k;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < (2 * i + 1); k++) {

			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * 5 - (2 * i + 1); k++) {

			cout << "*";
		}
		cout << endl;
	}


	/*
	10.
	*
	**
	***
	****
	*****
	****
	***
	**
	*
	 
	*/
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	/*
	14.
	A
	AB
	ABC
	ABCD
	ABCDE

	*/
	for (int i = 65; i <= 69; i++) {
		for (int j = 65; j <= i; j++) {
			cout << char(j);
		}
		cout << endl;
	}
	cout << endl;
	/*
	15.
		ABCDE
		ABCD
		ABC
		AB
		A

	*/
	for (int i = 69; i >= 65; i--) {
		for (int j = 65; j <= i; j++) {
			cout << char(j);
		}
		cout << endl;
	}

	cout << endl;
	/*
	16.
	A
	BB
	CCC
	DDDD
	EEEEE


	*/
	for (int i = 65; i <= 69; i++) {
		for (int j = 65; j <= i; j++) {
			cout << char(i);
		}
		cout << endl;
	}
	cout << endl;


	/*
	* 7.pattern
		*
	   ***
	  *****
	 *******
	*********

	*/
	cout << endl;
	int ii, jj, kk;
	for (ii = 65; ii <=69; ii++) {
		for (jj = 0; jj < 70 - ii - 1; jj++) {
			cout <<" ";
		}
		for (kk = 65; kk <=ii ; kk++) {

			cout << char(kk);
		}
		//(kk - ii + 1)
		cout << endl;
	}
}