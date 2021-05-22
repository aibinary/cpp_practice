#include <iostream>
using namespace std;
int a = 10;
namespace private_space{
	int a = -10;
}
int main()
{
	cout<<"Hi there! This is c++ world"<<endl;
	int a = 20;
	cout<<::a<<endl;
	cout<<private_space::a<<endl;
	cout<<a<<endl;
}
