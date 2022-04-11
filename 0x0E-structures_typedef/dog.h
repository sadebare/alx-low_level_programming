#ifndef GUARDED
#define GUARDED
/**
 * struct dog - describes a dog
 * @name: first member
 * @age: float age
 * @owner: in character
 *
 * Description : Stuct of Dog that has its name, age and owner
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
