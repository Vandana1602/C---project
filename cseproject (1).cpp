#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

void show();
void warrenty();
int menu();
void search();
void offers();
int bill(int);

int laptop();
int mobile();
int tv();
int refrigeretor();

int buy1();
int buy2();
int buy3();
int buy4();
int n1;
class price
{
public:	int l1,l2,m1,m2,t1,t2,r1,r2;
	    void ip()
	    {
	    	cout<<"enter the price sequentially\n";
	    	cin>>l1>>l2>>m1>>m2>>t1>>t2>>r1>>r2;
		}
}o1,o2;
class discount
{
public: int ofr[4],j;
      void ip(){
       cout<<"enter the offers in percent sequentially\n";
       for(j=0;j<4;j++)
       {
       	cin>>ofr[j];
	   }
}
}o3,o4,o5;

int main() 
{
	o1.ip();
	ofstream outfile;
	outfile.open("file1.txt");
	outfile.write((char*)&o1,sizeof(o1));
	outfile.close();
	
	o3.ip();
	system("CLS");
	ofstream outfile2;
	outfile2.open("file2.txt");
	outfile2.write((char*)&o3,sizeof(o3));
	outfile2.close();
	
	cout<<"**********************************************************************************************************";
	cout<<"\n\n\t\t***********************";
	cout<<"\n\t\t*                     *";
    cout<<"\n \t \t*  GAUTAM RETAILS     *\n ";
    cout<<"\n\t\t***********************";
	ifstream infile;
	infile.open("file1.txt");
	infile.read((char*)&o2,sizeof(o2));
	infile.close();
	ifstream infile2;
	infile2.open("file2.txt");
	infile2.read((char*)&o4,sizeof(o4));
	infile.close();
	show();
}

