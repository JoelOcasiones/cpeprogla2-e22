#include<iostream>
#include<cstring>

using namespace std;

int myStrCmp(char* str1, char*str2){
	switch(strcmp(str1, str2)){
		case -1:
			cout<<"Negative";
			break;
		case 1:
			cout<<"Positive";
			break;
		case 0:
			cout<<"Equal";
			break;		
	}
	
}

void myStrCpy(char* str1, char* str2){
	strcpy(str1, str2);
	
}

int main(){
	char str1[100]="Hello";
	char str2[100]="hello";
	myStrCmp(str1, str2);
	myStrCpy(str1, str2);
	cout<<str1;
}






