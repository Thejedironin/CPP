//	C++中的switch语句
#include <iostream>
using namespace std;
int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while(cin >> ch ){
		//如果ch是元音字母，将其对应的计数值加1
		switch (ch) {
			case 'a' :
				++aCnt;
				break;
			case 'e' :
				++eCnt;
				break;
			case 'i' :
				++iCnt;
				break;
			case 'o' :
				++oCnt;
				break;
			case 'u' :
				++uCnt;
				break;
		} 
	}
	//输出结果
	cout << "Number of vowel a : \t" << aCnt << '\n'
	     << "Number of vowel e : \t" << eCnt << '\n'
	     << "Number of vowel i : \t" << iCnt << '\n'
	     << "Number of vowel o : \t" << oCnt << '\n'
	     << "Number of vowel u : \t" << uCnt << endl;
	//记得最后输入结束时，加上Ctrl+Z，再按回车 
} 
