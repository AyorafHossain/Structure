#include <stdio.h>

struct person {
    int age;
    float salary;
    char name[50];
};

// Function prototype declaration
void display(struct person p);

int main() {
    // Directly initialize Struct variable
    struct person person1 = {25, 33333.333, "John Doe"};
    display(person1);

    struct person person2; // Local variable

    // Element wise assignment
    person2.age = 26;
    person2.salary = 50000;
    // Assuming name assignment for person2
    strcpy(person2.name, "Jane Smith");
    display(person2);

    // Copying person2 to person3 (assuming it's declared somewhere)
    struct person person3 = person2;
    display(person3);

    return 0;
}

// Function definition for display
void display(struct person p) {
    printf("\nName: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Salary: %f\n", p.salary);
}
