#pragma once
struct user;
struct Time;
void file_write();
void file_read();
void surname_write(char surname[20]);
void time_managing(Time *start_time, Time *end_time);
void time_write(int* start_hours, int* start_minutes);
bool time_check(Time *new_time);
int task_check();
void show_special_persons();
//void time_enter(char &time_arr, user user_info);