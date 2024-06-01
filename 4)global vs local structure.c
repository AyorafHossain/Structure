#include<stdio.h>
    struct person//global structure
    {
        int age;
        float salary;
    } ;

int main()
{
  struct person person1,person2;
  person1.age=22;
  person1.salary=30003.33;
  person2.age=23;
  person2.salary=23333;
  printf("Age of person1=%d\n",person1.age);
  printf("salary of person1=%f\n",person1.salary);
  printf("Age of person2=%d\n",person2.age);
  printf("salary of person2=%f\n",person2.salary);
  return 0;
}

