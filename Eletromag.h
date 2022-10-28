#include <stdio.h>
#include <math.h>
#define const 3


void cilindrica(float *a, float *b, float *c){
	//vetor A
	printf("Coordenadas Cilindricas\n");
 	double p1 = sqrt(pow(a[0],2) + pow(a[1],2));
 	double p2 = sqrt(pow(b[0],2) + pow(b[1],2));
 	double p3 = sqrt(pow(c[0],2) + pow(c[1],2));
	printf("Ro vetor A = %1.1f \n",p1);
	printf("Ro vetor B = %1.1f \n",p2);
	printf("Ro vetor C = %1.1f \n",p3);
	 double fi1 =  atan2(a[1], a[0]);
	 double fi2 =  atan2(b[1], b[0]);
	 double fi3 =  atan2(c[1], c[0]);
	 printf("\n");
	printf("phi vetor A = %1.1f", fi1);
	printf("phi vetor B = %1.1f", fi2);
	printf("phi vetor C = %1.1f", fi3);
		printf("\n");
	printf("Z vetor A = %.2f \n", a[2]);
	printf("Z Vetor B = %.2f \n", b[2]);
	printf("Z vetor C = %.2f \n", c[2]);
}

void esfericas(float *a, float *b, float *c){
	printf("Coordenadas Esfericas\n");
	double r1 = sqrt(pow(a[0],2) + pow(a[1],2) + pow(a[2],2));
	double r2 = sqrt(pow(b[0],2) + pow(b[1],2) + pow(b[2],2));
	double r3 = sqrt(pow(c[0],2) + pow(c[1],2) + pow(c[2],2));
	printf("\n");
	printf("r vetor A = %.2f  \n ",r1);
	printf("r vetor B= %.2f  \n",r2);
	printf("r vetor C= %.2f  \n",r3);
		double teta1 = atan2((a[0], a[1])/a[2], 2);
		double teta2 = atan2((b[0], b[1])/b[2], 2);
		double teta3 = atan2((c[0], c[1])/c[2], 2);
	printf("\n");
	printf("Teta vetor A = %.2f", teta1);
	printf("Teta vetor B= %.2f", teta2);
	printf("Teta Vetor C= %.2f", teta3);
	double Phi1 = atan(a[0]/a[1]);
	double Phi2 = atan(b[0]/b[1]);
	double Phi3 = atan(c[0]/c[1]);
		printf("\n");
		printf("Phi  vetor A = %.2f", Phi1);
		printf("Phi  vetor B = %.2f", Phi2);
		printf("Phi  vetor C = %.2f", Phi3);
}


void distancy(float *a, float *b, float *c){
	float d[const];
	float e[const];
	float f[const];
	
	for (int i = 0; i < 3; i++){
		d[i] = b[i] - a[i];
		e[i] = a[i] - c[i];
		f[i] = c[i] - b[i];
	}
	
	printf("Vetor Distancia AB: ");
	for(int i = 0; i < 3; i++){
		printf(" %.2f ", d[i]);
	}
	
	printf("Vetor Distancia AC: ");
	for(int i = 0; i < 3; i++){
		printf(" %.2f ", e[i]);
	}
	
		printf("Vetor Distancia BC:");
	for(int i = 0; i < 3; i++){
		printf(" %.2f ", f[i]);
	}

}

void poze(float *a, float *b, float *c){
	printf("%.2fax %.2fay %.2faz\n", a[0], a[1], a[2]);
	printf("%.2fax %.2fay %.2faz\n", b[0], b[1], b[2]);
	printf("%.2fax %.2fay %.2faz\n", c[0], c[1], c[2]);
}

void umEmCimaDoOutro(float *a, float *b){
	//produto escalar
	float e, bm, c[const], d[const];
	bm = pow(sqrt(pow(b[0],2) + pow(b[1],2) + pow(b[2],2)),2);
	for(int i = 0; i < 3; i++){
		e = b[i] * a[i];
	}
	

	for (int i = 0; i <  3; i++){
		d[i] = e * b[i]/bm;
	}
	
	printf("Vetor A dentro do Vetor B: %.2fax %.2fay %.2faz", d[0], d[1], d[2]);

}

void unitario(float *a, float *b){
	float am, bm, au[const], bu[const];

	am = sqrt(pow(a[0],2) + pow(a[1],2) + pow(a[2],2));
	bm = sqrt(pow(b[0],2) + pow(b[1],2) + pow(b[2],2));

	for(int i = 0; i<3; i++){
		au[i] = a[i]/am;
		bu[i] = b[i]/bm;
	}

	printf("Vetor Unitario A: %.2fax %.2fay %.2faz", au[0], au[1], bu[2]);
	printf("\n");
	printf("Vetor Unitario B: %.2fax %.2fay %.2faz", bu[0], bu[1], bu[2]);

}

