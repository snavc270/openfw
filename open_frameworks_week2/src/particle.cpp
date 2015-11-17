//
//  particle.cpp
//  open_frameworks_week2
//
//  Created by Courtney Snavely on 11/17/15.
//
//

#include "particle.hpp"

Particle::Particle(){
    // Set the initial color
//    color.set( ofRandom(255), ofRandom(255), ofRandom(255));
    
        x = ofRandom( ofGetWindowWidth() );
    
        y = ofRandom( ofGetWindowHeight() );
//    
//    minDistance = 10;
//    leftMouseButtonPressed = false;
}

//void Particle::update(){
//    if (leftMouseButtonPressed) {
//        ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
//        if (lastPoint.distance(mousePos) >= minDistance) {
//            // a.distance(b) calculates the Euclidean distance between point a and b.  It's
//            // the straight line distance between the points.
//            currentPolyline.curveTo(mousePos);  // Here we are using an ofVec2f with curveTo(...)
//            lastPoint = mousePos;
//        }
//    }
//}

void Particle::moveTo(){
    
}

void Particle::draw(){

    ofSetColor(255); ;
        ofFill();
        ofCircle( x, y, 5);
    
    
//    for (int i=0; i<polylines.size(); i++) {
//        ofPolyline polyline = polylines[i];
//        polyline.draw();
//        float numPoints = polyline.size();
//        float normalLength = 50;
//        for (int p=0; p<500; p+=1) {
//            ofVec3f point = polyline.getPointAtPercent(p/500.0);
//            float floatIndex = p/100.0 * (numPoints-1);
//            ofVec3f normal = polyline.getNormalAtIndexInterpolated(floatIndex) * normalLength;
//            ofLine(point-normal/2, point+normal/2);
//        }
//        
//        currentPolyline.draw();
//    }
}


//    void Particle::mousePressed(int x, int y, int button){
//            if (button == OF_MOUSE_BUTTON_LEFT) {
//                leftMouseButtonPressed = true;
//                currentPolyline.curveTo(x, y);
//                currentPolyline.curveTo(x, y);
//                lastPoint.set(x, y);
//            }
//        
//    }
//    
//    void Particle::mouseReleased(int x, int y, int button){
//        if (button == OF_MOUSE_BUTTON_LEFT) {
//            leftMouseButtonPressed = false;
//            currentPolyline.curveTo(x, y);
//            currentPolyline.simplify(0.75);
//            polylines.push_back(currentPolyline);
//            currentPolyline.clear();
//        }
//    }


    



