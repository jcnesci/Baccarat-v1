//
//  bacLightMatrix.cpp
//  Baccarat
//
//  Copyright 2013 Sosolimited. All rights reserved.
//

#include "bacLightMatrix.h"

bacLightMatrix::bacLightMatrix() {
    
    // Create individual light objects
    for ( int i = 0; i < gridHeight; i++ ) {
        
        for ( int j = 0; j < gridWidth; j++ ) {
            
            bacLightObject *light = new bacLightObject();
            light->setTrans( ( j * gridSpacingX ) , ( i * gridSpacingY ) , 1 );
            lights.push_back( light );
            addChild( light );
            
        }
        
    }
    
}

bacLightMatrix::~bacLightMatrix() {
    
}

void bacLightMatrix::animateLights( int animType ) {
    
    // Animate lights in different ways
    if ( animType == NOISE_1 ) {
        for (int i = 0; i < lights.size(); i++) {
            lights[i]->light->setColor(255.0 * ofNoise( 10.0*(float)(i%gridWidth)/(float)gridWidth, 10.0*(float)(i/gridWidth) / gridHeight , ofGetElapsedTimef()),
                                255.0 * ofNoise( 5.0*(float)(i%gridWidth)/(float)gridWidth, 5.0*(float)(i/gridWidth) / gridHeight , ofGetElapsedTimef()+10.0),
                                255.0 * ofNoise( 1.0*(float)(i%gridWidth)/(float)gridWidth, 1.0*(float)(i/gridWidth) / gridHeight , ofGetElapsedTimef())+ 3.0);
            lights[i]->setAlpha(255);
        }
    }
    else if ( animType == NOISE_2 ) {
        for (int i = 0; i < lights.size(); i++) {
            lights[i]->light->setColor(0, 255, 255);
            lights[i]->setAlpha(255.0 * ofNoise( (float)(i%gridWidth)/(float)gridWidth, (float)(i/gridWidth) / gridHeight , ofGetElapsedTimef()));
        }
    }
    else if ( animType == COSINE ) {
        for (int i = 0; i < lights.size(); i++) {
            lights[i]->light->setColor(255, 0, 255);
            lights[i]->setAlpha( 128 + 128.0 * cos(i*ofGetElapsedTimef() / 100) );
        }
    }
    else if ( animType == STOP ) {
        for (int i = 0; i < lights.size(); i++) {
            lights[i]->setAlpha(0);
        }
    }
    
}
