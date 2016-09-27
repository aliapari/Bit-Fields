// 788787.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <bitset>
using namespace std;
class BitSet
{
private:
	bitset<32> a;
public:
	BitSet()
	{
		a = 0;
	}
	void add(int n) {
		a[n] = 1;
	}
	void print_set() {
		cout << a;
		cout << endl;
	}
	BitSet Union(BitSet k) {
		BitSet temp;
		temp.a = a | k.a;
		return temp;
	}
	BitSet Intersect(BitSet k) {
		BitSet temp;
		temp.a = a & k.a;
		return temp;
	}
	BitSet Subs(BitSet k) {
		BitSet temp;
		temp.a = a & ~(k.a);
		return temp;
	}
};


int main()
{
	BitSet a, b, c, d, e;
	a.add(11);b.add(13);
	a.add(10);b.add(12);
	a.add(15);b.add(17);
	a.add(24);b.add(24);
	a.add(20);b.add(20);
	a.add(23);b.add(27);
	a.add(33);b.add(33);

	c = a.Union(b);
	d = a.Intersect(b);
	e = a.Subs(b);

	a.print_set();
	b.print_set();
	c.print_set();
	d.print_set();
	e.print_set();
	
    return 0;
}

