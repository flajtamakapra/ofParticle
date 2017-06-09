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

    pts.x+=speedX;
    pts.y+=speedY;


}

void Particle::draw(){
    ofSetColor(color);
    ofDrawCircle(pts.x,pts.y,dim);
}

Particle::~Particle(){

}


