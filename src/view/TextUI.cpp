#include "TextUI.h"

namespace view
{

    using namespace controller;
    using namespace data;

    TextUI::TextUI()
    {
        /* Controller needs:
            - IField
            -
        From Factory!

        Simplest way is getController method.
        */

        factory = new GameFactory;
        field = factory->getDefaultField();
    }

    TextUI::~TextUI()
    {
        delete factory;
        delete field;
    }

    void TextUI::getInput()
    {

    }

    std::string TextUI::toString()
    {
        return field->toString();
    }

}
