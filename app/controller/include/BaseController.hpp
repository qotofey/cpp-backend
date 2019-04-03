//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-01.
//

#pragma once

#include "../../../server/include/Handler.hpp"

class BaseController {

public:
    BaseController();
    ~BaseController();

    Handler *index();
//    Handler *show();
//    Handler create();
//    Handler update();
//    Handler destroy();

};
