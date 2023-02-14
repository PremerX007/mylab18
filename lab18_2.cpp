#include<iostream>
using namespace std;

void myString(char *&arr,int N){
	arr = new char[N+1];    
	for(int i = 0; i<N; i++) arr[i] = 'A'+i;
	arr[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;
	delete [] p;
	return 0;
}
