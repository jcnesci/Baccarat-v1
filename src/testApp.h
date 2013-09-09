#pragma once

#include "ofMain.h"
#include "ofxScene.h"
#include "ofxRectangleObject.h"
#include "ofxSosoRenderer.h"
#include "ofxImageObject.h"
#include "ofxTextObject.h"
#include "ofxLetterTextObject.h"
#include "ofxCircleObject.h"
#include "ofxAnimation.h"
#include "ofxVideoPlayerObject.h"
#include "ofxLineSegmentObject.h"
#include "ofxLineStripObject.h"
#include "ofxDynamicPolygonObject.h"
#include "bacLobbyObject.h"
#include "bacLightMatrix.h"

class testApp : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);		


public:
    
    ofxScene						*scene;
    
    ofxImageObject					*lobbyImage;
    bacLobbyObject                  *newLobbyImage;
    ofxObject                       *lightsRoot;
    bacLightMatrix                  *newLightsMatrix;
    
    ofxImageObject					*peopleImage;
	
    int                             gridWidth = 44;
    int                             gridHeight = 57;
    float                           gridSpacingX = 10.42;
    float                           gridSpacingY = 10.45;
    vector<ofxImageObject*>         lights;
    
	ofxVideoPlayerObject			*movie;
	ofVideoPlayer					player;
    
    int                             animationType = STOP;
};

