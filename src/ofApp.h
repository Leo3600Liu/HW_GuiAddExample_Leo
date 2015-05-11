//Created by Jiteng Liu (Leo)

#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    ofxFloatSlider diameter;
    ofxFloatSlider speed; 
    
    ofImage bikers;     //give a loading picture name bikes
    ofImage gears;      //give a loading picture name gears
    ofImage tdf;        //give a loading picture name tdf
    ofImage tdfSmall;       //give a loading picture name tdfSmall
    ofImage transparency;       //give a loading picture name bikes transparency
    ofImage bikeIcon;       //give a loading picture name bikeIcon
    ofxPanel gui;       //set up gui function
};

