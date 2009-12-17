#pragma once

#include <vector>

#include "Expr.h"
#include "Macros.h"
#include "Object.h"
#include "Ref.h"
#include "String.h"

namespace Finch
{
    using std::vector;
    
    Ref<Object> NilWhileDo(Ref<Object> thisRef, Environment & env,
                           String message, const vector<Ref<Object> > & args);
    Ref<Object> NilIfThen(Ref<Object> thisRef, Environment & env,
                           String message, const vector<Ref<Object> > & args);
    Ref<Object> NilIfThenElse(Ref<Object> thisRef, Environment & env,
                          String message, const vector<Ref<Object> > & args);
}