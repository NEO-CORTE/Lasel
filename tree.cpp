#include <iostream>
#include "tree.h"
using namespace std;
void Tree::drawTree() {
	for (int j = 0; j < height; j++) {
		for (int i = 0; i < 2 * height - 1; i++) {
			if (tab[j][i] == 0) {
				cout << " ";
			}
			else
			{
				cout << znak;
			}
		}
		cout << "\n";
	}
}
Tree::Tree(int h,const string c, char z, int xl, int yl) {
	height = h;
	color = c;
	znak = z;
	x = xl;
	y = yl;
	tab = new int* [height];
	for (int j = 0; j < height; j++) {
		tab[j] = new int[2 * height - 1];
		for (int i = 0; i < 2 * height - 1; i++)
			tab[j][i] = 0;
	}
	for (int j = 0; j < height; j++)
		for (int i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
}
Tree::~Tree() {
	int j;
	cout << "kasuje drzewo\n";
	for (j = 0; j < height; j++)
		delete tab[j];
	delete tab;
}