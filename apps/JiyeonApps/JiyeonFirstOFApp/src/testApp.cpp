#include "testApp.h"

int myCircleX;
int myCircleY;

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    
    myCircleX = 300;
    myCircleY = 200;
}

//--------------------------------------------------------------
void testApp::update(){
//    myCircleX++;
//    if(myCircleX > 600)
//    {
//        myCircleX = 300;
//    }
////    myCircleX+=4;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(0, 255, 255);
    ofCircle(myCircleX, myCircleY, 60);
    
    ofDrawBitmapString(ofToString(ofGetFrameRate()) + "fps", 10, 15);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
//    cout << "keyPressed " << (char)key << endl;
    
    if(key==119) // 'w' key (up)
    {
        myCircleY--;
    }
    if(key==97) // 'a' key (left)
    {
        myCircleX--;
    }
    if(key==115) // 's' key (down)
    {
        myCircleY++;
    }
    if(key==100) // 'd' key (right)
    {
        myCircleX++;
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    cout << "keyReleased " << key << endl;
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}