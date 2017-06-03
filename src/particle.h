#ifndef _PARTICLE
#define _PARTICLE

#include "ofMain.h"

class Particle {

    public:


//    void setup();
    void update();
    void draw();


    float x;        // position
    float y;
    float z;
    float speedY;   // speed and direction
    float speedX;
    float speedZ;
    int dim;        // size
    ofColor color;  // color using ofColor type

    Particle(float x, float y, int dim, float speedX, float speedY, ofColor color);
    Particle(float x, float y, float z, int dim, float speedX, float speedY, float speedZ, ofColor color);
    ~Particle();
    private:
};
#endif
