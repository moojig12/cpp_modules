#include "Serializer.hpp"

int	main() {
	Data	*data = new Data;
	data->str = "Hello, World!";
	data->num = 42;

	std::cout << "Original Data:" << std::endl;
	std::cout << "String: " << data->str << std::endl;
	std::cout << "Number: " << data->num << std::endl;

	uintptr_t serializedData = Serializer::serialize(data);
	std::cout << "Serialized Data: " << serializedData << std::endl;

	Data *deserializedData = Serializer::deserialize(serializedData);
	std::cout << "Deserialized Data:" << std::endl;
	std::cout << "String: " << deserializedData->str << std::endl;
	std::cout << "Number: " << deserializedData->num << std::endl;

	delete data;
	return 0;
}