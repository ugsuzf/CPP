#include <cmath> 
#include <iostream> 
#include <functional> 
#include <vector>
using std::vector; 
using std::function;
using namespace std;

template <typename T, typename FunType> 
vector<T> filter(const vector<T>& v, FunType p) {
	vector<T> temp;
	for (int i = 0; i < v.size(); i++) {
		if (p(v.at(i)))
			temp.push_back(v.at(i));
	}
	return temp;
}

template <typename T, typename FunType1, typename FunType2> 
vector<T> transfilt(vector<T>& v, FunType1 t, FunType2 p) {
	for (int i = 0; i < v.size(); i++)
	{
		v.at(i) = t(v.at(i));
	}
	return filter(v, p);
}
template <typename T>
void printVec(const vector<T>& v) {
	cout << "[";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << "]" << endl;
}

int main() {
	vector<int> v{ 1, -3, 4, -2, 6, -8, 5 };
	printVec(v);
	vector<int> r = filter(v, [](int n)-> bool
		{
			return (n % 2 == 0);
		});
					

	printVec(r);
	vector<int> s = filter(v, [](int n) 
		{
		return( n > 0);
		});
	printVec(s);
	vector<double> w{ 1.5, -3.1, 4.0, -2.0, 6.3 };
	printVec(w); 
	double mn = -0.5, mx = 0.5;
	vector<double> d = transfilt(w, [](double n) ->double
		{
			return sin(n);
		}, [mn, mx](double n)-> bool
		{
			return((n >= mn) && (n <= mx));
		});
		
	printVec(w);
	printVec(d);
}