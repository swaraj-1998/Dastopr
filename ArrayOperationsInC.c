#include<stdio.h>
#include<stdlib.h>
int a[20],b[20],c[40];
int m,n,p,val,i,j,key,pos,temp;
/*Function Prototype*/
void create();
void display();
void insert();
void del();
void search();
void merge();
void sort();
int main()
{
        int choice;
        do{
                printf("\n\n--------Menu-----------\n");
                printf("1.Create\n");
                printf("2.Display\n");
                printf("3.Insert\n");
                printf("4.Delete\n");
                printf("5.Search\n");
                printf("6.Sort\n");
                printf("7.Merge\n");
                printf("8.Exit\n");
                printf("-----------------------");
                printf("\nEnter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:         create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        insert();
                                        break;

                        case 4:
                                        del();
                                        break;
                        case 5:
                                        search();
                                        break;
                        case 6:
                                        sort();
                                        break;
                        case 7:
                                        merge();
                                        break;
                        case 8:
                                        exit(0);
                                        break;
                        default:
                                        printf("\nInvalid choice:\n");
                                        break;
                }
        }while(choice!=8);
return 0;
}
void create() //creating an array
{
        printf("\nEnter the size of the array elements:\t");
        scanf("%d",&n);
        printf("\nEnter the elements for the array:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
}//end of create()
void display()  //displaying an array elements
{
        int i;
        printf("\nThe array elements are:\n");
        for(i=0;i<n;i++){
                 printf("%d\t",a[i]);         
         }
 }//end of display() 
void insert()   //inserting an element in to an array  
{         
    printf("\nEnter the position for the new element:\t");         
    scanf("%d",&pos);         
    printf("\nEnter the element to be inserted :\t");         
    scanf("%d",&val);         
    for(i=n-1;i>=pos;i--)
        {
                a[i+1]=a[i];
        }
        a[pos]=val;
        n=n+1;
}//end of insert()


void del()      //deleting an array element
{
        printf("\nEnter the position of the element to be deleted:\t");
        scanf("%d",&pos);
        val=a[pos];
        for(i=pos;i<n-1;i++)
        {
                a[i]=a[i+1];
        }
        n=n-1;
        printf("\nThe deleted element is =%d",val);
}//end of delete()
void search()   //searching an array element
{
        printf("\nEnter the element to be searched:\t");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
                if(a[i]==key)
                {
                        printf("\nThe element is present at position %d",i);
                        break;
                }
        }
        if(i==n)
        {
                printf("\nThe search is unsuccessful");
        }
}//end of serach()
void sort()     //sorting the array elements
{
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-1-i;j++)                 {                         if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }
        printf("\nAfter sorting the array elements are:\n");
        display();
}//end of sort
void merge()    //merging two arrays
{
        printf("\nEnter the size of the second array:\t");
        scanf("%d",&m);
        printf("\nEnter the elements for the second array:\n");
        for(i=0;i<m;i++)
        {
                scanf("%d",&b[i]);
        }
        for(i=0,j=0;i<n;i++,j++)
        {
                c[j]=a[i];
        }
        for(i=0;i<m;i++,j++)
        {
                c[j]=b[i];
        }
        p=n+m;
        printf("\nArray elements after merging:\n");
        for(i=0;i<p;i++)
        {
                printf("%d\t",c[i]);
        }
}//end of merge()
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
#include<stdio.h>
#include<stdlib.h>
int a[20],b[20],c[40];
int m,n,p,val,i,j,key,pos,temp;
/*Function Prototype*/
void create();
void display();
void insert();
void del();
void search();
void merge();
void sort();
int main()
{
        int choice;
        do{
                printf("\n\n--------Menu-----------\n");
                printf("1.Create\n");
                printf("2.Display\n");
                printf("3.Insert\n");
                printf("4.Delete\n");
                printf("5.Search\n");
                printf("6.Sort\n");
                printf("7.Merge\n");
                printf("8.Exit\n");
                printf("-----------------------");
                printf("\nEnter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:         create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        insert();
                                        break;
 
                        case 4:
                                        del();
                                        break;
                        case 5:
                                        search();
                                        break;
                        case 6:
                                        sort();
                                        break;
                        case 7:
                                        merge();
                                        break;
                        case 8:
                                        exit(0);
                                        break;
                        default:
                                        printf("\nInvalid choice:\n");
                                        break;
                }
        }while(choice!=8);
return 0;
}
void create() //creating an array
{
        printf("\nEnter the size of the array elements:\t");
        scanf("%d",&n);
        printf("\nEnter the elements for the array:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
}//end of create()
void display()  //displaying an array elements
{
        int i;
        printf("\nThe array elements are:\n");
        for(i=0;i<n;i++){
                 printf("%d\t",a[i]);         
         }
 }//end of display() 
void insert()   //inserting an element in to an array  
{         
    printf("\nEnter the position for the new element:\t");         
    scanf("%d",&pos);         
    printf("\nEnter the element to be inserted :\t");         
    scanf("%d",&val);         
    for(i=n-1;i>=pos;i--)
        {
                a[i+1]=a[i];
        }
        a[pos]=val;
        n=n+1;
}//end of insert()
 
 
void del()      //deleting an array element
{
        printf("\nEnter the position of the element to be deleted:\t");
        scanf("%d",&pos);
        val=a[pos];
        for(i=pos;i<n-1;i++)
        {
                a[i]=a[i+1];
        }
        n=n-1;
        printf("\nThe deleted element is =%d",val);
}//end of delete()
void search()   //searching an array element
{
        printf("\nEnter the element to be searched:\t");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
                if(a[i]==key)
                {
                        printf("\nThe element is present at position %d",i);
                        break;
                }
        }
        if(i==n)
        {
                printf("\nThe search is unsuccessful");
        }
}//end of serach()
void sort()     //sorting the array elements
{
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-1-i;j++)                 {                         if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }
        printf("\nAfter sorting the array elements are:\n");
        display();
}//end of sort
void merge()    //merging two arrays
{
        printf("\nEnter the size of the second array:\t");
        scanf("%d",&m);
        printf("\nEnter the elements for the second array:\n");
        for(i=0;i<m;i++)
        {
                scanf("%d",&b[i]);
        }
        for(i=0,j=0;i<n;i++,j++)
        {
                c[j]=a[i];
        }
        for(i=0;i<m;i++,j++)
        {
                c[j]=b[i];
        }
        p=n+m;
        printf("\nArray elements after merging:\n");
        for(i=0;i<p;i++)
        {
                printf("%d\t",c[i]);
        }
}//end of merge()