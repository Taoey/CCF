#include <iostream>
#include <string>
#include <vector>
#include <sstream>  
using namespace std;


vector<string> getStrList(char * str)
{
	char ch;
	int num=0;
	vector<string> list;
	ch=str[num];
	string temp="";

	while(ch!='\0')
	{

		if (ch>='0'&&ch<='9')//����
		{
			temp+=ch;
			ch=str[++num];
		}
		else                //�����
		{
			string s_ch;   //�������ת��Ϊstring���ͣ�char��>string��
			stringstream stream;
			stream<<ch;
			s_ch = stream.str();  

			list.push_back(temp);
			list.push_back(s_ch);
			temp="";
			ch=str[++num];

		}	

	}
	list.push_back(temp);

	return list;
}


int main()
{
	char str[100];
	cin.getline(str,100);
	vector<string> rstr;
	rstr=getStrList(str);
	return 0;
}