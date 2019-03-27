#include <stdio.h>

int main()
{
    float parcial1, parcial2, parcial3, examen_final, trabajo_final, calificacion, promedio_parcial, porcentaje_parcial, porcentaje_examen, porcentaje_trabajo;

    printf("\033[0;34m");
    printf("\n\n\t\tUn alumno desea saber cual sera su calificacion final en la materia de Algoritmos.\n");
    printf("\t\tDicha calificacion se compone de los siguientes porcentajes: \n");
    printf("\t\t*55 del promedio de sus tres calificaciones parciales.\n");
    printf("\t\t*30 de la calificaciOn del examen final\n");
    printf("\t\t*15 de la calificaciOn de un trabajo final.\n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t==================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tCalificaciones maximas son de 100 y minimas de 0: "); // total
    printf("\033[0m");
    printf(" \n");
    printf(" \n");
    printf("\033[0;32m");
    printf("\t\tCalificacion Parcial 1: "); // total
    scanf("%f", &parcial1);
    printf("\033[0m");
    printf("\033[0;32m");
    printf("\t\tCalificacion Parcial 2: "); // total
    scanf("%f", &parcial2);
    printf("\033[0m");
    printf("\033[0;32m");
    printf("\t\tCalificacion Parcial 3: "); // total
    scanf("%f", &parcial3);
    printf("\033[0m");

    promedio_parcial = (parcial1 + parcial2 + parcial3) / 3;

    printf(" \n");

    printf("\033[1;35m");
    printf("\t\tPromedio de los tres parciales: %.2f\n", promedio_parcial); // percent discount
    printf("\033[0m");

    porcentaje_parcial = promedio_parcial * .55;

    printf("\033[1;35m");
    printf("\t\tPorcentaje de calificacion de los 3 parciales: %.2f\n\n", porcentaje_parcial); // percent discount
    printf("\033[0m");

    printf("\033[0;32m");
    printf("\t\tCalificacion Examen Final: "); // total
    scanf("%f", &examen_final);
    printf("\033[0m");
    printf(" \n");

    porcentaje_examen = examen_final * .30;

    printf("\033[1;35m");
    printf("\t\tPorcentaje Examen Final: %.2f", porcentaje_examen); // total
    printf("\033[0m");

    printf(" \n");
    printf(" \n");

    printf("\033[0;32m");
    printf("\t\tCalificacion Trabajo Final: "); // total
    scanf("%f", &trabajo_final);
    printf("\033[0m");
    printf(" \n");

    porcentaje_trabajo = trabajo_final * .15;

    printf("\033[1;35m");
    printf("\t\tPorcentaje Trabajo Final: %.2f", porcentaje_trabajo); // total
    printf("\033[0m");
    printf(" \n");
    printf(" \n");

    calificacion = porcentaje_examen + porcentaje_parcial + porcentaje_trabajo;

    printf("\033[0;33m");
    printf("\t\tCalificacion Final: %.2f", calificacion); // total
    printf("\033[0m");
    printf(" \n");

    printf(" \n");
    printf(" \n");

    return 0;
}