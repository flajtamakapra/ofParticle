#ifndef _PARTICLE
#define _PARTICLE

#include "ofMain.h"

class Particle {

    public:


//    void setup();
    void update();    
    void draw();


    ofPoint pts;
//    float x;        // position
//    float y;
//    float z;
    float angle = 0;
    float r = 0;
    float speedY;   // speed and direction
    float speedX;
    float speedZ;
    int dim;        // size
    ofColor color;  // color using ofColor type

    Particle(ofPoint pts, float angle, int dim, float speedX, float speedY, ofColor color);
    Particle(ofPoint pts, int dim, float speedX, float speedY, float speedZ, ofColor color);
    ~Particle();
    private:
};
#endif
