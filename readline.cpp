#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line;
	while (getline(cin, line)) {	//�����ÿ�ζ�һ��
		cout << line << endl;
		//�����һֱ����һֱ�����ֱ���㵥������Ctrl+Z��ֹͣ
	}
	return 0;
}