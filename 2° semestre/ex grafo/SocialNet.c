#include <stdio.h>
#include <stdlib.h>

typedef struct Usuario {
    int id;
    int numAmigos;
    int *amigos;
} Usuario;

Usuario* criarUsuario(int id, int numAmigos) {
    Usuario *usuario = (Usuario*)malloc(sizeof(Usuario));
    usuario->id = id;
    usuario->numAmigos = numAmigos;
    usuario->amigos = (int*)malloc(numAmigos * sizeof(int));
    return usuario;
}

void adicionarAmizade(Usuario *usuario1, Usuario *usuario2) {
    usuario1->amigos[usuario1->numAmigos++] = usuario2->id;
    usuario2->amigos[usuario2->numAmigos++] = usuario1->id;
}

Usuario* encontrarUsuarioMaisPopular(Usuario **usuarios, int numUsuarios) {
    Usuario *maisPopular = usuarios[0];
    for (int i = 1; i < numUsuarios; i++) {
        if (usuarios[i]->numAmigos > maisPopular->numAmigos) {
            maisPopular = usuarios[i];
        }
    }
    return maisPopular;
}

int main() {
    int numUsuarios = 7;

    Usuario *usuarios[numUsuarios];
    for (int i = 0; i < numUsuarios; i++) {
        usuarios[i] = criarUsuario(i, 0);
    }

    adicionarAmizade(usuarios[0], usuarios[1]);
    adicionarAmizade(usuarios[0], usuarios[2]);
    adicionarAmizade(usuarios[1], usuarios[3]);
    adicionarAmizade(usuarios[2], usuarios[4]);
    adicionarAmizade(usuarios[3], usuarios[5]);
    adicionarAmizade(usuarios[3], usuarios[6]);

    Usuario *usuarioMaisPopular = encontrarUsuarioMaisPopular(usuarios, numUsuarios);
    printf("O usuário mais popular é o usuário %d com %d amigos.\n", usuarioMaisPopular->id, usuarioMaisPopular->numAmigos);

    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i] != usuarioMaisPopular) {
            printf("Sugestão de amizade para o usuário %d: Usuário %d\n", usuarios[i]->id, usuarioMaisPopular->id);
            break;
        }
    }

    for (int i = 0; i < numUsuarios; i++) {
        free(usuarios[i]->amigos);
        free(usuarios[i]);
    }

    return 0;
}
