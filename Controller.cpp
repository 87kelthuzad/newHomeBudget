//
// Created by mateusz on 12.01.19.
//

#include "Controller.h"

Controller::Controller() {};
Controller::~Controller() {};

void Controller::mainLoop() {
    FileCSV fileCSV;
    bool isOpenFile = fileCSV.open(login.getPathToLoginsFile());
    if (!isOpenFile) {
        exit(EXIT_FAILURE);
    }

    fileCSV.read(login.getVectorAllLoginCSV());

}
