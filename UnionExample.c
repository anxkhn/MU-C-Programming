#include <stdio.h>
#include <string.h>

// declaring structure
struct struct_example
{
	int integer;
	float decimal;
	char name[20];
};

// declaring union
union union_example
{
	int integer;
	float decimal;
	char name[20];
};

void main()
{

	// creating variable for structure
	// and initializing values difference
	// six
	struct struct_example s={69,420,"anas banana"};

	// creating variable for union
	// and initializing values
	union union_example u={69,420,"anas banana"};



	// size of

	//printf("\nsizeof structure : %d\n", sizeof(s));
	//printf("sizeof union : %d\n", sizeof(u));

	//

	printf("\nstructure data:\n integer: %d\n"
				" decimal: %f\n name: %s\n",
				s.integer, s.decimal, s.name);
	printf("\nunion data:\n integer: %d\n"
				" decimal: %f\n name: %s\n",
				u.integer, u.decimal, u.name);
	// difference five
	printf("\nAccessing all members at a time: \n");
	s.integer = 7;
	s.decimal = 9;
	strcpy(s.name, "Tim Cook");

	printf("\nstructure data:\n integer: %d\n "
				"decimal: %.2f\n name: %s\n",
			s.integer, s.decimal, s.name);

	u.integer = 7;
	u.decimal = 9;
	strcpy(u.name, "Tim Cook");

	printf("\nunion data:\n integer: %d\n "
				"decimal: %.2f\n name: %s\n",
			u.integer, u.decimal, u.name);

	printf("\nAccessing one member at time: \n");

	printf("\nstructure data:");
	s.integer = 360;
	printf("\ninteger: %d", s.integer);

	float a = 0.1;
	float b = 0.2;
	s.decimal = a+b;
	printf("\ndecimal: %.100f", s.decimal);

	strcpy(s.name, "Let Us C");
	printf("\nname: %s\n", s.name);

	printf("\nunion data:");
	u.integer = 360;
	printf("\ninteger: %d", u.integer);

	u.decimal = 3.14;
	printf("\ndecimal: %f", u.decimal);

	strcpy(u.name, "Let Us C");
	printf("\nname: %s\n", u.name);


	//difference four
	printf("\nAltering a member value:\n");
	s.integer = 1218;
	printf("\nstructure data:\n integer: %d\n "
				"decimal: %.2f\n name: %s\n",
				s.integer, s.decimal, s.name);

	u.integer = 1218;
	printf("\nunion data:\n integer: %d\n"
		" decimal: %.2f\n name: %s\n",
			u.integer, u.decimal, u.name);
}
