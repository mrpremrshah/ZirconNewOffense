#include <LineAvoidance.h>
#include <Arduino.h>
#include <zirconLib.h>
#include <math.h>
#include <algorithm>
#include<tuple>
#include<iostream>
// #include <cmath>



LineAvoidance::LineAvoidance () {

}

movement movement1;

void LineAvoidance::findingLine() {

 if (readLine(1) > white_line || readLine(2) > white_line || readLine(3) > white_line) {
    if (readLine(2) > white_line && readLine(3) > white_line) {
        movement1.movementfunc(0);
    }
    // assuming 1 is right sensor
    else if (readLine(2) > white_line) {
        movement1.movementfunc(270);
    }
    else if (readLine(3) > white_line) {
        movement1.movementfunc(90);
    }
    else if (readLine(1) > white_line) {
        movement1.movementfunc(180);
    }

}
}