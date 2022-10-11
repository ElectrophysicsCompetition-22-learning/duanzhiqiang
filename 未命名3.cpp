#define PI 3.1415926
main()
{float perimeter,area,radius,volume;
 printf("input radius=:");
 scanf("%f",& radius);
 perimeter=2.0*PI*radius;
 area=PI*radius*radius;
 volume=4/3.0*PI*radius*radius*radius;
 printf("perimeter=%10.4f\n area=%10.4f\n volume=%10.4f\n",perimeter,area,volume);
 } 
