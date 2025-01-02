#include "ofApp.h"

void ofApp::setup() {
    // Set up the video grabber
    grabber.setDeviceID(0);
    grabber.setDesiredFrameRate(30);
    grabber.initGrabber(640, 480);

    // Set up the v4l2 sink
    v4l2Sink.setup(640, 480);
}

void ofApp::update() {
    // Update the video grabber
    grabber.update();

    if (grabber.isFrameNew()) {
        // Send the new frame to the v4l2 sink
        v4l2Sink.update(grabber.getPixels());
    }
}

void ofApp::draw() {
    // Draw the video grabber
    grabber.draw(0, 0);
}