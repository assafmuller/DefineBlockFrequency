#ifndef FREQ_H
#define FREQ_H

class Freq {
private:
	int runs;

public:
	Freq();
	bool run(int target);
};

#define defineBlockFrequency(X) __defineBlockFrequency__((X), __FILE__, __LINE__)

bool __defineBlockFrequency__(int frequency, const char *file, int line);

#endif