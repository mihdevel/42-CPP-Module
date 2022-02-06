#include <iostream>

struct Data
{
	int         int_val;
	char        char_val;
	std::string str_val;
	float       float_val;
};

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

void data_init(Data *Data)
{
	Data->char_val = 'h';
	Data->float_val = 5.1;
	Data->int_val = 51;
	Data->str_val = "test serialize";
}

int main()
{
	Data *Data_prev_cast = new Data;
	Data *Data_after_cast;
	uintptr_t data_ser;

	data_init(Data_prev_cast);
	data_ser = serialize(Data_prev_cast);

	std::cout << "uintptr_t return after firs data_ser: " << data_ser << std::endl;
	std::cout << "memory: " << Data_prev_cast << " char: " << Data_prev_cast->char_val << " int: " << Data_prev_cast->int_val << " float: " << Data_prev_cast->float_val << " string: " << Data_prev_cast->str_val << std::endl;

	Data_after_cast = deserialize(data_ser);
	std::cout << "memory: " << Data_after_cast << " char: " << Data_after_cast->char_val << " int: " << Data_after_cast->int_val << " float: " << Data_after_cast->float_val << " string: " << Data_after_cast->str_val << std::endl;

	delete Data_after_cast;
	return(0);
}