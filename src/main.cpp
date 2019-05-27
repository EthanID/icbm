#include <iostream>
#include <math.h>
#include "vector.h"

using namespace std;

int main() {
    cout << "To great heights!" << endl;
    vector ethansVector(2, 4);
    vector colinsVector(4, 3);
    vector ourVector = ethansVector * colinsVector;
    cout << ourVector.getX() << ", " << ourVector.getY() << endl;
}
