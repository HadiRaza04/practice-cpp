#include <iostream>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"Enter any number for table.";
	cin>>i;
	cout<<"Enter table range.";
	cin>>j;
    for(int k=1; k<=j; k++){
    	cout<<i<<"x"<<k<<"="<<i*k<<endl;
	}
    return 0;
}
