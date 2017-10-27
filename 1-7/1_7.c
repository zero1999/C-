#include <stdio.h>
#include "zylib.h"

int main()
{
    STRING country, area, pop, GDP, China, Iceland, India, Madagascar, Maldive;
    double China_area, China_pop, China_GDP;
    double Iceland_area, Iceland_pop, Iceland_GDP;
    double India_area, India_pop, India_GDP;
    double Madagascar_area, Madagascar_pop, Madagascar_GDP;
    double Maldive_area, Maldive_pop, Maldive_GDP;
    country = "COUNTRY";
    area = "AREA(10K km2)";
    pop = "POP(10K)";
    GDP = "GDP(Billion $)";
    China = "China";
    China_area = 960.00;
    China_pop = 129500.00;
    China_GDP = 1080.00;
    Iceland = "Iceland";
    Iceland_area = 10.30;
    Iceland_pop = 27.57;
    Iceland_GDP = 8.20;
    India = "India";
    India_area = 297.47;
    India_pop = 97000.00;
    India_GDP = 264.80;
    Madagascar = "Madagascar";
    Madagascar_area = 62.70;
    Madagascar_pop = 1635.00;
    Madagascar_GDP = 3.60;
    Maldive = "Maldive";
    Maldive_area = 0.0298;
    Maldive_pop = 27.80;
    Maldive_GDP = 0.23;
    printf("-------------------------------------------------------\n\n");
    printf("%-11s%16s%14s%16s\n\n", country, area, pop, GDP);
    printf("-------------------------------------------------------\n\n");
    printf("%-11.11s%16.2lf%14.2lf%14.2lf\n\n", China, China_area, China_pop, China_GDP);
    printf("%-11.11s%16.2lf%14.2lf%14.2lf\n\n", Iceland, Iceland_area, Iceland_pop, Iceland_GDP);
    printf("%-11.11s%16.2lf%14.2lf%14.2lf\n\n", India, India_area, India_pop, India_GDP);
    printf("%-11.11s%16.2lf%14.2lf%14.2lf\n\n", Madagascar, Madagascar_area, Madagascar_pop, Madagascar_GDP);
    printf("%-11.11s%16.2lf%14.2lf%14.2lf\n\n", Maldive, Maldive_area, Maldive_pop, Maldive_GDP);
    printf("-------------------------------------------------------\n");

	return 0;
}
