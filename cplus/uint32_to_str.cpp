#include <cstdint>

// Taken from
// http://www.experchange.com/int-to-string-conversion-tests-faster-t4398221

void uint32_to_str(uint32_t i, char* c)
{
	if (i < 10)
	{
		c[0] = '0' + (i % 10);
		c[1] = '\0';
	}
	else if (i < 100)
	{
		c[0] = '0' + (i / 10);
		c[1] = '0' + (i % 10);
		c[2] = '\0';
	}
	else if (i < 1000)
	{
		c[0] = '0' + (i / 100);
		c[1] = '0' + (i % 100) / 10;
		c[2] = '0' + (i % 10);
		c[3] = '\0';
	}
	else if (i < 10000)
	{
		c[0] = '0' + (i / 1000);
		c[1] = '0' + (i % 1000) / 100;
		c[2] = '0' + (i % 100) / 10;
		c[3] = '0' + (i % 10);
		c[4] = '\0';
	}
	else if (i < 100000)
	{
		c[0] = '0' + (i / 10000);
		c[1] = '0' + (i % 10000) / 1000;
		c[2] = '0' + (i % 1000) / 100;
		c[3] = '0' + (i % 100) / 10;
		c[4] = '0' + (i % 10);
		c[5] = '\0';
	}
	else if (i < 1000000)
	{
		c[0] = '0' + (i / 100000);
		c[1] = '0' + (i % 100000) / 10000;
		c[2] = '0' + (i % 10000) / 1000;
		c[3] = '0' + (i % 1000) / 100;
		c[4] = '0' + (i % 100) / 10;
		c[5] = '0' + (i % 10);
		c[6] = '\0';
	}
	else if (i < 10000000)
	{
		c[0] = '0' + (i / 1000000);
		c[1] = '0' + (i % 1000000) / 100000;
		c[2] = '0' + (i % 100000) / 10000;
		c[3] = '0' + (i % 10000) / 1000;
		c[4] = '0' + (i % 1000) / 100;
		c[5] = '0' + (i % 100) / 10;
		c[6] = '0' + (i % 10);
		c[7] = '\0';
	}
	else if (i < 100000000)
	{
		c[0] = '0' + (i / 10000000);
		c[1] = '0' + (i % 10000000) / 1000000;
		c[2] = '0' + (i % 1000000) / 100000;
		c[3] = '0' + (i % 100000) / 10000;
		c[4] = '0' + (i % 10000) / 1000;
		c[5] = '0' + (i % 1000) / 100;
		c[6] = '0' + (i % 100) / 10;
		c[7] = '0' + (i % 10);
		c[8] = '\0';
	}
	else if (i < 1000000000)
	{
		c[0] = '0' + (i / 100000000);
		c[1] = '0' + (i % 100000000) / 10000000;
		c[2] = '0' + (i % 10000000) / 1000000;
		c[3] = '0' + (i % 1000000) / 100000;
		c[4] = '0' + (i % 100000) / 10000;
		c[5] = '0' + (i % 10000) / 1000;
		c[6] = '0' + (i % 1000) / 100;
		c[7] = '0' + (i % 100) / 10;
		c[8] = '0' + (i % 10);
		c[9] = '\0';
	}
	else
	{
		c[0] = '0' + (i / 1000000000);
		c[1] = '0' + (i % 1000000000) / 100000000;
		c[2] = '0' + (i % 100000000) / 10000000;
		c[3] = '0' + (i % 10000000) / 1000000;
		c[4] = '0' + (i % 1000000) / 100000;
		c[5] = '0' + (i % 100000) / 10000;
		c[6] = '0' + (i % 10000) / 1000;
		c[7] = '0' + (i % 1000) / 100;
		c[8] = '0' + (i % 100) / 10;
		c[9] = '0' + (i % 10);
		c[10] = '\0';
	}
}
