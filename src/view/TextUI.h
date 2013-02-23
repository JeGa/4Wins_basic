#ifndef TEXTUI_H
#define TEXTUI_H

#include "GameFactory.h"
#include "IField.h"
#include <string>

namespace view
{

    class TextUI
    {
        private:
            controller::GameFactory *factory;
            data::IField *field;
        public:
            TextUI();
            ~TextUI();
            void getInput();
            std::string toString();
    };

}

#endif // TEXTUI_H
