#pragma once
#include <iostream>
#include <string>
using namespace std;
class StringWorker
{
public:
	static void deleteAllInputWords(string& str,const string& word) {
		size_t found = str.find(word);
		while (true)
		{

		}
		if (found != string::npos){
			str.erase(found,word.size());
		}
	}
	static void replaceToNew(string& str, const string& word,const string& newstr) {
		size_t found = str.find(word);
		if (found != string::npos) {
			str.replace(found, word.size(), newstr);
		}
	}
};

