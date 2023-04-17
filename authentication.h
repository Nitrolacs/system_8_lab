/*!
 * \file interface.h
 * \brief Заголовочный файл с описанием функций
 *
 * Данный файл содержит в себе определение основных
 * функций, используемых для обработки параметров командной строки (CLI).
*/

#ifndef INC_6_LAB_AUTHENTICATION_H
#define INC_6_LAB_AUTHENTICATION_H

// Функция общения с PAM
int my_conv(int num_msg, const struct pam_message** msg,
        struct pam_response** resp, void* appdata_ptr);

// Функция аутентификации с PAM
int authenticate(const char* username, char* password);

#endif //INC_6_LAB_AUTHENTICATION_H
