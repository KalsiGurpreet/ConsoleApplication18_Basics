#include<stdio.h>
#include<string.h>

int hello(int); // a function declaration

int hello(int time) // a function definition
{
	return (time + 1);
}

int main()
{
	char student_name[10][26]; // array for students name.
	int student_time[10];
	int student_roll_number[10];
	int shoe_size;


	strcpy_s(student_name[0], "Bond");
	student_time[0] = 3;
	student_roll_number[0] = 1;

	shoe_size = hello(2); // invoking a hello function with no arguments.
	printf("student has size %d\n", shoe_size);


	struct DATE
	{
		int year, month, day;
	} appointment;  // declared a structure variable like this is also possible.

	
	struct DATE dateOfBirth;

	dateOfBirth.year = 1988;
	dateOfBirth.month = 10;
	dateOfBirth.day = 8;


	appointment.year = 2025;
	appointment.month = 1;
	appointment.day = 2; // date of appointment at coast tire.


	struct STUDENT    // structure declaration only, has not created any variable.
	{
		char name[26]; // field declaration
		float time;
		int roll_number;
		int recent_chapter;
		int* ptr;
		struct DATE last_visit;  // A structure could be a field inside another structure.
	};                           // a new structure variable is declared as a type DATE.
	                             // STUDENT is a structure tag.
	struct STUDENT stdnt1;       // a structured variable is declared with name stdnt1 and stdnt2.
	struct STUDENT stdnt2;       // only variable stdnt1 and stdnt2 has access to structure STUDENT.

	struct STUDENT stdnt[100];   // Structures can be aggregated inside an array, called an array of structure.
	                             // so if we want to declare an array consisting of STUDENT structures, 
	                             // we do it in this way:

	stdnt1.time = 2; // this expession is called a selector.
	


	stdnt[3].time = 5;
	stdnt[3].recent_chapter = 4;
	stdnt[3].last_visit.year = 2024;


	return 0;

}
