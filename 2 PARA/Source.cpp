#include <iostream>
#include "StringWorker.h"
using namespace std;
int main() {
	string str1 = "NeBoris";
	StringWorker::deleteAllInputWords(str1, "Boris");
	cout << str1 << endl;
	str1 = "NeBoris";
	StringWorker::replaceToNew(str1, "Boris", "New");
	cout << str1 << endl;
	return 0;
}