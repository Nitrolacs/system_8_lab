# Практическая работа №8. 
Практическая работа №8. Безопасность системных программ/
## Цель работы
Исследование вопросов безопасности в GNU/Linux.
## Задачи
1. Ознакомиться с теоретическими сведениями по проблеме обеспечения информационной безопасности в ОС GNU/Linux.
2. Модифицировать результаты выполнения ЛР 7 добавлением использования программных средств обеспечения информационной безопасности в ОС GNU/Linux. Обеспечить сборку обеих частей программы, как отдельно, так и полностью, с использованием инструментального набора GNU Autotools. Серверная часть должна запускаться только привилегированным пользователем, а клиентская часть для передачи сообщений должна пройти процедуру аутентификации с использованием библиотеки PAM (Pluggable Authentication Modules).
3. Используя изученные механизмы, разработать и отладить серверную и клиентскую части приложения.
4. Составить общее описание результатов, инструкции по сборке и использованию программы, а также инструкцию по получению документации, сформировать архив формата tar.gz и представить на проверку с исходными текстами программы. Внимание: исходные тексты программ должны соответствовать принятому стандарту кодирования, а также содержать комментарии в стиле системы Doxygen.
## Вариант задания
Вариант 20. Клиент принимает от пользователя коэффициенты квадратного уравнения (ax2+bx+c=0) или кубического уравнения (ax3+bx2+cx+d=0), каждый из которых не равен нулю или единице, и отсылает их серверу. Сервер принимает коэффициенты и выводит на экран разложение кубического или квадратного уравнения на множители.