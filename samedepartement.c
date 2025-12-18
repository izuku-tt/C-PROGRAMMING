#include <stdio.h>
#include <string.h>
typedef struct student {
    int roll;
    char Name[25];
    char department[5];
    char course[30];
    int year;
} student;

void compare(student a, student b) {
        int i = 0, j = 0;
    while (a.course[i] != '\0' && b.course[j] != '\0') {
        i++,j++;
    }
    if (i == j) printf("Courses are Same\n");
    else printf("Courses are not same\n");
}

int main() {
    student student1, student2;

    printf("Enter the roll number of first Student: ");
    scanf("%d", &student1.roll);
    printf("Enter the roll number of second Student: ");
    scanf("%d", &student2.roll);

    printf("\n");
    getchar();  // clear newline after last scanf
    printf("Enter the name of first Student: ");
    scanf("%[^\n]", student1.Name);
    getchar();  // clear newline after last string input
    printf("Enter the name of second Student: ");
    scanf("%[^\n]", student2.Name);

    printf("\n");
    getchar();
    printf("Enter the Department of first Student: ");
    scanf("%[^\n]", student1.department);
    getchar();
    printf("Enter the Department of second Student: ");
    scanf("%[^\n]", student2.department);

    printf("\n");
    getchar();
    printf("Enter the Course of first Student: ");
    scanf("%[^\n]", student1.course);
    getchar();
    printf("Enter the Course of second Student: ");
    scanf("%[^\n]", student2.course);

    compare(student1,student2);
    
    return 0;
}