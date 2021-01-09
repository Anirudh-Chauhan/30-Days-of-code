#include<iostream>
#include<fstream>
using namespace std;
int main()
{  
    char a;
	ifstream fin1("middle.txt",ios::in);	
	ifstream fin2("last.txt",ios::in);
	ofstream fin3("first.txt",ios::app);
	while(fin1>>a)
	{
	  fin3<<a;
	}
	while(fin2>>a)
	{
    	fin3<<a;
	}
	fin3.close();
	fin2.close();
	fin1.close();
	return 0;
}

