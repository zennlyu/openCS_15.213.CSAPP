#include <stdio.h>
#include <limits.h>

typedef unsigned char *byte_pointer;

void show_binaries(int n);
void show_bytes(byte_pointer start, size_t len);
void show_int(int x);
void show_float(float x);
void show_pointer(void *x);
void test_show_bytes(int val);

int main(int argc, char const *argv[]) {
	int a 			= 15213;
	// int lval 		= 0xFEDCBA98 	<< 32;
	// int aval 		= 0xFEDCBA98 	>> 36;
	// unsigned uval 	= 0xFEDCBA98u 	>> 40;
	
	printf("%ld, %ld, %ld\n", ULONG_MAX, LONG_MAX, LONG_MIN);
	// printf("%x\n", lval);
	// show_bytes((byte_pointer) &a, sizeof(int));
	// test_show_bytes(a);
    // const char *s = "abcdef";
    // show_bytes((byte_pointer) s, strlen(s));
	return 0;
}

void test_show_bytes(int val) {
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

void show_binaries(int x) {
    for (int i = sizeof(x)*4-1; i>=0; i--) {
    	if (x & (1 << i))	printf("1");
    	else 				printf("0");
    }
    printf("\n");
}

void show_bytes(byte_pointer start, size_t len){
	size_t i;
	for (i = 0; i < len; i++)
		printf("%p\t0x%.2x\n",start+i, start[i]);
	printf("\n");
}

void show_int(int x) {	show_bytes((byte_pointer) &x, sizeof(int));	}

void show_float(float x) {	show_bytes((byte_pointer) &x, sizeof(float));	}

void show_pointer(void *x) {	show_bytes((byte_pointer) &x, sizeof(void *));	}
