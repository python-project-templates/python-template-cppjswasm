#include <emscripten/bind.h>

#include "python-template-cppjswasm/example.hpp"

using namespace emscripten;

EMSCRIPTEN_BINDINGS(python_template_cppjswasm) {
  function("add", &add);

  class_<Example>("Example")
    .constructor<std::string>()
    .property("stuff", &Example::stuff);
}
