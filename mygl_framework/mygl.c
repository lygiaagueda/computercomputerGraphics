#include "mygl.h"

#include <stdio.h>
#include <math.h>

void PutPixel(int x, int y, tCor cor){
	fb_ptr[4*x + 4*y*IMAGE_WIDTH + 0] = cor.r;
	fb_ptr[4*x + 4*y*IMAGE_WIDTH + 1] = cor.g;
	fb_ptr[4*x + 4*y*IMAGE_WIDTH + 2] = cor.b;
	fb_ptr[4*x + 4*y*IMAGE_WIDTH + 3] = cor.a; 
}

float TamanhoReta(int x1, int y1, int x2, int y2){
	return pow((pow((x2-x1),2) + pow((y2-y1), 2.0)), 0.5);
}

void Interpolar(tCor *cores, tCor cor0, tCor cor1 ,float tamanhoTotal, float tamanhoParcial){

	double t = tamanhoParcial/tamanhoTotal;

	cores->r = cor0.r * (1 -t) + cor1.r * t;
	cores->g = cor0.g * (1 -t) + cor1.g * t;
	cores->b = cor0.b * (1 -t) + cor1.b * t;
}

void DrawLine(tPonto pontoInicial, tCor corDoInicial, tPonto pontoFinal, tCor corDoFinal) {
	int dx = pontoFinal.x - pontoInicial.x;
	int dy = pontoFinal.y - pontoInicial.y;
	int x = pontoInicial.x;
	int y = pontoInicial.y;
	int x_final = pontoFinal.x;
	int y_final = pontoFinal.y;
	int incre_y = 1;
	int incre_x = 1;
	tCor cor;


	if(dy < 0){
		incre_y = -1;
		dy = -dy;
	}
	if(dx < 0){
		incre_x = -1;
		dx = -dx;
	}

	float tamanhoTotal = TamanhoReta(x,y,pontoFinal.x,pontoFinal.y); 

	if(dx == 0){
		while(y != y_final){
			float tamanhoParcial = TamanhoReta(pontoInicial.x, pontoInicial.y, x, y);
			Interpolar(&cor, corDoInicial, corDoFinal, tamanhoTotal, tamanhoParcial);
			PutPixel(x, y, cor);
			y+=incre_y;
		}
	}

	int d = 2 * dy - dx;
	int incr_e = 2 * dy;
	int incr_ne = 2 * (dy - dx);	
	
	PutPixel(x, y, cor);
	while (x != x_final) {
		float tamanhoParcial = TamanhoReta(pontoInicial.x, pontoInicial.y, x, y);
		Interpolar(&cor, corDoInicial, corDoFinal, tamanhoTotal, tamanhoParcial);
		printf("%d ",d);
		if (d <= 0) {
			d += incr_e;
			x+= incre_x;
		} else {
			d += incr_ne;
			x+=incre_x;
			y+=incre_y;
		}
		PutPixel(x, y, cor);
	}
}

void DrawLTriangle(tPonto vertice1, tPonto vertice2, tPonto vertice3, tCor corVertice1, tCor corVertice2, tCor corVertice3){
	DrawLine(vertice1, corVertice1, vertice2, corVertice2);
	DrawLine(vertice2, corVertice2, vertice3, corVertice3);
	DrawLine(vertice3, corVertice3, vertice1, corVertice1);
}

//
// >>> Defina aqui as funções que você implementar <<< 
//

void DesenhaPixels(void) {
	 // Escreve um pixel vermelho na posicao (0,0) da tela:
	 fb_ptr[0] = 255; // componente R
	 fb_ptr[1] = 0; // componente G
	 fb_ptr[2] = 0; // componente B
	 fb_ptr[3] = 255; // componente A
	 // Escreve um pixel verde na posicao (1,0) da tela:
	 fb_ptr[4] = 0; // componente R
	 fb_ptr[5] = 255; // componente G
	 fb_ptr[6] = 0; // componente B
	 fb_ptr[7] = 255; // componente A
	 // Escreve um pixel azul na posicao (2,0) da tela:
	 fb_ptr[8] = 0; // componente R
	 fb_ptr[9] = 0; // componente G
	 fb_ptr[10] = 255; // componente B
	 fb_ptr[11] = 255; // componente A
}

void DesenhaLinha(void) {
	 for (unsigned int i=0; i<250; ++i) {
		 fb_ptr[4*i + 4*i*IMAGE_WIDTH + 0] = 255;
		 fb_ptr[4*i + 4*i*IMAGE_WIDTH + 1] = 0;
		 fb_ptr[4*i + 4*i*IMAGE_WIDTH + 2] = 255;
		 fb_ptr[4*i + 4*i*IMAGE_WIDTH + 3] = 255;
	 }
}
// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {
	tPonto ponto = {256, 256};
	tPonto ponto2 = {512, 0};
	tPonto ponto3 = {512, 256};
	tPonto ponto4 = {512, 512};
	tPonto ponto5 = {0, 0};
	tPonto ponto6 = {0, 256};
	tPonto ponto7 = {0, 512};
	tPonto ponto8 = {256, 0};
	tPonto ponto9 = {256, 512};

	tPonto vertice1 = {256, 106}; 
	tPonto vertice2 = {106, 256}; 
	tPonto vertice3 = {406, 256}; 

	tCor cor = {255, 0, 0, 0};
	tCor cor2 = {0, 0, 255, 0};

	tCor corVertice1 = {255, 0, 200, 255};
	tCor corVertice2 = {125, 0, 200, 255};
	tCor corVertice3 = {125, 0, 255, 255};
	//PutPixel();
	//DrawLine(ponto, cor, ponto2, cor2);
	//DrawLine(ponto, cor, ponto3, cor2);
	//DrawLine(ponto, cor, ponto4, cor2);
	//DrawLine(ponto, cor, ponto5, cor2);
	//DrawLine(ponto, cor, ponto6, cor2);
	//DrawLine(ponto, cor, ponto7, cor2);
	//DrawLine(ponto, cor, ponto8, cor2);
	//DrawLine(ponto, cor, ponto9, cor2);
	DrawLTriangle(vertice1, vertice2, vertice3, corVertice1, corVertice2, corVertice3);
    //
    // >>> Chame aqui as funções que você implementou <<<
    //

}
