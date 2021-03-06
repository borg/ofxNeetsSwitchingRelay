// =============================================================================
//
// ofxNeetsSwitchingRelay.h
// NeetsSwitchingRelay
//
// Created by Andreas Borg on 9/21/16
//
// Copyright (c) 2015-2016 Andreas Borg <http://crea.tion.to>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// =============================================================================


//http://www.neets.dk/products/switching-relays/14

#ifndef _ofxNeetsSwitchingRelay
#define _ofxNeetsSwitchingRelay

#include "ofMain.h"
#include "ofxNetwork.h"

class ofxNeetsSwitchingRelay {
	
  public:
	
	ofxNeetsSwitchingRelay();
    ~ofxNeetsSwitchingRelay();
	
	void setup(string ip, int port, int unitId = 1);
	void turnOnSocket(int socketId, float time=0, float delay = 0);
    void turnOffSocket(int socketId, float time=0, float delay = 0);
	void close();
    
    void sendAction(string action, int socketId, float time=0, float delay = 0 );
    
    string hostURL = "http://192.168.254.252";//device default
    int controlPort = 5000;//device default
	int unitId = 1;
    
    ofxTCPClient client;
};

#endif
