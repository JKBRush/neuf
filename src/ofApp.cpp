#include "ofMain.h"
#include "ofApp.h"

void ofApp::setup(){
    
    ofBackground(0);
    ofHideCursor();
    iMac.load("Infinite Loop.png");
    shader.load("shader");
    
    x_pos = (ofGetWidth() - iMac.getWidth())/2;
    y_pos = (ofGetHeight() - iMac.getHeight())/2;

}

void ofApp::draw(){

    ofSetColor(255);
    iMac.draw(x_pos, y_pos);
    
    shader.begin();
    
    // Send uniforms
    shader.setUniform1f("u_time", ofGetElapsedTimef());
    shader.setUniform2f("u_mouse", mouseX, mouseY);
    shader.setUniform2f("u_resolution",ofGetWidth(),ofGetHeight());
    
    ofDrawRectangle(0,0,ofGetWidth(), ofGetHeight());
    
    shader.end();
    

}

int main( ){
    
    ofSetupOpenGL(1024,768,OF_FULLSCREEN);
    ofRunApp(new ofApp());
}

