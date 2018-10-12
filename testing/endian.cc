#include <cstdio>
int main(int argc, char** argv)
{
	int n=123456;
	unsigned char* bytes=(unsigned char*)(&n);
	printf("%d %d %d %d\n", bytes[0], bytes[1], bytes[2], bytes[3]);
}