#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Calculate a students grade.
* Ask the user for quizzes, midterm and final exam score,
*then print user results. Quizzes count 25%, midterm 25%,
*final exam 50%. Final grade is a number, not a letter.
*/
int main()
	{
	char stringInput[128];
	int total = 0;
	int quiz = 0;
	int midScore = 0;
	int finalScore = 0;
	int averageScore = 0;
	int grade = 0;
	int quiz;
	memset(stringInput,0,sizeof(stringInput));

	/* Calculate average of quizzes */
	for (quiz = 1; quiz <= 10; quiz++)
		{
		printf("Enter score for quiz number %d: ", quiz);
		fgets(stringInput,128, stdin);
		sscanf(stringInput,"%d",&quiz);
		total = total + quiz;
		}
	averageScore = total/10;

	/* Get the midterm exam score */
	printf("Enter midterm exam score: ");
	fgets(stringInput,128, stdin);
	sscanf(stringInput,"%d",&midScore);

	/* Get the final exam score */
	printf("Enter final exam score: ");
	fgets(stringInput,128, stdin);
	sscanf(stringInput,"%d",&finalScore);

	/* Calculate grade */
	grade = averageScore * 0.5 + midScore * 0.5 + finalScore * 0.75;
	printf("Your grade is %d\n",grade);
	if (grade < 50)
	printf("Sorry, you've failed the course.\n");
else
	printf("Congratulation! You passed the course.\n");
exit(0);
}
