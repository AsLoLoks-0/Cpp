#include "TimeWithControl.h"

TimeWithControl::TimeWithControl(int hour, int minute, int second)
{
    TimeWithControl::setHour(hour);
    TimeWithControl::setMinute(minute);
    TimeWithControl::setSecond(second);
}

TimeWithControl::TimeWithControl()
{
    Time::setHour(0);
    Time::setMinute(0);
    Time::setSecond(0);
}

TimeWithControl::~TimeWithControl()
{
}

void TimeWithControl::setHour(int hour){
    if(hour >= 0 && hour <= 24)
        Time::setHour(hour);
    else
        Time::setHour(0);
}

void TimeWithControl::setMinute(int minute){
    if(minute >= 0 && minute <= 60)
        Time::setMinute(minute);
    else
        Time::setMinute(0);
}

void TimeWithControl::setSecond(int second){
    if(second >= 0 && second <= 60)
        Time::setSecond(second);
    else
        Time::setSecond(0);
}
