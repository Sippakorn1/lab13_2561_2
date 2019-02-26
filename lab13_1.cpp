#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
//Write your code here.
int a,b,c;
  	for (a = 1; a < N; a++) 
   	{ 
       c = d[a]; 
       b = a-1; 
       for(int t = 0; t < a; t++) cout << d[t] << "  ";
       cout<<"["<<d[a]<<"] ";
       for(int t = a+1; t < N; t++) cout << d[t] << "  ";
       cout<<"=> ";
       while (b >= 0 && d[b] < c) 
       { 
       	   swap(d,b+1,b);
		   b = b-1; 
       }
       d[b+1] =c; 
	    for(int t = 0; t <= b; t++) cout << d[t] << "  ";
       cout<<"["<<d[b+1]<<"] ";
       for(int u = b+2; u < N; u++) cout << d[u] << "  ";
	    cout<<"\n";
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

