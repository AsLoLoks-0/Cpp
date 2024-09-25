#include "Time.h"


Time::Time(int hour, int minute, int second)
{
    this -> hour = hour;
    this -> minute = minute;
    this -> second = second;
}

Time::Time()
{
    this -> hour = 0;
    this -> minute = 0;
    this -> second = 0;
}

Time::~Time()
{
}

int Time::getHour(){
    return this -> hour;
}

int Time::getMinute(){
    return this -> minute;
}

int Time::getSecond(){
    return this -> second;
}

void Time::setHour(int hour){
    this -> hour = hour;
}

void Time::setMinute(int minute){
    this -> minute = minute;
}

void Time::setSecond(int second){
    this -> second = second;
}
