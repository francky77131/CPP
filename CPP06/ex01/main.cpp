#include "Serialize.hpp"

int main()
{
	Data	type = {42};
	Serialize	a;


	uintptr_t	serialize = a.serialize(&type);
	std::cout << "Serialized adress : " << serialize << std::endl;

	Data *deserialize = a.deserialize(serialize);
	std::cout << "DeSerialized adress : " << deserialize->i << std::endl;

	serialize = a.serialize(&type);
	std::cout << "Serialized adress : " << serialize << std::endl;

	return 0;
}