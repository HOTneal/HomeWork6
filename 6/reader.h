#include <string>

class reader
{
private:
	std::string fio;
	int age;
	book current_book;
public:
	void set_fio(const char * new_fio);
	void set_age(const int new_age);
	void set_current_book(const book new_current_book);
	void get_info();
};