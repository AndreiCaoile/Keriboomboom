#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int chooser;
char yesno;
float total=0;
//LAB5 Data Structures by Kyle Zabala
int choose(int chooser);
char again(char yesno);
void problem1();
void problem2();
void probelm3();

struct customer {
	char fname[20];
	char lname[10];
	char cnum[10];
	int day;
	int month;
	int year;
	struct {
		int id;
		char item[20];
		float price;
		int qty;
	}stuff[3];
} customers[3];

struct studs {
	char id[3];
	char name[50];
	int quiz[3];
	float grade;
} studs[5];

struct record {
	char id[5];
	char name[50];
	int q1;
	int q2;
	int q3;
	float grades;
} student;

void problem1() {
	cout<<"Enter Student Record:\n";
	cout<<"ID: ";
	cin>>student.id;
	cout<<"Name: ";
	cin.ignore();
	gets(student.name);
	cout<<"Quiz 1: ";
	cin>>student.q1;
	cout<<"Quiz 2: ";
	cin>>student.q2;
	cout<<"Quiz 3: ";
	cin>>student.q3;
	cout<<"\nStudent Record:\n";
	cout<<"ID: "<<student.id<<endl;
	cout<<"Name: "<<student.name<<endl;
	student.grades = (float) (student.q1+student.q2+student.q3)/3;
	cout<<"Grades: "<<student.grades<<endl;
	if (student.grades>=70) cout<<"Remarks: Passed\n";
	else if (student.grades<70) cout<<"Remarks: Failed\n";
}

void problem2() {
	for(int i=0;i<5;i++) {
		cout<<"\nStudent "<<i+1<<endl;
		cout<<"ID: ";
		cin>>studs[i].id;
		cout<<"Name: ";
		cin.ignore();
		gets(studs[i].name);
		cout<<"Enter 3 quize(s): ";
		for(int j=0;j<3;j++) {
			cin>>studs[i].quiz[j];
		}
		cout<<"\n";
	}
	cout<<"\n  No.    Student No.                    Name          Grade        Remark\n";
	for(int k=0;k<5;k++) {
		cout<<setw(3)<<"   "<<k+1;
		cout<<setw(15)<< studs[k].id;
		cout<<setw(25)<< studs[k].name;
		studs[k].grade=(float)(studs[k].quiz[1]+studs[k].quiz[2]+studs[k].quiz[3])/3;
		cout<<setw(15)<<fixed<<setprecision(2)<<studs[k].grade;
		if (studs[k].grade>=70) cout<<setw(15)<<"Passed\n";
		else if (studs[k].grade<70) cout<<setw(15)<<"Failed\n";
	}
}

void problem3() {
	for(int i=0;i<3;i++) {
		cout<<"CUSTOMER INFORMATION "<<i+1<<endl;
		cout<<"\tFirst Name: ";
		cin.ignore();
		gets(customers[i].fname);
		cout<<"\tLast Name: ";
		gets(customers[i].lname);
		cout<<"\tContact No.: ";
		cin>>customers[i].cnum;
		cout<<"Order date:\n\tDay: ";
		cin>>customers[i].day;
		cout<<"\tMonth: ";
		cin>>customers[i].month;
		cout<<"\tYear: ";
		cin>>customers[i].year;
		cout<<"Enter three items: \n";
		for(int j=0;j<3;j++) {
			cout<<"ID: ";
			cin>>customers[i].stuff[j].id;
			cout<<"\tName: ";
			cin.ignore();
			gets(customers[i].stuff[j].item);
			cout<<"\tPrice: ";
			cin>>customers[i].stuff[j].price;
			cout<<"\tQuantity: ";
			cin>>customers[i].stuff[j].qty;
		}
		cout<<endl;
		system("cls");
	}
	cout<<"\nSUMMARY REPORT\n #   Customer Name\t\tOrder Date\t Items\t\tPrices\t\t    Quantity\n";
	for(int k=0;k<3;k++) {
		cout<<" "<<k+1;
		cout<<"   "<<customers[k].lname<<", ";
		cout<<customers[k].fname;
		cout<<"\t\t\t"<<customers[k].month<<"/"<<customers[k].day<<"/"<<customers[k].year<<endl;
		for(int l=0;l<3;l++) {
			cout<<"\t\t\t\t\t\t";
			cout<<setw(6)<<right<<customers[k].stuff[l].item;
			cout<<"\t\t";
			cout<<setw(6)<<right<<showpoint<<fixed<<setprecision(2)<<customers[k].stuff[l].price;
			cout<<"\t\t";
			cout<<setw(8)<<right<<customers[k].stuff[l].qty<<" pcs."<<endl;
			total += (float) (customers[k].stuff[l].price*customers[k].stuff[l].qty);
		}
		cout<<"\t\t\t\t\t\t\t\tTOTAL: "<<setw(5)<<right<<showpoint<<fixed<<setprecision(2)<<total<<endl;
	}
	
}

int choose(int chooser) {
	cout<<"************LABORATORY 5************\n"
	cout<<"Choose a problem # to solve [1-3]..." ;
	cin>>chooser;
	switch(chooser) {
		case 1:
			problem1();
			again(yesno);
			break;
		case 2:
			problem2();
			again(yesno);
			break;
		case 3:
			problem3();
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
