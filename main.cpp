#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    string name;
    cout<<"Please input your name:";
    getline(cin,name);
    if (name.empty())
    {
    	cout<<"input is NULL"<<endl;
	}
	
	cout<<"Hello"+name<<endl;
	cout<<"Your name lenth is:"<<name.size()<<endl;
	cout<<"Your name Fist letter is:"<<name[0]<<endl;
	if(name=="imocc")
	{
		cout<<"Your are adminstrator"<<endl;
	}
	system ("pause");
	return 0;
}
