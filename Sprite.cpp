//
//  Sprite.cpp
//  Pimplemator
//
//  Created by Saman Rezazadeh Tehrani on 4/26/15.
//
//

#include "Sprite.h"


Sprite::Sprite( string name, int ID, int size,vector<int> indexes ){

    this->name = name;
    this->ID = ID;
    this->length = size;
    this->stateIndexes.push_back( indexes[0] );
    cout<< stateIndexes[0] <<endl;
    this->STATE = STATE_INITIALIZE;
    idealSequences= new ofTexture*[stateIndexes[STATE_IDEAL]];
   loadIdealFrames();
    
}

void Sprite::loadAllFrames(){
    for( int i = 0 ; i < length ; i++ ){
        stringstream frameNumber;
        frameNumber<<setfill('0') << setw(3) << i;

        string filepath = name+ "/"+name+"_"+ frameNumber.str()+".png";

        ofImage loader;

        loader.setUseTexture(false);
        loader.loadImage(filepath);
        ofTexture tempFrame;
        tempFrame.allocate(loader.getWidth(), loader.getHeight(),GL_RGBA); //assuming rgb image
        tempFrame.loadData(loader.getPixels(), loader.getWidth(), loader.getHeight(), GL_RGBA);
        sequences.push_back(tempFrame);
        loader.clear();

    }

}



int Sprite::changeStateTo(int newState){
    
    
}


void Sprite::loadIdealFrames(){
    for( int i = 0 ; i < stateIndexes[STATE_IDEAL] ; i++ ){
        stringstream frameNumber;
        frameNumber<<setfill('0') << setw(3) << i ;
        
        string filepath = name+ "/"+name+"_"+ frameNumber.str()+".png";
                cout<< filepath <<endl;
        ofImage loader;
        loader.setUseTexture(false);
        loader.loadImage(filepath);
        //ofTexture tempFrame;
        (*(idealSequences+i))  = new ofTexture[1];
        (*(idealSequences+i))->allocate(loader.getWidth(), loader.getHeight(),GL_RGBA); //assuming rgb image

      //  *(idealSequences+i)->
        (*(idealSequences+i))->loadData(loader.getPixels(), loader.getWidth(), loader.getHeight(), GL_RGBA);
    
        //idealSequences.push_back(tempFrame);
        //loader.clear();

    }
   // cout<< idealSequences.size() << "size"<<endl;
}
void Sprite::loadBulgeFrames(){
    for( int i = stateIndexes[STATE_IDEAL] ; i < stateIndexes[STATE_BULGE] ; i++ ){
        stringstream frameNumber;
        frameNumber<<setfill('0') << setw(3) << i ;
        
        string filepath = name+ "/"+name+"_"+ frameNumber.str()+".png";
        ofImage loader;
        loader.setUseTexture(false);
        loader.loadImage(filepath);
        ofTexture tempFrame;
        tempFrame.allocate(loader.getWidth(), loader.getHeight(),GL_RGBA); //assuming rgb image
        tempFrame.loadData(loader.getPixels(), loader.getWidth(), loader.getHeight(), GL_RGBA);
        bulgeSequences.push_back(tempFrame);
        loader.clear();
     
    }
    
}
void Sprite::loadPopFrames(){
    for( int i = stateIndexes[STATE_BULGE] ; i < stateIndexes[STATE_POP] ; i++ ){
        stringstream frameNumber;
        frameNumber<<setfill('0') << setw(3) << i ;
        
        string filepath = name+ "/"+name+"_"+ frameNumber.str()+".png";
        ofImage loader;
        loader.setUseTexture(false);
        loader.loadImage(filepath);
        ofTexture tempFrame;
        tempFrame.allocate(loader.getWidth(), loader.getHeight(),GL_RGBA); //assuming rgb image
        tempFrame.loadData(loader.getPixels(), loader.getWidth(), loader.getHeight(), GL_RGBA);
        popSequences.push_back(tempFrame);
        loader.clear();

    }
    
}
void Sprite::loadDisconnectFrames(){
    for( int i = stateIndexes[STATE_POP] ; i < stateIndexes[STATE_DISCONNECT] ; i++ ){
        stringstream frameNumber;
        frameNumber<<setfill('0') << setw(3) << i ;
        
        string filepath = name+ "/"+name+"_"+ frameNumber.str()+".png";
        ofImage loader;
        loader.setUseTexture(false);
        loader.loadImage(filepath);
        ofTexture tempFrame;
        tempFrame.allocate(loader.getWidth(), loader.getHeight(),GL_RGBA); //assuming rgb image
        tempFrame.loadData(loader.getPixels(), loader.getWidth(), loader.getHeight(), GL_RGBA);
        disconnectSequences.push_back(tempFrame);
        loader.clear();

     
    }
}


void Sprite::releaseAllFrames(){
    for( vector<ofTexture>::iterator it = sequences.begin() ; it != sequences.end() ; it++ ){
        it->clear();
    }
    sequences.clear();
}


void Sprite::releaseIdealFrames(){
 //   for( vector<ofTexture>::iterator it = idealSequences.begin() ; it != idealSequences.end() ; it++ ){
   //     it->clear();
    //}
    //idealSequences.clear();
}

void Sprite::releaseBulgeFrames(){
    for( vector<ofTexture>::iterator it = bulgeSequences.begin() ; it != bulgeSequences.end() ; it++ ){
        it->clear();
    }
    bulgeSequences.clear();
}


void Sprite::releasePopFrames(){
    for( vector<ofTexture>::iterator it = popSequences.begin() ; it != popSequences.end() ; it++ ){
        it->clear();
    }
    popSequences.clear();
}

void Sprite::releaseDisconnectFrames(){
    for( vector<ofTexture>::iterator it = disconnectSequences.begin() ; it != disconnectSequences.end() ; it++ ){
        it->clear();
    }
    disconnectSequences.clear();
}



void Sprite::loadIdealSounds(){
    
}
void Sprite::releaseIdealSounds(){
    
}
void Sprite::loadBulgeSounds(){
    
}
void Sprite::releaseBulgeSounds(){
    
}
void Sprite::loadPopSounds(){
    
}

void Sprite::releasePopSounds(){

}

void Sprite::loadDisconnectSounds(){
    
}
void Sprite::releaseDisconnectSounds(){
    
}
