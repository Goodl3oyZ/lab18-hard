#include<iostream>
using namespace std;

________ myString(_____________________){
	_______ = new ____________;    
	for(int i = 0; i < N;i++) ____________ = 'A'+i;
	__________ = 0;
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
