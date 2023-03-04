#include <iostream>
#include <vector>
using namespace std;

void mang_doi_xung(vector<int>& c);
void copy_vector(vector<int>& b, vector<int>& a);
void xuat(vector<int> a);

int main()
{

	vector<int> c;
	vector<int> a;
	c.resize(4);
	c.at(0) = 1;
	c.at(1) = 2;
	c.at(2) = 3;
	c.at(3) = 1;
	a.resize(4);
	xuat(c);
	cout << endl;
	system("pause");
	mang_doi_xung(c);
	xuat(c);
	system("pause");

	return 0;
}

void mang_doi_xung(vector<int> &c)
{
	vector<int> a;
	a.resize(size(c));
	vector<int> b;
	b.resize(size(c));
	copy_vector(a, c);
	copy_vector(b, c);
	for (int i = 0; i < size(c) / 2; i++)
	{
		// Trường hợp thêm sau a[n-i-1]
		if (c.at(i) != c.at(size(c) - i - 1))
		{
			a.insert(a.begin() + i + 1, c.at(i));
		}
	}

	for (int i = 0; i < size(c) / 2; i++)
	{
		// Trường hợp thêm sau a[n-i-1]
		if (c.at(i) != c.at(size(c) - i - 1))
		{		
			b.insert(b.begin(), c.at(size(c) - i - 1));
		}


	}
	if (size(b) < size(a))
	{
		c.resize(size(b));
		copy_vector(c, b);
	}
	else //a <= b
	{
		c.resize(size(a));
		copy_vector(c, a);
	}

}

void copy_vector(vector<int>& b, vector<int>& a)
{
	for (int i = 0; i < size(a); i++)
	{
		b.at(i) = a.at(i);
	}
}

void xuat(vector<int> a)
{
	for (int i = 0; i < size(a); i++)
	{
		cout << a.at(i) << "   ";
	}
}