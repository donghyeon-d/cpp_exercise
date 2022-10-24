#include <stdio.h>

int g_var = 1;
int	f(void) {return 2;}

namespace Foo {
	int g_var = 3;
	int f(void) {return 4;}
}

namespace Bar {
	int g_var = 5;
	int f(void) {return 6;}
}

namespace Muf = Bar;

int main(void)
{
	char Foo;

	Foo = 'c';
	printf("%d %c\n", g_var, Foo);

	printf("Foo %d, %d\n", Foo::g_var, Foo::f());

	printf("Bar %d, %d\n", Bar::g_var, Bar::f());
	printf("Muf %d, %d\n", Muf::g_var, Muf::f());
	printf("%d %c\n", g_var, Foo);
}