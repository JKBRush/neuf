#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void draw();
    
        ofShader shader;
        ofImage iMac;
        int x_pos;
        int y_pos;
    

		
};
