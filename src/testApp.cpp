//
//  testApp.cpp
//  Baccarat
//
//  Copyright 2013 Sosolimited. All rights reserved.
//
//  JC's exercise at creating the Baccarat lobby with animations of indivdual light objects.
//  Press 1, 2, 3, or 4 to trigger different anim states.
//

#include "testApp.h"

// draws once at start
//--------------------------------------------------------------
void testApp::setup(){		
	   
    // Replace the default ofGLRenderer with ofxSosoRenderer which has overriden setupScreen() and setupScreenPerspective().
    // This lets us set up the scene graph how we want to.
    // Warning: Up is up and down is down in this world.
    ofSetCurrentRenderer(ofPtr<ofBaseRenderer>(new ofxSosoRenderer(false)));
    
    // Create a scene.
    // The scene is a scene graph that renders objects added to its root and their children and their children's children and so on.
    // When the render mode of the scene is set to RENDER_ALPHA_DEPTH_SORTED, it handles sorting of both transparent and opaque objects in the z-axis.
    scene = new ofxScene(ofGetWidth(), ofGetHeight());
    scene->setBackgroundColor(10, 10, 10);
    
    // Display background image of Baccarat lobby
    newLobbyImage = new bacLobbyObject();                                                          //Call this with true to center it.	Defaults to lower left origin.
    scene->getRoot()->addChild(newLobbyImage);                                                     //Add the object to the scene's root.

    // Display our fake people couple
    peopleImage = new ofxImageObject("Lobby-Render-visualizer-people.png");
    peopleImage->setTrans(0,0,2);                                                               // z-index is 2: above lobby image but beneath lights
    peopleImage->setSpecialTransparency(true);
    peopleImage->setCentered(true);
    scene->getRoot()->addChild(peopleImage);
    
    // Container for all light objects
    newLightsMatrix = new bacLightMatrix();
    newLightsMatrix->setTrans(-225, -292.5, 1);                                                     // origin is at the bottom

    scene->getRoot()->addChild(newLightsMatrix);
    
    
}

//--------------------------------------------------------------
void testApp::update(){	
    
	//Update the scene with the current time. This call propagates the idle() call to all objects as well.
	//Note: If you are capturing frames to create a movie, simply replace ofGetElapsedTimef() with a float variable that you increment by a fixed time interval each frame.
    scene->update(ofGetElapsedTimef());
}

// redraws at every frame
//--------------------------------------------------------------
void testApp::draw(){
    
    // call different light animations
    newLightsMatrix->animateLights( animationType );
    
    //Call draw on scene, which initiates the drawing of the root object.
    scene->draw();          	
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){
    
    // select different light animations
    if(key == '1'){
        animationType = STOP;
    }
    if(key == '2'){
        animationType = NOISE_1;
    }
    if(key == '3'){
        animationType = NOISE_2;
    }
    if(key == '4'){
        animationType = COSINE;
    }
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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


