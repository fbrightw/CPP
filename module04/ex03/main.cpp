#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice()); // src->materia[0] = Ice;
	src->learnMateria(new Cure()); // src->materia[1] = Cure;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp); //me->materias[0] = Ice;
	tmp = src->createMateria("cure");
	me->equip(tmp); //me->materias[1] = Cure;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob); //prints ice's msg
	me->use(1, *bob); //prints cure's msg
	delete bob;
	delete me;
	delete src;
	return 0;
}
