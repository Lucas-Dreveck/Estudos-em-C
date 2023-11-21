#include "../include/utils.h"
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool validaData(const char *data) {
    struct tm *infoTempoAtual;
    time_t tempoAtual;
    time(&tempoAtual);
    infoTempoAtual = localtime(&tempoAtual);

    int diaAtual = infoTempoAtual->tm_mday;
    int mesAtual = infoTempoAtual->tm_mon + 1;
    int anoAtual = infoTempoAtual->tm_year + 1900;

    int dia, mes, ano;
    if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) != 3) {
        return false;
    }

    if (ano < anoAtual || (ano == anoAtual && mes < mesAtual) || (ano == anoAtual && mes == mesAtual && dia < diaAtual)) {
        return false;
    }

    int diasNoMes[] = {0, 31, (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes < 1 || mes > 12 || dia < 1 || dia > diasNoMes[mes]) {
        return false;
    }

    return true;
}