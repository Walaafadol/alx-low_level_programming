#ifndef dog_H
#define dog_H
/**
* struct dog - adog struct
*@name:parameter
*@age:parameter
*@owner:owner dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
