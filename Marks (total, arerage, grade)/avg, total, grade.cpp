#include <iostream>
using namespace std;
int main(){
	int i, mark[5];
	float sum=0, avg, persentage;
	
	cout<<"Enter Marks obtained in 5 subjects: ";
	for(i=0; i<5; i++){
		cin>>mark[i];
		sum = sum + mark[i];
	}
	cout<<sum;

	return 0;
	
}
