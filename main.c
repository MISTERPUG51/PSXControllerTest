#include "constants.h"


Image controllerimg;



int x = 198;
int y = 0;
int speed = 4;


int main() {
	initialize();
	FntPrint("Playstation Controller Tester 1.0 by    MISTERPUG51                             https://github.com/MISTERPUG51/PSXContr ollerTest");
	clearDisplay();
	draw();
	display();
	WaitOneSecond();
	WaitOneSecond();
	WaitOneSecond();
	WaitOneSecond();
	WaitOneSecond();
	
	
	while(1) {
		FntPrint("Current button: ");
		update();
		clearDisplay();
		draw();
		display();
	}
}

void WaitOneSecond() {
	int i;
	for (i=0; i<60; i++) VSync(0);
}

void initialize() {
	initializeScreen();
	initializeDebugFont();
	initializePad();
	setBackgroundColor(createColor(0, 0, 0));
	controllerimg = createImage(img_controller);
	controllerimg = moveImage(controllerimg, x, y);
}

void update() {
	padUpdate();
	if(padCheck(Pad1Up)) {
		FntPrint("Up");
	} else
	if(padCheck(Pad1Down)) {
		FntPrint("Down");
	} else
	if(padCheck(Pad1Left)) {
		FntPrint("Left");
	} else
	if(padCheck(Pad1Right)) {
		FntPrint("Right");
	} else
	if(padCheck(Pad1Triangle)) {
		FntPrint("Triangle");
	} else
	if(padCheck(Pad1Cross)) {
		FntPrint("X");
	} else 
	if(padCheck(Pad1Square)) {
		FntPrint("Square");
	} else
	if(padCheck(Pad1Circle)) {
		FntPrint("Circle");
	} else
	if(padCheck(Pad1L1)) {
		FntPrint("L1");
	} else
	if(padCheck(Pad1L2)) {
		FntPrint("L2");
	} else
	if(padCheck(Pad1R1)) {
		FntPrint("R1");
	} else
	if(padCheck(Pad1R2)) {
		FntPrint("R2");
	} else
	if(padCheck(Pad1Start)) {
		FntPrint("Start");
	} else
	if(padCheck(Pad1Select)) {
		FntPrint("Select");
	}
	
}

void draw() {
	drawImage(controllerimg);

}
