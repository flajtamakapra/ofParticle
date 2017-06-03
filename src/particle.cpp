#include "particle.h"

Particle::Particle(float x, float y, int dim, float speedX, float speedY, ofColor color) {
    this->x = x;
    this->y = y;
    this->dim = dim;
    this->speedY = speedY;
    this->speedX = speedX;
    this->color = color;
}
Particle::Particle(float x, float y, float z, int dim, float speedX, float speedY, float speedZ, ofColor color) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->dim = dim;
    this->speedY = speedY;
    this->speedX = speedX;
    this->speedZ = speedZ;
    this->color = color;
}

void Particle::update(){

    if(x > ofGetWidth()){
        x = 0;
    }
    if(y > ofGetHeight()){
        y = -10;
    }

    x+=speedX;
    y+=speedY;
}

void Particle::draw(){
    ofSetColor(color);
    ofDrawCircle(x,y,dim);
}

Particle::~Particle(){

}


