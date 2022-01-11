#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for (int i = 0; i < N-1; i++) {
		int a = d[i+1];
		int j = i+1;
		while (a>d[j-1]) {
			d[j] = d[j-1];
			j--;
			if (j==0) break;
		}
		d[j] = a;
		cout << "Pass " << i+1 << ":";
		for (int k = 0; k < N; k++) cout << d[k] << " ";
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
