#include "functions.h"
#include "student.h"
using namespace std;

int main() {
    int students_q = students_quantity();
    int size = students_q;
    student *students_array = array_create(size);
    array_write(students_array, size);
    array_read(students_array, size);
    oldest_search(students_array, size);
    array_delete(students_array);

    return 0;
}
