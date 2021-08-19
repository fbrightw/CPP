#include <iostream>

struct Data {};

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data		data;
	Data		*data_ptr;
	uintptr_t	uinptr;

	uinptr = serialize(&data);
	std::cout << "Original data ptr: " << &data << std::endl << "Uintptr: " << uinptr << std::endl;

	data_ptr = deserialize(uinptr);
	std::cout << "New data ptr: " << data_ptr << std::endl;
}