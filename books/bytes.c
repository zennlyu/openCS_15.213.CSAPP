#include <stdio.h>

/** 
 * 打印程序对象的字节对象。这段代码使用强制类型转换来规避类型系统。
 * 很容易针对其他数据类型的类似函数。
 * **/
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	size_t i;
	for (int i = 0; i < len; i++) {
		printf("%.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}