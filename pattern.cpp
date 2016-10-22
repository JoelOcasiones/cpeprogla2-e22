#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream f("input.txt");
	int x, idx;
	int arr[]={1,2,4,3};
	int i=0;
	f>>x>>idx;
	cout<<x<<" ";
	x+=arr[(i%4)];
	for(x; x<=idx; x+=arr[(i%4)]){
		cout <<x<<" ";  
		i++;
	}
	system("pause");
}
