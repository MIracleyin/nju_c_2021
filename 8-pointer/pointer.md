## Variables Revisited
- variables refers to a localtion in memory
  - "&" Address-of Operator
  - printf("%p", &i)
- A varibale behaves as an lvalue(左值 变量所在的存储空间) or a rvalue(右值 取空间内的内容)

## Pointers
- The type of ptr_radius is "point to int"
int *ptr_radius = &radius;
- ptr_radius also a variable

## Pointers and Arrays
- The name of an array is a synonym for the address of its first element.
- numbers[i] == *(numbers + i)
- &numbers[i] == numbers + i
- But an array name is not a variable
  - ~~numbers++~~

