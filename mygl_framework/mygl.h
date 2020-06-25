#ifndef MYGL_H
#define MYGL_H

#include "core.h"
#include "frame_buffer.h"

typedef struct{
	int r;
	int g;
	int b;
	int a;
}tCor;

typedef struct{
	int x;
	int y;
}tPonto;

// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);

void DesenhaPixels(void);
void DesenhaLinha(void);
void PutPixel(int, int, tCor);
void DrawLine(tPonto, tCor, tPonto, tCor);
//
// >>> Declare aqui as funções que você implementar <<<
//

#endif  // MYGL_H
