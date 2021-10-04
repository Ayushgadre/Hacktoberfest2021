// program showing the concept of file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream file;
	file.open("abc.txt",ios::out);
	if(!file)
	{
		cout<<"Error while dealing with a file."<<endl;
	}
	cout<<"current position : "<<file.tellp()<<endl;
	file<<"WELCOME USER";
	cout<<"current position : "<<file.tellp()<<endl;
	file.close();
	
	file.open("abc.txt",ios::in);
	if(!file)
	{
		cout<<"Error while dealing with a file."<<endl;
	}
	char ch;
	while(!file.eof())
	{
		file>>noskipws>>ch;
		if(file.tellg()==-1)
			break;
		cout<<"Character : "<<ch<<" position : "<<file.tellg()<<endl;
	}
	return 0;
}
