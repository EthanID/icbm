#include <iostream>
#include <math.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include "vector.h"

using namespace std;

int main() {
    cout << "To great heights!" << endl;
    vector ethansVector(2, 4);
    vector colinsVector(4, 3);
    vector ourVector = ethansVector * colinsVector;
    cout << ourVector.getX() << ", " << ourVector.getY() << endl;
}
