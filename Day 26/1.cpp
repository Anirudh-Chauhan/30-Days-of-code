#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(void)
{
	char a,name[30];
    int age;
   /* ofstream fout;
    fout.open("Text.txt",ios::app);
    cout<<"Enter Your First Name :";
    cin>>name;
	cout<<"Enter your age:";
	cin>>age;
	fout<<name<<"\t"<<age<<"\n";
	fout.close();
	*/ifstream fin;
	fin.open("Text.txt",ios::in);
	cout<<fin.tellg();
	while(fin)
	{   fin>>name;
		cout<<"\nName :"<<name;
		fin>>age;
		cout<<"\tAge :"<<age;
		if(age>20){
			cout<<"\n"<<name<<" is overage. ";
		}cout<<"\t"<<fin.tellg();
	}
//	fin.seekg(0);
	cout<<fin.tellg();
	fin.close();
	return 0;
}
