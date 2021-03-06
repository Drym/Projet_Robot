#ifndef PROJETROBOT_ROBOTAVIDE_H
#define PROJETROBOT_ROBOTAVIDE_H

#include <iostream>
#include "RobotEnRoute.h"

class RobotAVide : public RobotEnRoute{

private:
    static RobotAVide instance;

protected:
    RobotAVide() = default;
    virtual ~RobotAVide() = default;

public:
    virtual EtatRobot* rencontrerPlot() const;
    virtual EtatRobot* avancer() const;
    virtual EtatRobot* tourner() const;
    static RobotAVide* getInstance();

};


#endif //PROJETROBOT_ROBOTAVIDE_H
