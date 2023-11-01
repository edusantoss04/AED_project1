//
// Created by edu on 31-10-2023.
//

#ifndef AED_PROJECT1_CONSULTING_H
#define AED_PROJECT1_CONSULTING_H

#include <list>
#include "Student.h"
#include "DataManip.h"

class Consulting {

private:
    DataManip data_;

public:
    Consulting(DataManip data);

    vector<pair<vector<Lesson *>, pair<string,string>>> consultStudentSchedule(int student_code);     //sera melhor usar map ou retornar logo o print???
    vector<pair<vector<Lesson *>, pair<string, string>>> consultClassSchedule(string class_code);

    list<Student*> consultStudentYear(char year);
    list<Student*> consultStudentUc(string uc_code);
    list<Student*> consultStudentClass(string class_code);

    int consultStudentsEnrolled(int n);
    int consultClassOcupation(string class_code);
};


#endif //AED_PROJECT1_CONSULTING_H