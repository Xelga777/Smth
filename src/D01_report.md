# D01_linux
## Part 1. Установка ОС


Версия установленной ОС
- ![Версия установленной ОС](images/Part_1_01.png)
## Part 2. Создание пользователя
Создание пользователя
- ![Создание пользователя](images/Part_2_01.png)

Пользователь добавлен
- ![Пользователь добавлен](images/Part_2_02.png)
## Part 3. Настройка сети ОС
Текущий hostname
- ![Текущий hostname](images/Part_3_01.png)

Изменение hostname
- ![Изменение hostname](images/Part_3_02.png)

Hostname изменен
- ![Hostname изменен](images/Part_3_03.png)

Текущий timezone
- ![Текущий timezone](images/Part_3_04.png)

Изменение timezone
- ![Изменение timezone](images/Part_3_05.png)

Timezone изменен
- ![Timezone изменен](images/Part_3_06.png)

Сетевые интерфейсы
- ![Сетевые интерфейсы](images/Part_3_07.png)


lo - виртуальный сетевой интерфейс loopback. Любой трафик, который посылается компьютерной программой на интерфейс loopback тут же получается тем же интерфейсом.

Вывод ip
- ![Вывод ip](images/Part_3_08.png)

DHCP - Dynamical Host Confuration Protocol

Вывод gw
- ![Вывод gw](images/Part_3_09.png)

Изменение ip, gw, dns
- ![Изменение gw](images/Part_3_11.png)
- ![Изменение gw 2](images/Part_3_12.png)
- ![Вывод ip](images/Part_3_13.png)

Проверка изменений
- ![Проверка изменений](images/Part_3_14.png)

Пингуем хосты
- ![Ping 1.1.1.1](images/Part_3_15.png)
- ![Ping ya.ru](images/Part_3_16.png)
## Part 4. Обновление ОС
Обновление ОС
- ![Upgrading OS](images/Part_4_01.png)
- ![Upgraded OS](images/Part_4_02.png)
## Part 5. Использование команды sudo
Разрешение на использование команды sudo
- ![sudo changed](images/Part_5_01.png)

Изменение hostname от нового пользователя
- ![changing hostname](images/Part_5_02.png)
## Part 6. Установка и настройка службы времени
Установка синхронизации времени
- ![changing time](images/Part_6_01.png)

Проверка, что все работает
- ![checking time](images/Part_6_02.png)
## Part 7. Установка и использование текстовых редакторов
Редактирование в vim (Save and exit :wq)
- ![vim 01](images/Part_7_01.png)

Редактирование в nano (Save and exit ^O + ^X)
- ![nano 01](images/Part_7_02.png)

Редактирование в joe (Save and exit ^KX)
- ![joe 01](images/Part_7_03.png)

Выход без сохранения vim (:q!)
- ![vim 02](images/Part_7_04.png)

Выход без сохранения nano (^x + y)
- ![mano 02](images/Part_7_05.png)

Выход без сохранения joe (^C + y)
- ![joe 02](images/Part_7_06.png)

Поиск и замена в vim (:%s/Что меняем/На что меняем/g)
- ![vim 03](images/Part_7_07.png)

Результат замены
- ![vim 04](images/Part_7_08.png)

Поиск и замена в nano (^W, что ищем, ^R, на что меняем)
- ![nano 03](images/Part_7_09.png)
- ![nano 04](images/Part_7_10.png)


Поиск и замена в joe (^KF, что ищем, R, на что меняем)
- ![joe 03](images/Part_7_11.png)
## Part 8. Установка и базовая настройка сервиса SSHD
Установка и добавление в автозапуск службы ssh
- ![Install sshd](images/Part_8_01.png)

Изменение порта
- ![Change port 1](images/Part_8_02.png)
- ![Change port 2](images/Part_8_03.png)

Наличие в выводе команды ps процесса sshd
- ![Search sshd](images/Part_8_04.png)

Использованные опции:
1. -A показать все процессы в том числе служебные
2. -f показать подробную информацию о процессе


Вывод команды netstat -tan
- ![netstat output](images/Part_8_05.png)

Использованные опции:
1. -t перечислить tcp порты
2. -a перечислить все порты
3. -n команда покажет IP-адрес вместо хоста, номер порта вместо имени порта, UID вместо имени пользователя

