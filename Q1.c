#include <stdio.h>
#include <stdlib.h>

int checaVetor(int M[], int p, int N, int Pos) {
    for(int i = 0; i < N; i++) {
        if(M[i] == p) {
            return 0;
        }
    }

    M[Pos] = p;
    return 1;
}

int main () {
    int N, *Paginas, Q, *Memory, segFault, Belady = 0;
    int valoresBelady[2] = {0, 0};

    scanf("%d", &N);
    Paginas = calloc(N, sizeof(int));

    for(int p = 0; p < N; p++) {
        scanf("%d", &Paginas[p]);
    }

    while(scanf("%d", &Q) == 1){
        printf("%d ", Q);
        segFault = 0;

        Memory = calloc(Q, sizeof(int));

        for(int p = 0; p < N; p++){
            segFault += checaVetor(Memory, Paginas[p], N, segFault%Q);
        }
        printf("%d\n", segFault);
        if(valoresBelady[0] != 0 && valoresBelady[1] != 0){
            if(Q > valoresBelady[0] && segFault > valoresBelady[1]) {
                Belady = 1;
            } else {
                valoresBelady[0] = Q;
                valoresBelady[1] = segFault;
            }
        } else {
            valoresBelady[0] = Q;
            valoresBelady[1] = segFault;
        }
    }

    if(Belady == 1) {
        printf("Belady detectado\n");
    } else {
        printf("Sem anomalia\n");
    }
}