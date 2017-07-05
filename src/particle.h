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
    ofPoint ptsOrig;
    float radius;
    float speedY;   // speed and direction
    float speedX;
    float speedZ;
    float offsetX, offsetY, offsetZ;
    float angle;
    float dim;        // size
    ofColor color;  // color using ofColor type
    float startPt = ofRandom(TWO_PI);

    ofSpherePrimitive sphere;




    Particle(ofPoint pts, float radius, float dim, float speedX, float speedY, float speedZ, float offsetX, float offsetY, float offsetZ, ofColor color);
    Particle(ofPoint pts, int dim, float speedX, float speedY, float speedZ, ofColor color);
    ~Particle();
    private:
};
#endif
