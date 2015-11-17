//
//  particle.hpp
//  open_frameworks_week2
//
//  Created by Courtney Snavely on 11/17/15.
//
//

#ifndef particle_hpp
#define particle_hpp

#include "ofMain.h" 



#include <stdio.h>

class Particle{
    
public: 
    Particle ();
    
    void moveTo();
    void update(); 
    void draw();
//    void mousePressed(int x, int y, int button);
//    void mouseReleased(int x, int y, int button); 
    
    
    int x;
    int y;
        
    ofPolyline currentPolyline;
    bool leftMouseButtonPressed;
    ofVec2f lastPoint;
    float minDistance;
    
    
    vector <ofPolyline> polylines;
    
    
};

#endif /* particle_hpp */
