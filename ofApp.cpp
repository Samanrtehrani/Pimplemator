#include "ofApp.h"




//--------------------------------------------------------------
void ofApp::setup(){
    vector<int > t;
    t.push_back(140);
    DoubleUp = Sprite("DoubleUp", 1, 200,t);
    cout<<"hs"<<endl;
    i=0;
    //Curler = Sprite("curler", 1, 370,t);
ofSetBackgroundAuto(true);
    flag = true;
    
 
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    if ( i == 139 ){
        i= 0;
    }
    if(flag){
       (**(DoubleUp.idealSequences + i++)).draw(0,0);
  //      (**(Curler.idealSequences + i++ )).draw(0,0);
 //       ( *(Curler.idealSequences + i++)).draw(0,0);
       //i++;
        //Curler.idealSequences[i++].draw(0,0);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if ( key == 'a'){
       // DoubleUp.releaseAllFrames();
       // flag=false;
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