void angulo(float *a, float *b){

	double e = 0, am = 0, bm = 0, m = 0, theta = 0, phi = 2 * asin(1.0);
	am = sqrt(pow(a[0],2) + pow(a[1],2) + pow(a[2],2));
	bm = sqrt(pow(b[0],2) + pow(b[1],2) + pow(b[2],2));
	m = am * bm;
		for(int i = 0; i < 3; i++){
			e =  e + a[i] * b [i];
		}
	theta = e/m;

	printf("o Angulo entre o Vetor A e o Vetor B é : %f", acos(theta)*180/phi);
}

void produto(float *a, float *b, float *c){
	double abP[const], bcP[const], d = 0, n = 0;

	//determinante entre A e B

	abP[0] = a[1] * b[2] - b[1] * a[2];
	abP[1] = a[0] * b[2] - b[0] * a[2];
	abP[2] = a[0] * b[1] - b[0] * a[1];

	//determinante entre B e C

	bcP [0] = b[1] * c[2] - c[1] * b[2];
	bcP [1] = b[0] * c[2] - c[0] * b[2];
	bcP [2] = b[0] * c[1] - c[0] * b[1];


	d = (abP[0] * c[0])  + (abP[1] * c[1]) + (abP[2] * c[2]);
	n = (bcP[0] * a[0]) + (bcP[1] * a[1])  + (bcP[2] * a[2]);
	printf("%.2f\n",n/d);
	
}

void executai(){
	int botao = 1, e = 0, j;
	float a [const], b [const], c[const];
		printf("Ben Vindo ao Conversor de programas\n");
		printf("Escolha qual a Opção desejada\n");
		printf("1 - para as distancias entre os pontos\n");
		printf("2 - para vetor posicao de cada pontos\n");
		printf("3 - conversao de Coordenadas para Cilindricas e Esfericas\n");
		printf("4 - encontrar o Vetor (A) no vetor(B)\n");
		printf("5 - encontrar o angulo entre o vetor (A) e o vetor(B)\n");
		printf("6 - encontrar o  o vetor unitario (A) e o vetor unitario(B)\n");
		printf("7 - O Produto escalar triplo A.BxC / AxB.C\n");
	while(botao == 1){

		scanf("%d", &e);
		fflush(stdout);
		switch (e)
		{
		case 1:
				
				printf("Escreva a posicao dos Vetor A");
				for (int i = 0; i < 3; i++){
					scanf("%f", &a[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor B");
				for (int i = 0; i < 3; i++){
					scanf("%f", &b[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor C");
				for (int i = 0; i < 3; i++){
					scanf("%f", &c[i]);
				}
				fflush(stdout);

				distancy(a, b, c);
			break;

		case 2:
	
				printf("Escreva a posicao dos Vetor A:");
				for (int i = 0; i < 3; i++){
					scanf("%f", &a[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor B: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &b[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor C: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &c[i]);
				}
				fflush(stdout);

				poze(a, b, c);
			break;

		case 3:
				printf("Escreva a posicao dos Vetor A:");
				for (int i = 0; i < 3; i++){
					scanf("%f", &a[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor B: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &b[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor C: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &c[i]);
				}
				fflush(stdout);				
				printf("Escolha para qual coordenada deseja converter\n");
				printf("1 - para cilindricas\n");
				printf("2 para esfericas\n");
				scanf("%d", &j);
					if (j == 1){
						cilindrica(a, b , c);
					}
					if (j == 2){
						esfericas(a, b, c);
					}
					else{
						break;
					}
			break;
		case 4:
				printf("Escreva a posicao dos Vetor A:");
				for (int i = 0; i < 3; i++){
					scanf("%f", &a[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor B: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &b[i]);	
				}
				
				fflush(stdout);				
				
				umEmCimaDoOutro(a, b);
			break;
		case 5:
				printf("Escreva a posicao dos Vetor A:");
				for (int i = 0; i < 3; i++){
					scanf("%f", &a[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor B: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &b[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor C: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &c[i]);
				}
				fflush(stdout);				
				angulo(a,b);
			break;
		case 6:
		printf("Escreva a posicao dos Vetor A:");
				for (int i = 0; i < 3; i++){
					scanf("%f", &a[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor B: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &b[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor C: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &c[i]);
				}
				fflush(stdout);				
				unitario(a,b);
			break;
		case 7:
				printf("Escreva a posicao dos Vetor A:");
				for (int i = 0; i < 3; i++){
					scanf("%f", &a[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor B: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &b[i]);	
				}
				fflush(stdout);
				printf("Escreva a posicao dos Vetor C: ");
				for (int i = 0; i < 3; i++){
					scanf("%f", &c[i]);
				}
				fflush(stdout);				
				produto(a,b,c);
			break;
		default:
			printf("Saindo do Programa");
			botao = 0;
			break;
		}

	}
}