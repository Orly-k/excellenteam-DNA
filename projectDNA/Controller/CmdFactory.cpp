//
// Created by kierszen on 12/30/18.
//

#include "CmdFactory.h"
#include "NewCmd.h"


SharedPtr<ICmd> CmdFactory::get_cmd(std::string cmd)
{
    if (cmd == "new")
    {
        NewCmd *c = new NewCmd();
        SharedPtr<ICmd> ptr(c);

        return ptr;
    }
}
