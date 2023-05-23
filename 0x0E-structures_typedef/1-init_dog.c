#include <stdio.h>

/**
 * init_dog - initialize a variable.
 * @d: variable.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the dogs owner.
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;
	struct dog my_dog;

	d->name = name;
	d->age = age;
	d->owner = owner;

	init_dog(&my_dog, "doggy", 3.5, Andy);

	printf("Enter infor for my_dog")
		scanf("%d\n", &my_dog.name)
		scanf("%s\n", &my_dog.age)
		scanf("%f\n", &my_dog.owner);

	return (0);
}
