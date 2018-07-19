/*
 ============================================================================
 Name        : Dreiecksfläche.c
 Author      : Samuel Bergen
 Version     : 1.0
 Copyright   : Copyright 2018 Samuel Bergen
 Description : Berechnung einer Dreiecksfläche mit eingegebenen Werten
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	// Variablendeklaration
	double a, b, c, flaeche, flaechen;
	double wurzel = 0.5;

	// Eingabe
	printf(" *** Dreiecksberechnung anhand der Seitenlängen *** \n\n");
	printf(" Geben Sie die Seitenlängen ein: \n");
	printf(" a = ");
	fflush(stdin);
	scanf("%d", &a);
	printf(" b = ");
	fflush(stdin);
	scanf("%d", &b);
	printf(" c = ");
	fflush(stdin);
	scanf("%d", &c);

	// Verarbeitung und Ausgabe
	//if(((1/2*(a+b+c))*((1/2*(a+b+c))-a)*((1/2*(a+b+c))-b)*((1/2*(a+b+c))-c)) < 0)
	//	printf("\n\nDie eingegebenen Werte entsprechen nicht denen eines Dreiecks!");
	//else {
		flaeche = ((1/2*(a+b+c))*((1/2*(a+b+c))-a)*((1/2*(a+b+c))-b)*((1/2*(a+b+c))-c));
		printf("\n\nDie Dreiecksfläche betraegt nach dem Satz von Heron %fFE", flaeche);
	//}
	//if(((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)) < 0)
	//	printf("\n\nDie eingegebenen Werte entsprechen nicht denen eines Dreiecks!");
	//else {
		flaechen = 1/4*((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
		printf("\n\nDie Dreiecksfläche betraegt nach der zweiten Darstellung des Satzes von Heron %fFE", flaechen);
	//}

	return 0;
}
