#!/usr/bin/env python


from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

setup(
    name = 'pypig',
    cmdclass = {'build_ext': build_ext},
    ext_modules = [
        Extension('pypig', ['pypig.pyx'],
                  define_macros=[('NDEBUG', '1')],
                  extra_compile_args=['/MT'],
                  extra_link_args=['/MANIFEST', '/LTCG', '/DEBUG'],
                  library_dirs=['../../libs/utilitieslib/x64/opt debug', '../../3rdparty/bin/x64'],
                  libraries=['utilitieslib64', 'user32', 'advapi32', 'gdi32', 'shell32'],
                  include_dirs=['../../libs/utilitieslib'],
                  ),
    ],
)

