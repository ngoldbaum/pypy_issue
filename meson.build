project(
  'pypy_bug',
  'c',
)

py_mod = import('python')
py = py_mod.find_installation()

cc = meson.get_compiler('c')

srcs = ['pypy_bug/src/main.c']

py.install_sources(
  [
    'pypy_bug/__init__.py'
  ],
  pure: false
)

py.extension_module(
  '_main',
  srcs,
  install: true
)
