//
//  Sprite.h
//  Pimplemator
//
//  Created by Saman Rezazadeh Tehrani on 4/26/15.
//
//

#ifndef __Pimplemator__Sprite__
#define __Pimplemator__Sprite__

#include <stdio.h>
#include <iostream>
#include <vector>
#include <ofMain.h>

#include "Globals.h"
#include "Sequence.h"
using namespace std;

class Sprite{
public:
    Sprite(){
        
    };
    Sprite(string name, int ID, int size,vector<int> indexes);
    ~Sprite(){
    };
    
    int STATE; 
    
    string name;
    int ID;
    int length;
    string loadingFolder;
    // array of sequences
    vector<ofTexture> sequences;
    ofTexture** idealSequences;
    vector<ofTexture> bulgeSequences;
    vector<ofTexture> popSequences;
    vector<ofTexture> disconnectSequences;
    vector<ofTexture> releaveSequences;

    void loadAllFrames();
    void releaseAllFrames();
    void loadIdealFrames();
    void releaseIdealFrames();
    void loadBulgeFrames();
    void releaseBulgeFrames();
    void loadPopFrames();
    void releasePopFrames();
    void loadDisconnectFrames();
    void releaseDisconnectFrames();
    
    //array of sounds
    vector<ofSoundPlayer> idealSounds;
    vector<ofSoundPlayer> bulgeSounds;
    vector<ofSoundPlayer> popSounds;
    vector<ofSoundPlayer> disconnectSounds;
    vector<ofSoundPlayer> backwardSounds;
 
    void loadIdealSounds();
    void releaseIdealSounds();
    void loadBulgeSounds();
    void releaseBulgeSounds();
    void loadPopSounds();
    void releasePopSounds();
    void loadDisconnectSounds();
    void releaseDisconnectSounds();

    
    //change state
    int changeStateTo(int newState);
    vector<int> stateIndexes;
};


#endif /* defined(__Pimplemator__Sprite__) */
