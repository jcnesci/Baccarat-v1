/*
 bacLightMatrix
 
 For Baccarat prototype, this object is a container for all light objects on lobby facade.
 
 Soso OpenFrameworks Addon
 Copyright (C) 2013 Sosolimited
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 and associated documentation files (the "Software"), to deal in the Software without restriction,
 including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
 TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 IN THE SOFTWARE.
 */

#pragma once

#include "ofxObject.h"
#include "ofxImageObject.h"
#include "bacLightObject.h"

enum {
    NOISE_1,
    NOISE_2,
    COSINE,
    STOP
};

class bacLightMatrix : public ofxObject
{
public:
	
    bacLightMatrix();
	~bacLightMatrix();
    
    void                            animateLights( int animType );
	
public:
    
    int                             gridWidth = 44;
    int                             gridHeight = 57;
    float                           gridSpacingX = 10.42;
    float                           gridSpacingY = 10.45;
    
//    vector<ofxImageObject*>         lights;
    vector<bacLightObject*>         lights;
    
};