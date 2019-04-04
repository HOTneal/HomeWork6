#include <string>

class book
{
private:
	std::string name;
	int year;

public:
	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_name();
};