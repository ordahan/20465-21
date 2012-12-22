/*
 * get_name.c
 *
 *  Created on: Nov 12, 2012
 *      Author: Or Dahan 201644929
 */
#include <stdio.h>

#define NUM_OF_NAMES 25

const char* get_name()
{
	const char* lstNames[NUM_OF_NAMES] = {"abc",
										  "hello",
										  "moshe",
										  "yosi",
										  "atlanta",
										  "obama",
										  "joker",
										  "avi",
										  "aaa",
										  "bbb",
										  "xyz",
										  "123",
										  "alpha",
										  "bravo",
										  "jdasd",
										  "32131",
										  "ydasd",
										  "111111",
										  "222222",
										  "333333",
										  "444444",
										  "112358",
										  "2+2=5",
										  "3.14159",
										  "2.7218"};
	static unsigned int i = 0;

	/* Check wrap-around */
	if (i >= NUM_OF_NAMES)
	{
		i = 0;
	}

	return lstNames[i++];
}

int main(int argc, char** argv)
{
	int i = 0;
	for (i = 0; i < NUM_OF_NAMES * 3; i++)
		printf("Name: %s\n", get_name());

	return 0;
}
