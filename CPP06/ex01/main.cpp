#include "Serializer.hpp"

int main()
{
	Data		test = {42};

	uintptr_t	ser = Serializer::serialize(&test);
	std::cout << "Serialized adress : " << ser << std::endl;

	Data*		test2 = Serializer::deserialize(ser);
	std::cout << "Deserialised value : " << test2->i << std::endl;
	return (0);
}