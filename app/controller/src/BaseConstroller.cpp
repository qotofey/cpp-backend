//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-02.
//

#include "../include/BaseController.hpp"

BaseController::BaseController(Handler *handler) {
    m_handler = handler;

}

BaseController::~BaseController() {
    m_handler->cleanHandler();
    delete m_handler;
}

Handler *BaseController::index() {
//    m_handler->getResponse()->setStatus(Poco::Net::HTTPResponse::HTTP_OK);
//    m_handler->getResponse()->setContentType("application/json");
//    m_handler->send() << ", { page: Handler }";
    return m_handler;
}