void show()
{
	int k;
	cout<<"\n\n\n 1.\t Menu";
	cout<<"\n 2.\t Search";
	cout<<"\n 3.\t Offers";
	cout<<"\n 4.\t Bill";
	cout<<"\n 5.\t Warrenty Issue";
	cout<<"\n\n Press the Serial no Here \n";
	cin>>k;
	if(k==1)
	{
		menu();
	}
	else if(k==2)
	{
		search();
	}
	else if(k==3)
	{
		offers();
	}
	else if(k==4)
	{
		bill(n1);
	}
	else if(k==5)
	{
		warrenty();
	}
	else
	{
		cout<<"Enter Valid Input";
	}
}
int menu()
{
	int n;
	cout<<"\n\n 1.\t Laptop";
	cout<<"\n 2.\t Mobile";
	cout<<"\n 3.\t TV";
	cout<<"\n 4.\t Refrigeretor";
	cout<<"\n\n To exit press 0\n Press the No. Here\n";
	cin>>n;
	n1=n;
	if(n==1)
	{
		laptop();
	}
	else if (n==2)
	{
		mobile();
	}
	else if (n==3)
	{
		tv();
	}
	else if(n==4)
	{
		refrigeretor();
	}
	while(n==0)
	{
		break;
	}
	
}
void search()
{
	string sr;
	cout<<"please enter product name\n";
	cin>>sr;
	if(sr[0]=='l'||sr[0]=='L'&&sr[1]=='A'||sr[1]=='a'&&sr[2]=='p'||sr[2]=='P'&&sr[3]=='t'||sr[3]=='T'&&sr[4]=='o'||sr[4]=='O'&&sr[5]=='p'||sr[5]=='P')
	{
		n1=1;
		laptop();
	}
	else if(sr[0]=='m'||sr[0]=='M'&&sr[1]=='o'||sr[1]=='O'&&sr[2]=='b'||sr[2]=='B'&&sr[3]=='i'||sr[3]=='I'&&sr[4]=='l'||sr[4]=='L'&&sr[5]=='e'||sr[5]=='E')
	{
			n1=2;
		mobile();
	}
	else if(sr[0]=='t'||sr[0]=='T'&&sr[1]=='v'||sr[1]=='V')
	{
		n1=3;
		tv();
	}
	else if(sr[0]=='r'||sr[0]=='R'&&sr[1]=='e'||sr[1]=='E'&&sr[2]=='f'||sr[2]=='F'&&sr[3]=='r'||sr[3]=='R'&&sr[4]=='i'||sr[4]=='I'&&sr[5]=='g'||sr[5]=='G'&&sr[6]=='e'||sr[6]=='E'&&sr[7]=='r'||sr[7]=='R'&&sr[8]=='e'||sr[8]=='E'&&sr[9]=='t'||sr[9]=='T'&&sr[10]=='o'||sr[10]=='O'&&sr[11]=='r'||sr[11]=='R')
	{
		n1=4;
		refrigeretor();
	}
	else
	{
		cout<<"\n\n\t\t\t SORRY!..... Product is not available..";
		cout<<"\n\n\n u can purchase any of these..";
		menu();
	}
}
int laptop()
{
	cout<<"\n\n\t\t\t 1. HP";
	cout<<"\n\t\t\t 2. Dell";
	buy1();
}
int mobile()
{
	cout<<"\n\n\n\t\t\t 1. Samsung";
	cout<<"\n\t\t\t 2. Asus";
	buy2();
}
int tv()
{
	cout<<"\n\n\n\t\t\t 1. LG";
	cout<<"\n\t\t\t 2.MI";
	buy3();
}
int refrigeretor()
{
	cout<<"\n\n\n\t\t\t 1. Godrej";
	cout<<"\n\t\t\t 2. LG";
	buy4();
}
 int buy1()
 {
 	int i1,i2,s;
 	cout<<"\n enter the product no.\n";
 	cin>>i1;
 	cout<<"no of pieces you want-\n";
 	cin>>i2;
 	if(i1==1)
 	{
 		s=(o2.l1-(o4.ofr[0]*o2.l1/100))*i2;
 		ofstream outfile2;
 		outfile2.open("file3.txt");
 		outfile2.write((char*)&s,sizeof(s));
 		outfile2.close();
	 }
	 else if(i1==2)
	 {
	 	s=(o2.l2-(o2.l2*o4.ofr[0]/100))*i2;
	    ofstream outfile2;
 		outfile2.open("file3.txt");
 		outfile2.write((char*)&s,sizeof(s));
 		outfile2.close();
	 }
	 show();
 }
 int buy2()
 {
 		int i3,i4,s;
 	cout<<"\nenter the product no.\n";
 	cin>>i3;
 	cout<<"no of pieces you want-\n";
 	cin>>i4;
 	if(i3==1)
 	{
 		s=(o2.m1-(o2.m1*o4.ofr[1]/100))*i4;
 		ofstream outfile2;
 		outfile2.open("file3.txt");
 		outfile2.write((char*)&s,sizeof(s));
 		outfile2.close();
	 }
	 else if(i3==2)
	 {
	 	s=(o2.m2-(o2.m2*o4.ofr[1]/100))*i4;
	    ofstream outfile2;
 		outfile2.open("file3.txt");
 		outfile2.write((char*)&s,sizeof(s));
 		outfile2.close();
	 }
	 show();
 
 }
 int buy3()
 {
 		int i5,i6,s;
 	cout<<"\nenter the product no.\n";
 	cin>>i5;
 	cout<<"no of pieces you want-\n";
 	cin>>i6;
 	if(i5==1)
 	{
 		s=(o2.t1-(o2.t1*o4.ofr[2]/100))*i6;
 		ofstream outfile2;
 		outfile2.open("file3.txt");
 		outfile2.write((char*)&s,sizeof(s));
 		outfile2.close();
	 }
	 else if(i5==2)
	 {
	 	s=(o2.t2-(o2.t2*o4.ofr[2]/100))*i6;
	    ofstream outfile2;
 		outfile2.open("file3.txt");
 		outfile2.write((char*)&s,sizeof(s));
 		outfile2.close();
	 }
	 show();
 }
 int buy4()
 {
 		int i7,i8,s;
 	cout<<"\nenter the product no.\n";
 	cin>>i7;
 	cout<<"no of pieces you want-\n";
 	cin>>i8;
 	if(i7==1)
 	{
 		s=(o2.r1-(o2.r1*o4.ofr[3]/100))*i8;
 		ofstream outfile2;
 		outfile2.open("file3.txt");
 		outfile2.write((char*)&s,sizeof(s));
 		outfile2.close();
	 }
	 else if(i7==2)
	 {
	 	s=(o2.r2-(o2.r2*o4.ofr[3]/100))*i8;
	    ofstream outfile2;
 		outfile2.open("file3.txt");
 		outfile2.write((char*)&s,sizeof(s));
 		outfile2.close();
	 }
	 show();
 }
 int bill( int x)
 {
 	string s;
 	cout<<"Your name:\t";
 	cin>>s;
 	cout<<"\n\n\t\t\tBILL\t";
 	cout<<"\n\t\t****************";
 	cout<<"\n\n Name :\t"<<s;
 	cout<<"\n no.of items :\t1\n\n";
 	int bil;
 	ifstream infile3("file3.txt");
 	infile3.read((char*)&bil,sizeof(bil));
 	infile3.close();
 	if(x==1)
 	{
 		cout<<"Laptop\t\t Rs."<<bil;
	 }
	 if (x==2)
	 {
	 	cout<<"Mobile\t\t Rs."<<bil;
	 }
	 if(x==3)
	 {
	 	cout<<"Tv\t\t Rs."<<bil;
	 }
	 if(x==4)
	 {
	 	cout<<"Refrigeretor\t\t Rs."<<bil;
	 }
	 cout<<"\n\n \t\t\t\t Thank you!";
 }
 void offers()
 {
 	ifstream infile4("file2.txt");
 	infile4.read((char*)&o5,sizeof(o5));
 	infile4.close();
 	cout<<"\n\t\t\t OFFERS of the day \n\n";
 	cout<<"Laptops\t-\t"<<o5.ofr[0];
 	cout<<"\nMobiles\t-\t"<<o5.ofr[1];
 	cout<<"\n Tv\t-\t"<<o5.ofr[2];
 	cout<<"\nRefrigeretor\t-\t"<<o5.ofr[3];
 	cout<<"\n\n\t\t\t HURRY UP!!!!!!\n";
 }
 
void warrenty()
{
	string nm1,dt,nm2;
	cout<<"Enter Your Name :\t";
	cin>>nm1;
	cout<<"Enter Product Name:\t";
	cin>>nm2;
	cout<<"Purchase Date:\t";
	cin>>dt;
	cout<<"\n\n Please visit the counter.\n Thank You..";
}
