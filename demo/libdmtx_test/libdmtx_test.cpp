#include <iostream>
#include "funset.hpp"

int main(int argc, char* argv[])
{
	int ret = test_data_matrix_decode();

	if (ret == 0) fprintf(stderr, "test success\n");
	else fprintf(stderr, "test fail: %d\n", ret);

	return 0;
}

