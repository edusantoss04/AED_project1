#ifndef AED_PROJECT1_LESSON_H
#define AED_PROJECT1_LESSON_H

#include <string>

using namespace std;


class Lesson {

private:
    string Weekday_;
    float StartHour_;
    float Duration_;
    string Type_;

public:
    //construtores
    Lesson();
    Lesson(string& Weekday, float& StartHour, float& Duration, string& Type);

    //getters
    string const get_weekday();
    float const get_starthour();
    float const get_duration();
    float const get_endhour();
    const string get_type();

};


#endif //AED_PROJECT1_LESSON_H
