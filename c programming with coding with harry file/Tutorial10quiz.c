#include <stdio.h>

int main()

{
    int maths,science;
    printf("Enter the your marks:");
    scanf("%d %d",&maths,&science);
    
    printf("you have entered %d,%d as your marks\n",maths,science);

    if (maths>=45)
    {
       if (science>=45)
        {
            printf("you have passed in both exams your gift");
        }

    }

    else if (maths>=35)
    {
        printf("you have passed in maths your gift");
    }
    
    else if (science>=25)
    {
        printf("you have passed in science your gift");
    }
    
    else
    {
        printf("you have fail in both exams maths and science");
    }
    
    

    return 0;
}