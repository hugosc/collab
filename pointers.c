#include <stdio.h>

// ignore for now
void addtoarray(int array[], int length, int amount);

int main(void) {
    // values of vars
    int number1 = 5;
    int number2 = 10;

    // each of these variables has a value and an address
    // variable name      address             value
    //  number1            25                   5
    //  number2            30                   10
    //  pointer1           35                   25

    int *pointer1;
    pointer1 = &number1;

    // * denotes a pointer to a memory address
    // & denotes the address of a variable

    // we can use %p placeholder to show address, which requires matching &
    // because we want to target the addy
    printf("the address of number1 is %p\n", &number1);
    printf("the value of number1 is %d\n", number1);

    // since pointer1 is a pointer we dont need to do * or & when using %p
    printf("the address that pointer1 contains is %p\n", pointer1);
    printf("the value that pointer1 is pointing to is %d\n", *pointer1);
    // once we have a pointer, printing its raw value doesn't do much, so
    // instead we dereference the pointer, as in tell the compiler to follow it
    // through to the value it points to
    // we don't use &, (give the address of the pointer), so we use *

    // (5)         (5)
    *pointer1 = *pointer1 + 5;
    // number1 = number1 + 5

    // this takes whatever pointer points to, then assign it to that value + 5
    printf("the value of number1 is %d\n", number1);

    // in the case of arrays, the array itself is more or less a pointer to the
    // first element

    // var:     a[0]  a[1]   a[2]  a[3]
    // address:   51    52     53    54
    // value:     2     5      8     3
    int a[] = {2, 5, 8, 3};

    // a itself actually contains the address of a[0]
    // when we say something like a[2] it essentially means:
    // 'start at address 51 aka a[0] then move 2 over' this means we can treat
    // 'a' like an address, and write something like
    int *pointer2 = a;
    // (because a is already an address, we dont need &)
    // which ends up looking something like this internally:
    // variable     address    value
    //  a            42          51
    //  pointer2     49          51

    // therefore     (deref pointer2)
    printf("the address pointed to by pointer2 is %d\n", *pointer2);
    // should print 1, which is what a contains
    // the same way derefing the address of a gives us the first value too
    printf("the address pointed to by array a is %d\n", *a);

    // we can even see they return the same address
    printf("the address stored in array a is %p\n", a);
    printf("the address stored in pointer2 is %p\n", pointer2);

    // in fact we can go so far as to write something like
    printf("the address stored at i[1] of array a is %d\n", pointer2[1]);

    // something like
    int *pointer3 = &a[2];
    // requires the & because at that point, a[2] is 'get the value at [2]' not
    // 'address of [2]' so we need to convert it to an address first

    // in a similar sense to array notation then, there is pointer notation
    printf("the value at p[2] is %d\n", *(pointer3 + 1));
    // meaning 'go to whatever is stored at (the address pointer3 points to () +
    // 1 spots over)', which should in our case be 3

    // this 'pointer arithmetic' also works on arrays
    printf("the value at a[2] is %d\n", *(a + 1));
    // however, at the end of the day 'a' is a pointer to the first element in
    // the array, and that is it's function first, not just being a pointer, so
    // it cannot be randomly assigned other values the way normal pointers can
    // we can't just write a = pointer2 and change the address it points to

    // however, the notation is still useful sometimes, such as in this case:
    int a2[] = {2, 2, 2, 2, 1, 1, 1, 1};
    addtoarray(a2 + 4, 4, 1);
    for (int i = 0; i < 8; i++)
        printf("value at a2[%d] is %d\n", i, a2[i]);
    // in this case, we add one to elements in the array, but with the notation
    // we can start halfway through (4 steps over), making sure to adjust to
    // only iterate over the other 4 remaining indices
}

// this takes in an array[] (could have also done *array), a length, and then an
// amount, adding said amount to each element until it reaches the end of the
// length
void addtoarray(int array[], int arraylength, int amount) {
    for (int i = 0; i < arraylength; i++)
        array[i] = array[i] + amount;
}
