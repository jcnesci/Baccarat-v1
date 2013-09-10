//
//  bacLobbyObject.cpp
//  Baccarat
//
//  Copyright 2013 Sosolimited. All rights reserved.
//

#include "bacLobbyObject.h"

bacLobbyObject::bacLobbyObject() {
    
    lobbyImage = new ofxImageObject( "Lobby-Render-visualizer-bg.png" );
    lobbyImage->setCentered( true );
    addChild( lobbyImage );
    
}

bacLobbyObject::~bacLobbyObject() {
    
}