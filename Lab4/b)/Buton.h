#include <string>
class  Buton
{
private:
	std::string text;
public:
	Buton();
	Buton(const std::string text);
	Buton(const Buton& buton);
	std::string getText();
	void setText(const std::string text);
};