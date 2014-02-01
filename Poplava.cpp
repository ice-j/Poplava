#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Klasi
{
	int r,p;
};

bool Opagjachki(Klasi i,Klasi q)
{
	return i.p>q.p;
}

int main()
{
	int n;
	cin >> n;
	vector<Klasi> vec;
	for(int i=0;i<n;i++)
	{
		Klasi k;
		cin >> k.r >> k.p;
		vec.push_back(k);
	}
	sort(vec.begin(),vec.end(),Opagjachki);
	int rabotnici=0;
	vector<int> results;
	for(int i=0;i<vec.size();i++)
	{
		rabotnici+=vec[i].r;
		results.push_back(rabotnici*vec[i].p);
	}
	int max=*max_element(results.begin(),results.end());
	cout << max;
	return 0;
}
