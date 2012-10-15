#include <map>
#include <sstream>

#include "Freq.h"

Freq::Freq() : runs(0)
{

}

bool Freq::run(int target)
{
	runs++;

	if(runs >= target)
	{
		runs = 0;
		return true;
	}

	return false;
}

bool __defineBlockFrequency__(int frequency, const char *file, int line)
{
	static std::map<std::string, Freq> freqs;

	std::stringstream stream(file);
	stream << " " << line;

	return freqs[stream.str()].run(frequency);
}