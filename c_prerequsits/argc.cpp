#include<iostream>
using namespace std;
int main(int argc,char **argv,char **envp)
{
	cout<<"command:"<<argc<<endl;

	for(int i=0;i<=argc;i++)
	{
		cout<<"ARGV :"<<argv[i]<<":"<<envp[i]<<endl;//HAAI HUUIi
	}
	return 0;
}
