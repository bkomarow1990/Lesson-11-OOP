#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
template <typename T>
void print(const vector<T>& v,const string & text=" ") {
	cout << text << endl;
	for (const auto& elem : v)
	{
		cout << elem << endl;
	}
}
int main() {
	srand(time(NULL));
	cout << "" << endl;
	int amount = 10;
	vector<int> v1;
	for (size_t i = 0; i < 20; i++)
	{
		v1.push_back(i + 1);
		cout << "Capacity: " << v1.capacity() << " Size: " << v1.size() << endl;
	}
	cout << "=============" << endl;
	print(v1, "Vector:");
	cout << "=============" << endl;
	vector<int>v{22,10,12,333,228};
	print(v, "ggg");
	cout << "=============" << endl;
	int value = 500+ rand() % 501;
	v.insert(v.begin()+2,value);
	print(v, "d");
	cout << "=============" << endl;
	/*v.erase(v.begin(), v.begin()+3);
	v.erase(v.begin(), v.begin()+3);
	print(v, "f");*/
	cout << "Sort: " << endl;
	sort(v.begin(),v.end());
	print(v, "f");

	// you will add words, then add to vector
	// sort in 2 types
	// delete out values
	//paste in cenetr of vector(probablity in center) some new words.
	//sort 2 halfs
	/*cout << "==========CWORK==========" << endl;
	vector<string>svect{"apple","pineapple","watermelon","cherry"};
	sort(svect.begin(),svect.end());
	print(svect, "Sort 1: ");
	sort(svect.rbegin(), svect.rend());
	print(svect, "Sort 2: ");
	svect.erase(svect.begin());
	svect.erase(svect.end()-1);
	print(svect, "Delete out values");
	svect.insert(svect.begin()+(svect.size()/2),"CENTER");
	print(svect, "center");
	int centr_pos = svect.size() / 2;
	sort(svect.begin(), svect.end()-centr_pos);
	sort(svect.begin()-centr_pos, svect.end());
	print(svect, "Sort 2 halfs");*/
	return 0;
}