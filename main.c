#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Mathematics, Science, English;
  float total_marks,average;
  char Grade, Pass, Fail;


  printf("Enter your Mathematics_marks :");
  scanf("%d",&Mathematics);

  printf("Enter your Science_marks :");
  scanf("%d",&Science);

  printf("Enter your English_marks :");
  scanf("%d",&English);

  total_marks = Mathematics + Science + English;
  printf("total marks = %f\n",total_marks);

  average = total_marks/3.0;
  printf("average = %f\n",average);

  if (average >= 80)
  {
     printf("Grade = A\n",Grade);
  }

  else if ( 79 >= average >= 70)
  {
      printf("Grade = B\n",Grade);

  }


  else if ( 69 >= average >= 60)
  {
       printf("Grade = C\n",Grade);
  }


  else if ( 59 >= average >= 50)
  {
      printf("Grade = D\n",Grade);
  }

  else if ( 50 >= average )
  {
      printf("Grade =F\n",Grade);

  }

  if (Mathematics >= 40 || Science >= 40 || English >= 40)
  {
      printf("Result:Pass\n");

  }

  else
  {
      printf("Result:Fail\n");
  }









    return 0;
}
