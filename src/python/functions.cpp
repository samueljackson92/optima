#include "../functions.h"
#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace MetaOpt {
namespace Python {

namespace py = pybind11;

void init_functions(py::module &m) {
  m.def("rosen", &rosen,
        "Multi dimensional version of the rosenbrock function.");
  m.def("parabola", &parabola, "Multi dimensional parabolic function.");
}
}
}
