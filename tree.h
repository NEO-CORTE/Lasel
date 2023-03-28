#include <iostream>
using namespace std;
class Tree {
private:
	int height;
	string color;
	char znak;
	int** tab;
	int x;
	int y;
public:
	void drawTree();
	Tree(int h ,const string c, char z, int xl, int yl);
	~Tree();
};
