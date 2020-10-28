#include<iostream>
#include<fstream>
using namespace std;
class abc{
	int a,b;
	public:
	void getdata()
	{
		cin>>a>>b;
	}
	void putdata()
	{
		cout<<a<<" "<<b;
	}
}obj;
int main(void)
{
   	ofstream fout("TRY.dat",ios::binary);
	obj.getdata();
	fout.write((char*)&obj,sizeof(obj));
	fout.close();

	ifstream fin;
	fin.open("TRY.dat",ios::in|ios::binary);
	fin.read((char*)&obj,sizeof(obj));
    obj.putdata();
	fin.close();
	return 0;
}
