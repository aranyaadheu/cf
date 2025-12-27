#include <stdio.h>
#include <string.h>

/*
Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.
*/
int main()
{

    int n;
    int total_faces = 0;
    scanf("%d", &n);

    while(n--)
    {
        char poly[100];
        scanf("%s", poly);
        
        if(strcmp(poly, "Tetrahedron") == 0)
        {
            total_faces +=4;
        }
        else if(strcmp(poly, "Cube") == 0)
        {
            total_faces +=6;
        }
        else if(strcmp(poly, "Octahedron") == 0)
        {
            total_faces += 8;
        }
        else if(strcmp(poly, "Dodecahedron") == 0)
        {
            total_faces += 12;
        }
        else if(strcmp(poly, "Icosahedron") == 0)
        {
            total_faces += 20;
        }

    }

    printf("%d\n", total_faces);

    return 0;
}