Объяснение вывода:
1. Proto - название протокола
2. Recv-Q - количество отправленных пакетов
3. Send-Q - количество полученных пакетов
4. Local Address - локальный IP-адрес участвующий в соединении или связанный со службой, ожидающей входящие соединения (слушающей порт)
5. Foreign Address - внешний IP-адрес, участвующий в создании соединения
6. State - состояние соединения

Значение 0.0.0.0 означает "любой адрес", т.е в соединении могут использоваться все IP-адреса существующие на данном компьютере.
## Part 9. Установка и использование утилит top, htop
Вывод команды top
- ![top output](images/Part_9_01.png)

- Uptime: 4 min
- Количество пользователей: 1
- Общая загрузка системы: 0.10, 0.17, 0.09
- Общее количество процессов: 104
- Загрузка cpu: 0%
- Загрузка памяти: 1971.4
- pid процесса занимающего больше всего памяти: 657
- pid процесса, занимающего больше всего процессорного времени: 1243


Вывод команды htop
- ![htop output](images/Part_9_02.png)


Сортировка по PID
- ![htop pid](images/Part_9_03.png)


Сортировка по загрузке cpu
- ![htop cpu](images/Part_9_04.png)


Сортировка по загрузке памяти
- ![htop mem](images/Part_9_05.png)


Сортировка по времени процесса
- ![htop time+](images/Part_9_06.png)


Фильтр для sshd (команда внутри htop fn+f4)
- ![htop filter](images/Part_9_07.png)


Поиск процесса syslog (команда внутри htop fn+f3)
- ![htop search](images/Part_9_08.png)


Добавление нового вывода в htop (fn+f2)
- ![htop change output](images/Part_9_09.png)


Добавленный вывод hostname, clock и uptime
- ![htop new output](images/Part_9_10.png)
## Part 10. Использование утилиты fdisk
Вывод утилиты fdisk
- ![fdisk output](images/Part_10_01.png)

Вывод размера файла подкачки
- ![swap size](images/Part_10_02.png)

Название жесткого диска: /dev/sda

Размер жесткого диска: 26843545600 байт

Количество секторов: 52428800

Размер swap: 2GB
## Part 11. Использование утилиты df
Вывод команды df без опций
- ![df output](images/Part_11_01.png)

- Размер раздела: 11758760
- Размер занятого пространства: 4850472
- Размер свободного пространства: 6289180
- Процент использования: 44%
- Утилита df без применения опций выводит информацию о размере раздела в блоках по 512 байт

Вывод команды df с опциями -h, -T
- ![df options output](images/Part_11_02.png)

- Размер раздела: 12GB
- Размер занятого пространства: 4.7GB
- Размер свободного пространства: 6.0GB
- Процент использования: 44%
- Тип файловой системы для раздела: ext4.
## Part 12. Использование утилиты du
Вывод команды du -bh /home
- ![du /home output](images/Part_12_01.png)

Вывод команды du -bh /var
- ![du /var output](images/Part_12_02.png)

Вывод команды du -bh /var/log/*
- ![du /var/log/* output](images/Part_12_03.png)
## Part 13. Установка и использование утилиты ncdu
Установка утилиты ncdu
- ![ncdu installing](images/Part_13_01.png)

Размер папок home, var
- ![netstat output](images/Part_13_02.png)

Размер папки var/log
- ![netstat output](images/Part_13_03.png)
## Part 14. Работа с системными журналами
Последняя успешная авторизация. Запись найдена в файле /var/log/auth.log
- ![auth logs](images/Part_14_01.png)

- Время последней успешной авторизации: 17:46:36
- Имя пользователя: user
- Метод входа в систему: LOGIN

Перезапуск службы sshd, информация о ее перезапуске в логах
- ![sshd logs](images/Part_14_02.png)
## Part 15. Использование планировщика заданий CRON
Работа с CRON (комнада crontab -e)
- ![CRON 1](images/Part_15_01.png)

Установка задачи в CRON
- ![CRON 2](images/Part_15_02.png)

Вывод команды uptime с интервалом в 2 минуты
- ![CRON 3](images/Part_15_03.png)

Вывод списка задач командой crontab -l
- ![CRON 4](images/Part_15_04.png)\

Очистка списка задач, вывод списка
- ![CRON 5](images/Part_15_05.png)
