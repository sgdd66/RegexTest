#include"stdafx.h"


int main(){

	//��һ�ִ洢��ʽ
	//match_results<string::const_iterator> result;
	//�ڶ��ִ洢��ʽ
	smatch result;

	//�ı�����
	string str="1994 is my birth year 1994";
	//������ʽ
	string regex_str("\\d{4}");
	regex pattern1(regex_str,regex::icase);

	//����������
	string::const_iterator iter = str.begin();
	string::const_iterator iterEnd= str.end();
	string temp;
	//�������
	while (std::regex_search(iter,iterEnd,result,pattern1))
	{
		temp=result[0];
		cout<<temp<<endl;
		iter = result[0].second; //����������ʼλ��
	}

	//����ƥ��
	string regex_str2("(\\d{4}).*");
	regex pattern2(regex_str2,regex::icase);

	if(regex_match(str,result,pattern2)){
		cout<<result[0]<<endl;
		cout<<result[1]<<endl;
	}
	
	//�����滻
	std::regex reg1("\\d{4}");
	string t("1993");
	str = regex_replace(str,reg1,t); //trim_left
	cout<<str<<endl;
		
	return 0;
}