//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-03-12.
//

#pragma once

#include <Poco/Net/HTTPServer.h>

#include <Poco/Util/ServerApplication.h>

class Server : public Poco::Util::ServerApplication {

protected:
    int main(const std::vector<std::string> &args) override;

};
