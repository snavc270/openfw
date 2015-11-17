#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofEnableSmoothing();
    
    ofSetFrameRate(30);
    
    minDistance = 10;
    leftMouseButtonPressed = false;
    
  

}

//--------------------------------------------------------------
void ofApp::update(){
    
    theParticle.x+= (mouseX- theParticle.x)*0.1;
    theParticle.y+= (mouseY- theParticle.y)*0.1;
    
    
    if (leftMouseButtonPressed) {
        ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
        if (lastPoint.distance(mousePos) >= minDistance) {
          
            currentPolyline.curveTo(mousePos);  
            lastPoint = mousePos;
        }
    }


    
    
        }

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    ofSetColor(255, 50, 50, 100);
   
    for (int i=0; i<polylines.size(); i++) {
        ofPolyline polyline = polylines[i];
        polyline.draw();
        float numPoints = polyline.size();
        float normalLength = 50;
        for (int p=0; p<500; p+=1) {
            ofVec3f point = polyline.getPointAtPercent(p/500.0);
            float floatIndex = p/100.0 * (numPoints-1);
            ofVec3f normal = polyline.getNormalAtIndexInterpolated(floatIndex) * normalLength;
            ofLine(point-normal/2, point+normal/2);
        }
        
        currentPolyline.draw();
    }
   
    for (int j=0; j<200; j++){
    theParticle.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if (button == OF_MOUSE_BUTTON_LEFT) {
        leftMouseButtonPressed = true;
        currentPolyline.curveTo(x, y);
        currentPolyline.curveTo(x, y);
        lastPoint.set(x, y);
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if (button == OF_MOUSE_BUTTON_LEFT) {
        leftMouseButtonPressed = false;
        currentPolyline.curveTo(x, y);
        currentPolyline.simplify(0.75);
        polylines.push_back(currentPolyline);
        currentPolyline.clear();
    }

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
