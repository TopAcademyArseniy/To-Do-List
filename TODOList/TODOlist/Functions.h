#pragma once
#include <string>
#include <iostream>
using namespace std;

void show_menu();//����� ����

void add_note( string & new_note);//���������� �������

void see_all_notes();//�������� ��� �������

string* find_one_note(string&note_to_find, int &n_count);//����� �������

string* all_notes(int &count);

void remove_one_note(string* all_notes_arr, int &count,int& choice);

void remove_all_notes();