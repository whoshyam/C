#include<stdio.h>

void birthday(char name[, int age]){ // primitives ,these are what a fn expects
    printf("\nHappy birthday %s", name);
    printf("\nyou are %d years old", age);
}

//if wanna print these again and again then use function
int main(){
    char name[] = "bro";
    int age = 21;

    birthday(name, age); // birthday(arguments);
    //arguments are what we are sending 
    // jisko call krna h un variables ko mention krna hoga
    //keep the correct order of sequence in arguments and primitives 
    
    
    //use of argument and primitives so that main and birthday function can communicate
    return 0;
}