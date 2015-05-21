//
//  Sequence.h
//  Pimplemator
//
//  Created by Saman Rezazadeh Tehrani on 4/26/15.
//
//

#ifndef __Pimplemator__Sequence__
#define __Pimplemator__Sequence__

#include <stdio.h>
#include <iostream>
#include <ofMain.h>
using namespace std;

class Sequence{
public:
    Sequence(){
        
    };
    ~Sequence(){
        
    };
    ofImage* frames;
    //array of ofImages
    void loadSequence(ofImage * newFrames,unsigned int size);
    
    ofImage* getFrameByIndex(unsigned int index);
    
};

#endif /* defined(__Pimplemator__Sequence__) */
