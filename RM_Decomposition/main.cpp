
#include "main.h"

int main()
{
	Encoder encoder = Encoder::Encoder();

	// change value to false for test2
	bool test1 = true;
	unsigned int trueNum = 0;
	unsigned int falseNum = 0;

	for (auto i = 0; i < 10000000; ++i)
	{
		if (test1 == true)
			encoder.test1();
		else
			encoder.test2();	
	}

	return 0;
}