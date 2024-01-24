#ifndef TIME_H
#define TIME_H
// #pragma once

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time();
    Time(int, int, int);
    ~Time();
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour();
    int getMinute();
    int getSecond();
};
#endif /* TIME_H */
