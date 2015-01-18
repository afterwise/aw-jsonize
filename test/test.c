
#include "aw-jsonize.h"
#include <stdio.h>

#define DATA(x) \
	x##TOK("{") \
		x##KEY("msg") x##LIT("hello world") x##TOK(",") \
		x##KEY("data") x##TOK("{") \
			x##KEY("foo") x##STR(foo) x##TOK(",") \
			x##KEY("bar") x##INT(bar) x##TOK(",") \
			x##KEY("baz") x##FLOAT(baz) x##TOK(",") \
			x##KEY("quux") x##BOOL(quux) \
		x##TOK("}") \
	x##TOK("}")

int main(int argc, char *argv[]) {
	const char *foo = "i am foo";
	int bar = 12;
	float baz = 123.4f;
	int quux = 1;

	(void) argc;
	(void) argv;

	printf(JSONIZE(DATA));
	printf("\n");

	return 0;
}

