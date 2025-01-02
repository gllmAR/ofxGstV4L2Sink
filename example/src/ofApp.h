#pragma once

#include "ofMain.h"
#include "ofxGstV4L2Sink.h"

class ofApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();

private:
    ofVideoGrabber grabber;
    ofxGstV4L2Sink v4l2Sink;
};