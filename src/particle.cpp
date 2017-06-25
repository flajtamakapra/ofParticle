#include "particle.h"

// 2 dimensions trajet lignes courbes
Particle::Particle(ofPoint pts, float angle, int dim, float speedX, float speedY, ofColor color) {

    this->pts = pts;
    this->dim = dim;
    this->angle = angle;
    this->r = r;
    this->speedY = speedY;
    this->speedX = speedX;
    this->color = color;
}
 // 3 dimension trajet lignes droites
Particle::Particle(ofPoint pts, int dim, float speedX, float speedY, float speedZ, ofColor color) {

    this->pts = pts;
    this->dim = dim;
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
        pts.z+=speedZ;
    }

    pts.x+=speedX;
    pts.y+=speedY;

}

void Particle::draw(){
    ofSetColor(color);
    ofDrawCircle(pts.x,pts.y,dim);
}
void Particle::setD(int dim){
    this->dim = dim;
}
bool Particle::operator ==(Particle p){
    return (this->pts.x == p.pts.x && this->pts.y == p.pts.y && this->pts.z == p.pts.z);
}

Particle::~Particle(){

}



