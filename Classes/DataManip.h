#ifndef AED_PROJECT1_DATAMANIP_H
#define AED_PROJECT1_DATAMANIP_H

#include "Student.h"
#include "string"
#include "UC_Class.h"
#include "Student.h"

using namespace std;


class DataManip {

private:
    vector<UC_Class*> uc_classes_;
    vector<Student*> students_;

public:
    void read_classes(string filename);
    void read_classes_per_uc(string filename);
    void read_students_classes(string filename);

    vector<UC_Class*> get_uc_classes();
    vector<Student*> get_students();

    void sortStudents_bycode(vector<Student*>);

    Student* found_student(int student_code);

    UC_Class *found_ucclass(UC_Class *ucClass);

};


#endif //AED_PROJECT1_DATAMANIP_H