#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    char a;
    int x=1,y=0,z=0;
    ifstream fin;
    fin.open("read.txt",ios::in );
    while(!fin.eof())
    {
    	a=fin.get();
    	if(a=='\n')
    	{x++;
		}
		if(a==' ' || a=='\n' || a=='\t')
		{y++;
		}
		z++;
	}
	cout<<"Number of lines :"x<<endl<<"Number of words"<<y<<endl<<"Number of characters :"<<z;
	return 0;
}

