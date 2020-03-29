#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    //return string();
    //return "a";
    long hour = seconds / 3600;
    long minute = seconds % 3600 / 60;
    long second = seconds % 3600 % 60;
    std::string m_hour ="";
    std::string m_minute ="";
    std::string m_second ="";
    if(hour < 10)
        m_hour = "0" + std::to_string(hour);
    else
        m_hour = std::to_string(hour);

    if(minute < 10)
       m_minute = "0" + std::to_string(minute);
    else
        m_minute = std::to_string(minute);

    if(second < 10)
        m_second = "0" + std::to_string(second);
    else
        m_second = std::to_string(second);
    return (m_hour + ":" + m_minute +":" +m_second);
}