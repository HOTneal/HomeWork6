class Fractions
{
public:
	Fractions();
	Fractions(int, int);
	Fractions(const Fractions&);

	~Fractions() {}

	void SetFraction();
	void GetFraction() { std::cout << numerator << '/' << denominator << std::endl; }

	Fractions operator+(const Fractions&);
	Fractions operator-(const Fractions&);
	Fractions operator*(const Fractions&);
	bool operator==(const Fractions&);

private:
	int numerator;
	int denominator;
};
