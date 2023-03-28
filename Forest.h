#include <iostream>
#include "tree.h"
#include <vector>
using namespace std;

class Forest {
public:
    vector <Tree*>wektor;
    void AddTree(Tree* t)
    {
        wektor.push_back(t);
    }
};
