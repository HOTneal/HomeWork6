#pragma once
#ifdef EGG_EXPORTS
#define EGG_API __declspec(dllexport)
#else
#define EGG_API __declspec(dllimport)
#endif
#include <string>
class egg
{
public:
	int size;
	int weight;
	EGG_API bool breakk(std::string who);
	void say(std::string text);
};