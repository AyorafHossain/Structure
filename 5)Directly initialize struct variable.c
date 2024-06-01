#include<stdio.h>
struct person//global structure
{
    int age;
    float salary;
};
int main()
{
    //Directly initialize Struct variable
    struct person person1={25,33333.333};
    struct person person2,person3;//local variable
    //Element wise assigment

    person2.age=26;
    person2.salary=50000;
    person3=person2;

    printf("Person1:\n");
    printf("Age:%d\n",person1.age);
    printf("Salary:%f\n",person1.salary);


    printf("\nPerson2:\n");
    printf("Age:%d\n",person2.age);
    printf("Salary:%f\n",person2.salary);



    printf("\nPerson3:\n");
    printf("Age:%d\n",person3.age);
    printf("Salary:%f\n",person3.salary);
    return 0;
}
