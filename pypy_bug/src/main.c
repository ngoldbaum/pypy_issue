#include <Python.h>

static PyObject*
test_for_bug(PyObject *self, PyObject *arg)
{
  
  PyObject *obj1 = PyUnicode_FromStringAndSize("Hello", 5);

  PyObject_Print(obj1, stdout, 0);

  PyObject *obj2 = PyUnicode_FromStringAndSize(NULL, 0);

  PyObject_Print(obj2, stdout, 0);

  return obj2;
}

static PyMethodDef methods[] = {
  {"test_for_bug", test_for_bug, METH_NOARGS, ""},
  {NULL, NULL, 0, NULL},
};

static struct PyModuleDef moduledef = {
  PyModuleDef_HEAD_INIT,
  .m_name = "pypy_bug_main",
  .m_size = -1,
  .m_methods = methods,
};

PyMODINIT_FUNC
PyInit__main(void)
{

  PyObject *m = PyModule_Create(&moduledef);

  return m;
}
