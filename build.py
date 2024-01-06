#!/usr/bin/python
# -*- coding: UTF-8 -*-
from builder import CMakeAndroidBuilder

if __name__ == "__main__":
    builder = CMakeAndroidBuilder("build", "output")
    builder.clean()
    builder.build()
    builder.install()
