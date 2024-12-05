#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    int total_marks;
};


int main(){

    struct Student stu[5];
    int highest_marks=0,highest_index=0;

    for(int i =0; i<5;i++){
        printf("Enter Student Data : %d\n", i+1);

        printf("Enter Name:");
        gets(stu[i].name);

        printf("Enter Roll No.:");
        scanf("%d", &stu[i].roll_no);

        printf("Enter Total Marks:");
        scanf("%d", &stu[i].total_marks);   // 45

        if(stu[i].total_marks > highest_marks){
            highest_marks = stu[i].total_marks;
            highest_index = i;
        }

        getchar();
    }


    // Topper Details
    printf("Topper Details\n");
    printf("Name: %s\n", stu[highest_index].name);
    printf("Roll No.: %d\n", stu[highest_index].roll_no);
    printf("Marks: %d\n", stu[highest_index].total_marks);


    

    return 0;
}
