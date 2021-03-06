#include "particle.h"

// 2 dimensions trajet lignes courbes
Particle::Particle(ofPoint pts, float radius, float dim, float speedX, float speedY, float speedZ, float offsetX, float offsetY, float offsetZ, ofColor color) {

    this->pts = pts;
    sphere.setRadius(dim);
    this->radius = radius;
    this->pts = this->ptsOrig = pts;
    this->dim = dim;
    this->radius = radius;
    this->speedY = speedY;
    this->speedX = speedX;
    this->speedZ = speedZ;
    this->offsetX = offsetX;
    this->offsetY = offsetY;
    this->offsetZ = offsetZ;
    this->color = color;

}
 // 3 dimension trajet lignes droites
Particle::Particle(ofPoint pts, int dim, float speedX, float speedY, float speedZ, ofColor color) {

    this->pts = pts;
    sphere.setRadius(dim);
    this->speedY = speedY;
    this->speedX = speedX;
    this->speedZ = speedZ;
    this->color = color;
}

void Particle::update(){
    if(pts.x > ofGetWidth()){
        pts.x = 0;
    }
    if(pts.y > ofGetHeight()){
        pts.y = -10;
    }
    if(pts.z){
        if(pts.z > 1000 || pts.z < -1000) {
            pts.z = 0;
            pts.y = -10;
        }


    }

// Lineaires
//    pts.x+=speedX;
//    pts.y+=speedY;
//    pts.z+=speedZ;
// Cilindriques
    float angleX = startPt+ofGetElapsedTimef()*speedX;
    float angleY = startPt+ofGetElapsedTimef()*speedY;
    float angleZ = startPt+ofGetElapsedTimef()*speedZ;
//    pts.x = ptsOrig.x + (radius + offsetX) * cos(angleX);
//    pts.y = ptsOrig.y + (radius + offsetY) * sin(angleY);
//    pts.z = ptsOrig.z + (radius + offsetZ) * cos(angleZ);


// Autre formule pour trouver une sphere?
// x = r cos(lat)cos(lon)
// y = r cos(lat)sin(lon)
// z = r sin(lat)
// --------------------------------------

    float lon = ofMap(ofRandom(500), 0, 300, -PI, PI);
    float lat = ofMap(ofRandom(500), 0, 300, -PI/2, PI/2);

    pts.x = radius * cos(lat) * cos(lon);
    pts.y = radius * cos(lat) * sin(lon);
    pts.z = radius * sin(lat);

    sphere.setPosition(pts.x, pts.y, pts.z);

}

void Particle::draw(){
    ofSetColor(color);
    //ofDrawCircle(pts.x,pts.y,dim);

    sphere.draw();
}
void Particle::setD(int dim){
    this->dim = dim;
}
bool Particle::operator ==(Particle p){
    return (this->pts.x == p.pts.x && this->pts.y == p.pts.y && this->pts.z == p.pts.z);
}

Particle::~Particle(){

}



