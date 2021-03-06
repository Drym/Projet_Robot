//
// Created by user on 03/11/15.
//
#include "RobotAVide.h"
#include "RobotAVideFacePlot.h"

using namespace std;

RobotAVide RobotAVide::instance=RobotAVide();

RobotAVide* RobotAVide::getInstance() {
    return &instance;
}

EtatRobot* RobotAVide::rencontrerPlot() const{
    return RobotAVideFacePlot::getInstance();
}

EtatRobot* RobotAVide::avancer() const{
    return RobotAVide::getInstance();
}

EtatRobot* RobotAVide::tourner() const{
    return RobotAVide::getInstance();
}
