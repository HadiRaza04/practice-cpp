#include <iostream>
using namespace std;
int main(){
	int i=1;
	do{
		if(i % 2 == 1){
			cout<<i<<endl;
		}
		i++;
	}
	while(i<=100);
	return 0;
}
