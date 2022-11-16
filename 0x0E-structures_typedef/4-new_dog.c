#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create new dog object
* @name: 1st member
* @age: 2nd member
* @owner: 3rd member
*Return: pointer to structure, Null if fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int name_ln = 0, owner_ln = 0, c;
dog_t *dogs;
while (name[name_ln] != '\0')
name_ln++;
while (owner[owner_ln] != '\0')
owner_ln++;
dogs = malloc(sizeof(dog_t));
if (dogs == NULL)
{
free(dogs);
return (NULL);
}
dogs->name = malloc(name_ln * sizeof(dogs->name));
if (dogs->name == NULL)
{
free(dogs->name);
free(dogs);
return (NULL);
}
for (c = 0; c <= name_ln; c++)
dogs->name[c] = name[c];
dogs->age = age;
dogs->owner = malloc(owner_ln * sizeof(dogs->owner));
if (dogs->owner == NULL)
{
free(dogs->owner);
free(dogs->name);
free(dogs);
return (NULL);
}
for (c = 0; c <= owner_ln; c++)
dogs->owner[c] = owner[c];
return (dogs);
}
