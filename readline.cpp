#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line;
	while (getline(cin, line)) {	//这个是每次读一行
		cout << line << endl;
		//这个会一直输入一直输出，直到你单独输入Ctrl+Z才停止
	}
	return 0;
}