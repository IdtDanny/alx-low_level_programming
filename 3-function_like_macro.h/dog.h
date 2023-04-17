#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog infos: name, age and owner
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*
 * initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/*
 * Prints the structure content
 */
void print_dog(struct dog *d);
#endif
