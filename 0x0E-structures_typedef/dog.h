#ifndef _DOG_H_
#define _DOG_H_
/**
 *struct dog -dog
 * @name : char*
 * @age: int
 * @owner: char*
 *Description: define a dog structure
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
