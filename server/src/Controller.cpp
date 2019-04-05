//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-03.
//

#include "../include/Controller.hpp"

Controller::Controller() {

}

Controller::~Controller() {

}

void Controller::index() {
    std::cout << "index()" << std::endl;
}

void Controller::show() {
    std::cout << "show()" << std::endl;
}

void Controller::create() {
    std::cout << "create()" << std::endl;
}

void Controller::update() {
    std::cout << "update()" << std::endl;
}

void Controller::destroy() {
    std::cout << "destroy()" << std::endl;
}