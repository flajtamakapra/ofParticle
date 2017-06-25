#ifndef _PARTICLE
#define _PARTICLE

#include "ofMain.h"

class Particle {

    public:
// à faire: ajouter la 3eme dimension et des trajets en courbe

//    void setup();
    void update();    
    void draw();
    void setD(int dim);
    bool operator==(Particle p);


    ofPoint pts;
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
