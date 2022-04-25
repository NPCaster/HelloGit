#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "Hello world!" << endl;
	int num = 114514;
	for(int i = 0; i < num; i++)
		i += i*7%233;
	cout << num;
	
	return 0;
}