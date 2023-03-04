//#include <iostream>
//#include <vector>
//using namespace std;
//
//void nhap(vector<int>& a);
//void xuat(vector<int> a);
//
//int main()
//{
//	vector<int> a;
//	/*vector<int> c;
//	c.resize(5, 15);
//	xuat(c);
//	system("pause");*/
//	int na;
//	cout << "\nNhap so luong phan tu vector: ";
//	cin >> na;
//	a.resize(na);
//    nhap(a);
//    xuat(a);
//	vector<int> b;
//	xuat(b);
//	for (int i = 0; i < size(a); i++)
//	{
//		if (a.at(i) < 0)
//		{
//			b.insert(b.end(), a.at(i));
//			a.erase(a.begin() + i);
//			i--;
//		}
//	}
//	cout << "\n\t MANG SAU KHI TACH PHAN TU AM RA KHOI MANG A\n";
//	xuat(a);
//	xuat(b);
//	return 0;
//}
//
//void nhap(vector<int>& a)
//{
//	int na = size(a);
//	for (int i = 0; i < na; i++)
//	{
//		cout << "\nNhap a.at(" << i << ") = ";
//		cin >> a.at(i);
//	}
//}
//
//void xuat(vector<int> a)
//{
//	int na = size(a);
//	if (na == 0)
//	{
//		cout << "\nMang chua co phan tu";
//		return;
//	}
//	for (int i = 0; i < na; i++)
//	{
//		cout << a.at(i) << "   ";
//	}
//	cout << endl;
//}