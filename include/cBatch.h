/*  TODO

*/

#ifndef CBATCH_H
#define CBATCH_H

#include <iostream>
#include <fstream>
#include "CommandList.h"
#include "Execution.h"

class cBatch : public Execution
{
    public:
        virtual void execute();
    protected:
    private:
};

#endif // CBATCH_H
