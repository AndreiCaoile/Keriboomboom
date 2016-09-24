#include<iostream>
#include<cstring>
using namespace std;
int flag=0, len=0, x=0, chooser;
char str1[50], str2[50], str[50], *s1, *s2, yesno;
//LAB4 String Manipulation using Pointers Kyle Zabala
void mySTRCPY();
void mySTRCMP();
void mySTRCAT();
int mySTRLEN(char*);
int choose(int chooser);
char again(char yesno);
char myREV(char*str);

void mySTRCPY() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	*s1=*s2;
    	cout<<str1[i];
	}  
}

void mySTRCMP() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    	if (*s1==*s2) flag+=0;
		else if (*s2<*s1) flag+=1;
		else if (*s2>*s1) flag-=1;
	}
	if (flag==0) cout<<"Equal";
	else if (flag>0) cout<<"Positive";
	else if (flag<0) cout<<"Negative";
}

void mySTRCAT() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    	s1=&str1[i];
    	cout<<*s1;
	}
	for(int i=0;i<strlen(str2);i++){
    	s2=&str2[i];
    	cout<<*s2;
	}
}

int mySTRLEN(char*s1){
	cout<<"\nEnter a string:  ";
	cin.ignore();
    gets(str1);
	while(*s1!='\0') {
		x++;
		s1++;
	}
	cout<<"The length of the string is: "<<x;
	return x;
}

char myREV(char*str) {
	cout<<"\nEnter a string: ";
	cin.ignore();
    gets(str);
    cout<<"The reverse is: ";
	len=strlen(str);
	for(int i=len-1;i>=0;i--) {
		cout<<str[i];
	}
}

int choose(int chooser) {
	cout<<"************LABORATORY 4************\n";
	cout<<"Choose a problem # to solve [1-5]...\n[1] String Copy\n[2] String Compare\n[3] String Concatenation\n[4] String Length\n[5] String Reversing... ";
	cin>>chooser;
	switch(chooser) {
		case 1:
			mySTRCPY();
			again(yesno);
			break;
		case 2:
			mySTRCMP();
			again(yesno);
			break;
		case 3:
			mySTRCAT();
			again(yesno);
			break;
		case 4:
			mySTRLEN(str1);
			again(yesno);
			break;
		case 5:
			myREV(str1);
			again(yesno);
			break;
		default:
			break;
	}
	return chooser;
}

char again(char yesno) {
	cout<<"\n\nSolve another problem??? [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
		system("cls");
		choose(chooser);
	}
	else if (yesno=='n') {
		cout<<"Thanks for using this program :)\n";
	}
	else {
		again(yesno);
	}
	return yesno;
}

main() {
	choose(chooser);
}
