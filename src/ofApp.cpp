#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    
    face.init(0, 1920, 1080);
    
    manager.addElement(new Default());
    manager.addElement(new FaceNoise(&face));
    manager.addElement(new Smile(&face));
    manager.setup();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    face.update();
    manager.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    manager.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case ' ':
            manager.nextElement();
            break;
        case 'r':
            face.reset();
            break;
        default:
            manager.keyPressed(key);
            break;
    };
    
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
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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
