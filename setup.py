#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from setuptools import Extension
from setuptools import setup
from os import listdir


sources = []
for c_source_file in listdir():
    if c_source_file.endswith(".c"):
        print(f"    C Source file = { c_source_file }")
        sources.append(c_source_file)


setup(
    ext_modules = [
        Extension(
            name               = "faster_than_requests",
            sources            = sources,
            extra_compile_args = ["-flto", "-ffast-math", "-march=native", "-O3"],
            extra_link_args    = ["-flto", "-ffast-math", "-march=native", "-O3", "-s"],
            include_dirs       = ["."],
        )
    ]
)
