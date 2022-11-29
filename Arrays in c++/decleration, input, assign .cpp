#include <iostream>
using namespace std;
int main(){
	int array[5];
	for(int i=0; i=4; i++){
		cout<<"Enter a number"<<endl;
		cin>>array[i];
	}
	cout<<(array[0] + array[1] + array[2] + array[3] + array[4]);
}
