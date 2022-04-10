/* variable.
Structure:
The structure is a collection of variables of different data types,
which are referred by a common name.
All the structure elements are stored at contiguous memory locations.
A structure size depends on of all variables in it.The size will sumission of all variable size.

Union:
A union is a special data type available in C that allows to
store different data types in the same memory location.
Union is almost similar to structure but not same.
Union memory size depends on only the highest size variable in it and the size will be
the size of highest variable

Imporatance:
In C program,we saw that a variable and an array can store only any one type of variable.
But in our practical program we might to store different type of variable for one template of data.
For example,a person has different types of data;name,age,height etc.We cannot store these data in an array.
So for this problem,there are structure and union.structure and union can store different types data at a variable like a template.
So for advance programing structure and union plays very important role.

 */


 #include<stdio.h>
 struct person
 {
     char name[20];
     int cell;
     char adrress[20];
 };
 struct result
 {
     int id;
     char department[20];
     char name[20];
     float gpa[8];
     float cgpa;
 };
 union same
 {
     int x;
     int y;
 };
 int main()
 {
     int i;
     printf("Structure:");
     /* Taking data of 3 person together by array in structure  */
     struct person per[3]={{"Asadul Islam",01777777777,"Savar"}
                          ,{"Oli Ahad",01111111111,"Dhaka"}
                          ,{"Hamza",01711111111,"Chittagong"}};
      for(i=0;i<3;i++)
      {
          printf("\nPerson[%d]:\nName=%s\nCell=%d\nAdrress=%s\n"
                 ,i+1,per[i].name,per[i].cell,per[i].adrress);
      }


      printf("\nUnion:\n");
      union same same1;
      same1.x=10;
      printf("x and y will equal as their memory adress is same.x=%d,y=%d\n"
             ,same1.x,same1.y);


      printf("\nCalculating CGPA by Structure:");
      struct result student;
      printf("\nEnter Your Id=");scanf("%d",&student.id);
      printf("Enter Your Department Name=");scanf("%s",student.department);
      printf("Enter Your Name=");scanf("%s",student.name);
      student.cgpa=0;
      for(i=0;i<8;i++)
      {
          printf("\nEnter Your GPA of Semester %d=",i+1);
          scanf("%f",&student.gpa[i]);
      }
      for(i=0;i<8;i++)
      {
        student.cgpa=(student.cgpa+student.gpa[i]);
      }
      student.cgpa/=8;
      printf("\nHi %s,Your CGPA is %f",student.name,student.cgpa);

  return 0;
 }


