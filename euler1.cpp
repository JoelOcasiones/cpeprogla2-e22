#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
 	int sum = 0, num = 0;
 	
 	f>>num;
        for (int i = 0; i < num; i++){
            if ((i % 3 == 0) || (i % 5 == 0)){
                sum = sum + i;
			}
		}
	cout<<"Sum: "<<sum;	
	system ("pause > 0");
}
