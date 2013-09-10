//
//  bacLightObject.cpp
//  Baccarat
//
//  Copyright 2013 Sosolimited. All rights reserved.
//

#include "bacLightObject.h"

bacLightObject::bacLightObject() {
    
    light = new ofxImageObject( "glow.png" );
    light->setCentered( true );
    light->setScale( 0.33 );
    light->setColor( 255, 0, 255 );
//    light->setAlpha( 55 );
    light->setSpecialTransparency( true );
    addChild( light );
    
}

bacLightObject::~bacLightObject() {
    
}
