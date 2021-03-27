//**************************************************************************************************
// Given the bubble sort algorithm at the example below, do the following:                         *
// 1. Complete the main program.                                                                   *
// 2. Create a void function called display with 2 parameters: the array to be displayed and size. *
// 3. Use a dynamic array of type int.                                                             *
//**************************************************************************************************
/*
#include <iostream>
using namespace std;

void bubleSort(int *a, int n);
void display(int *a, int n);

int main()
 {
   // your declarations here...
   cout << "Enter number of elements to be sorted: ";
   //accept inputs...
   
   cout << "Enter the values ... \n";
   
   bubleSort(num, size);
 }


void bubleSort(int *a, int n)
{
	int last = n - 1;
	cout << "\nBubble Sort..." << endl << endl;
	for (int i = 0; i < last; i++)
	{
		for (int j = last; j > i; j--)
			if (a[j - 1] > a[j])
		 	 swap(a[j], a[j - 1]);
		cout << "Pass " << i + 1 << "...." << endl;
		display(a, n);
		cout << endl;
	}
}

void display(int *a, int n)
{
  
}
*/

//********************
//     SOLUTION      *
//********************
#include <iostream>
using namespace std;

void bubleSort(int *a, int n);
void display(int *a, int n);

int main()
 {
   // your declarations here...
  int *num;
  int size;
   cout << "Enter number of elements to be sorted: ";
   //accept inputs...
   cin >> size;
  num = new int[size];
   cout << "Enter the values ... \n";
  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }
   
   bubleSort(num, size);
 }


void bubleSort(int *a, int n)
{
    int last = n - 1;
    cout << "\nBubble Sort..." << endl << endl;
    for (int i = 0; i < last; i++)
    {
        for (int j = last; j > i; j--)
            if (a[j - 1] > a[j])
              swap(a[j], a[j - 1]);
        cout << "Pass " << i + 1 << "...." << endl;
        display(a, n);
        cout << endl;
    }
}

void display(int *a, int n)
{
  for (int i = 0; i < n ; i++)
  
    cout << a [i] << " ";
  
  cout << endl;
}
