#include <stdio.h>
typedef struct Student{
    double grade;
    unsigned int courses_taken;
    char name[7];
    unsigned char age;
}Student;

int main(){
    FILE* f = fopen("binary_structs", "wb");
    
    Student students[5];
    students[0] = (Student) {2.3, 100, "Peter", 25};
    students[1] = (Student) {2.3, 100, "Ivan", 25};
    students[2] = (Student) {2.3, 100, "Georgi", 25};
    students[3] = (Student) {2.3, 100, "Eve", 25};
    students[4] = (Student) {2.3, 100, "Steve", 25};
    
    fwrite(students, sizeof(Student ), 5, f);
    fclose(f);
    
    return 0;
}