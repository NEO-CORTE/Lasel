#include <iostream>
using namespace std;
#include "Forest.h"

int main()
{

	Forest f;
	Tree* drzewo1 = new Tree(5, "green", '*', 2, 3);
	Tree* drzewo2 = new Tree(5, "green", 'L', 5, 6);
	Tree* drzewo3 = new Tree(5, "green", 'I', 7, 2);
	f.AddTree(drzewo1);
	f.AddTree(drzewo2);
	f.AddTree(drzewo3);
	delete(drzewo1);
	delete(drzewo2);
	delete(drzewo3);
}
