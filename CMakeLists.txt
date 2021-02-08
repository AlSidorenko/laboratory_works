cmake_minimum_required(VERSION 3.17)
project(laboratory_works_ASD C)

set(CMAKE_C_STANDARD 99)

    #Lab_003_Binary_Trees
set(Binary_Trees lab_003_Binary_Trees/binary_tree.c)
add_executable(binary_tree ${Binary_Trees})

    #Lab_004_Linked_list
set(Linked_list lab_004_Linked_List/linked_list.c)
add_executable(linked_list ${Linked_list})
