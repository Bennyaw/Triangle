#ifndef _TRIANGLE_H
#define _TRIANGLE_H


int add(int v1,int v2);

char *getTriangleName(int l1, int l2, int l3);
char *getTriangleName_NotTriangle(int l1, int l2, int l3);
char *getTriangleName_Equilateral(int l1, int l2, int l3);
char *getTriangleName_Scalene(int l1, int l2, int l3);

#endif // _TRIANGLE_H
