cmake_minimum_required(VERSION 3.13)
project(HomeBudget)

set(CMAKE_CXX_STANDARD 17)

add_executable(HomeBudget main.cpp Login.cpp Login.h Controller.cpp Controller.h Ui.cpp Ui.h FileCSV.cpp FileCSV.h Readable.cpp Readable.h Transaction.cpp Transaction.h User.cpp User.h LocalTime.cpp LocalTime.h)