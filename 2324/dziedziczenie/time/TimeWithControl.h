#ifndef TIMEWITHCONTROL_H
#define TIMEWITHCONTROL_H
#include "Time.h"
// #pragma once

class TimeWithControl : public Time
{
private:
    /* data */
public:
    TimeWithControl(/* args */);
    TimeWithControl(int, int, int);
    ~TimeWithControl();
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
};
#endif /* TIMEWITHCONTROL_H */
