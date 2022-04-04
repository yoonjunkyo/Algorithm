#include <iostream>
#include <vector>

using namespace std;

string func(vector<string> words,int n,int len,string str) {

	for (int i = 0; i < n; i++) {
		if (len > words[i].size()){
			len = words[i].size();
		}
	}
	string res = "";

	for (int i = 0; i < len; i++) {
		string tmp = "";
		/*
		for (auto& s : words)
		{
			tmp += s[i];
		}
		*/
		//tep = "lll"
		for (auto a = words.begin(); a!= words.end(); a++)  //begin과 end는 처음과 끝의 위치를 가리킴
		{
			tmp += (*a)[i];
		}
		
		int m = count(tmp.begin(), tmp.end(), tmp[0]); //tmp[0] 원소의 개수를 리턴

		if (m == n)
		{
			res += tmp[0];
		}
		else break;
	}

	return res;
}

int main() {
	int n=3, len = INT_MAX;
	string str;

	vector<string> words = { "long","longed","longest"};

	cout<<func(words, n, len, str);


	return 0;
}