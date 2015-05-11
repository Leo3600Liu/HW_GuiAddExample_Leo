//Created by Jiteng Liu (Leo)

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){        //To define the basic environment conditions before the program starts.
    gui.setup();        //set up the gui
    gui.setPosition(950, 20);       //set up the position of gui
    gui.add(diameter.setup("width",10,5,30));       //set up the period of diameter of gui
    gui.add(speed.setup("speed",5,1,10));       //set up the period of speed of gui
    
    bikers.loadImage("images/bikers.jpg");      //load the image
    gears.loadImage("images/gears.gif");        //load the image
    tdf.loadImage("images/tdf_1972_poster.jpg");        //load the image
    
    tdfSmall.loadImage("images/tdf_1972_poster.jpg");       //load the image
    tdfSmall.resize(tdfSmall.width / 4, tdfSmall.height / 4);       //set up the size
    tdfSmall.setImageType(OF_IMAGE_GRAYSCALE);      //set up the type of image
    
    transparency.loadImage("images/transparency.png");      //load the image
    bikeIcon.loadImage("images/bike_icon.png");     //load the image
    bikeIcon.setImageType(OF_IMAGE_GRAYSCALE);      //set up the type of image
}

//--------------------------------------------------------------
void ofApp::update(){       //give a instruct of update
    ofBackground(255);      //set up the color of background
}

//--------------------------------------------------------------
void ofApp::draw(){     //To excute the code.
    gui.draw();     //draw the gui
    ofSetColor(255);        //set up the color
    
    bikers.draw(0, 0);      //draw the bikes
    gears.draw(600, 0);     //draw the gears
    tdf.draw(600, 300);     //draw the tdf
    
    ofSetColor(220, 50, 50);        //set up the color
    tdfSmall.draw(200, 300);        //set up the tdf
    
    ofSetColor(255);        //set up the color
    ofEnableAlphaBlending();
    float wave = sin(ofGetElapsedTimef()*speed);        //give a new definition wave
    transparency.draw(500 + (wave * 100), 20);      //draw the wave
    ofDisableAlphaBlending();       //finish the enable alpha blending
    
    int w = bikeIcon.getWidth();        // getting the ofColors from an image,
    int h = bikeIcon.getHeight();       // using the brightness to draw circles
    //float diameter = ;
    ofSetColor(255, 0, 0);      //set up the color
    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            ofColor cur = bikeIcon.getColor(x, y);      //the x and y for color
            float size = 1 - (cur.getBrightness() / 255);       //give a new definition size
            ofCircle(x * diameter, 500 + y * diameter, 1 + size * diameter / 2);        //set up the size of circle
        }
    }
    
    // same as above, but this time
    unsigned char* pixels = bikeIcon.getPixels();       // use the raw data directly with getPixels()
    ofSetColor(0, 0, 255);      //set up the color
    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            int index = y * w + x;
            unsigned char cur = pixels[index];      //cur equals to pixels
            float size = 1 - ((float) cur / 255);       //set up the size
            ofCircle(200 + x * diameter, 500 + y * diameter, 1 + size * diameter / 2);      //set up the size of circle
        }
    }
    
    ofSetColor(255);        //set up the color
    bikeIcon.draw(190, 490, 20, 20);        //draw the bike icon
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
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
