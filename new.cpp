#include <iostream>
#include <vector>

typedef struct Color {
	int x;
	int y;
	int z;
	char * color_schedule[3] {
	"red",
	"green",
	"blue"
	};

} Color;

Color return_color(void);

int main(int argc, char ** argv) {

	Color edit_the_variables_from_dereferencing_or_dot_notation[12];

	edit_the_variables_from_dereferencing_or_dot_notation[0].x = 13;
	edit_the_variables_from_dereferencing_or_dot_notation[0].y = 1;
	edit_the_variables_from_dereferencing_or_dot_notation[0].z = 1993;
	edit_the_variables_from_dereferencing_or_dot_notation[0].color_schedule[0] = "blue";
	edit_the_variables_from_dereferencing_or_dot_notation[0].color_schedule[1] = "green";
	edit_the_variables_from_dereferencing_or_dot_notation[0].color_schedule[2] = "red";

	std::cout << edit_the_variables_from_dereferencing_or_dot_notation[0].color_schedule[2] << edit_the_variables_from_dereferencing_or_dot_notation[0].color_schedule[1] << edit_the_variables_from_dereferencing_or_dot_notation[0].color_schedule[0] << std::endl;

	std::cout << "Charles Truscott Watters was born on the " << edit_the_variables_from_dereferencing_or_dot_notation[0].x << "/" << edit_the_variables_from_dereferencing_or_dot_notation[0].y << "/" << edit_the_variables_from_dereferencing_or_dot_notation[0].z << std::endl;


	return 0;
}