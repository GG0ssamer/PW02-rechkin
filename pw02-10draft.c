#include <stdio.h>
#include <stdint.h>

int main(void){

    int packet_id;
    unsigned int status_tmp; // далее сузим до uint8_t
    float voltage;

    scanf("%x %o %f", &packet_id, &status_tmp, &voltage);
    // scanf — форматированный ввод, один вызов для трёх значений
    // %x — читает целое в шестнадцатеричной системе; ожидает int * / unsigned int *
    // %o — читает целое в восьмеричной системе; ожидает unsigned int *
    // %f — читает float; ожидает float *
    // & — адрес переменной; scanf пишет по этому адресу
    // n — сколько полей реально прочитано (0..3)

    uint8_t status_code = (uint8_t)status_tmp;
    // uint8_t — 1-байтовый беззнаковый тип
    // (uint8_t) — явное приведение: старшие 24 бита отбрасываются, остаётся младший байт
    // для 65 (влезает в байт) значение не меняется

    uint16_t checksum = (uint16_t)(packet_id + (int)status_code);
    // packet_id — int, status_code — uint8_t
    // status_code повышается до int (integer promotion), сумма считается в int
    // (uint16_t) — сужаем результат до 2 байт; для 7 + 65 = 72 значение сохраняется
    // порядок вычисления: сначала сумма в int, потом каст в uint16_t

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %u\n", (unsigned)status_code);
    // (unsigned) — приведение к unsigned int, чтобы %u был корректен

    printf("STATUS_CHAR: %c\n", (char)status_code);
    // %c — спецификатор для одного символа
    // (char) — приводим код к типу char; для 65 получим 'A'
    // (в printf char повышается до int — это нормально для %c)

    printf("VOLTAGE: %.2f\n", (double)voltage);
    // %.2f — вещественный вывод с двумя знаками после точки
    // float в вариативных функциях повышается до double (default argument promotion)
    // (double) — явное приведение, чтобы подчеркнуть это

    printf("CHECKSUM: %u\n", (unsigned)checksum);
    // %u — для unsigned int; uint16_t повышается до int, но приводим к unsigned
    // чтобы точно совпасть с %u; выведет 72

    return 0;
    // return — возврат из main; 0 — успех
}