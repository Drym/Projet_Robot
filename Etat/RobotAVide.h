//
// Created by user on 03/11/15.
//

#ifndef PROJETROBOT_ROBOTAVIDE_H
#define PROJETROBOT_ROBOTAVIDE_H

#include <iostream>
#include "RobotEnRoute.h"

class RobotAVide : public RobotEnRoute{

private:
    static RobotAVide instance;

protected:
    RobotAVide():RobotEnRoute(){};
    virtual ~RobotAVide() = default;

public:
    virtual EtatRobot& rencontrerPlot();
    static RobotAVide& getInstance();

};


#endif //PROJETROBOT_ROBOTAVIDE_H
