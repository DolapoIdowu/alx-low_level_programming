#ifndef DOG_H
#define DOG_H
/**
 * struct dog- structure for a dog.
 * @name: name of Dog.
 * @age: dog age.
 * @owner: dog owner.
 * Description: This struct gives us information of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*#ifndef DOG_H*/
