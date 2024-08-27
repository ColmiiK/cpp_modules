<div align="center">
	C++ Modules
    <br>
    <a href='https://profile.intra.42.fr/users/alvega-g' target="_blank">
        <img alt='42 (oscuro)' src='https://img.shields.io/badge/Málaga-black?style=flat&logo=42&logoColor=white'/>
    </a>
</div>

---

# General rules

__Compiling__
- Compile your code with ``c++`` and the flags ``-Wall -Wextra -Werror``
- Your code should still compile if you add the flag ``-std=c++98``

__Formatting and naming conventions__
- The exercise directories will be named this way: ``ex00``, ``ex01``, ``...`` , ``exn``
- Name your files, classes, functions, member functions and attributes as required in
the guidelines.
- Write class names in __UpperCamelCase__ format. Files containing class code will
always be named according to the class name. For instance:
``ClassName.hpp``/``ClassName.h``, ``ClassName.cpp``, or ``ClassName.tpp``. Then, if you
have a header file containing the definition of a class "BrickWall" standing for a
brick wall, its name will be ``BrickWall.hpp``.
- Unless specified otherwise, every output messages must be ended by a new-line
character and displayed to the standard output.
- _Goodbye Norminette!_ No coding style is enforced in the C++ modules. You can
follow your favorite one. But keep in mind that a code your peer-evaluators can’t
understand is a code they can’t grade. Do your best to write a clean and readable
code.

__Allowed/Forbidden__

You are not coding in C anymore. Time to C++! Therefore:
- You are allowed to use almost everything from the standard library. Thus, instead
of sticking to what you already know, it would be smart to use as much as possible
the C++-ish versions of the C functions you are used to.
- However, you can’t use any other external library. It means C++11 (and derived
forms) and ``Boost`` libraries are forbidden. The following functions are forbidden
too: ``*printf()``, ``*alloc()`` and ``free()``. If you use them, your grade will be 0 and
that’s it.
- Note that unless explicitly stated otherwise, the ``using namespace <ns_name>`` and
``friend`` keywords are forbidden. Otherwise, your grade will be -42.
- __You are allowed to use the STL in the Module 08 and 09 only__. That means:
no __Containers__ (vector/list/map/and so forth) and no __Algorithms__ (anything that
requires to include the ``<algorithm>`` header) until then. Otherwise, your grade will
be -42.
A few design requirements
- Memory leakage occurs in C++ too. When you allocate memory (by using the __new__
keyword), you must avoid __memory leaks__.
- From Module 02 to Module 09, your classes must be designed in the __Orthodox
Canonical Form, except when explicitely stated otherwise__.
- Any function implementation put in a header file (except for function templates)
means 0 to the exercise.
- You should be able to use each of your headers independently from others. Thus,
they must include all the dependencies they need. However, you must avoid the
problem of double inclusion by adding __include guards__. Otherwise, your grade will
be 0.

__Read me__

- You can add some additional files if you need to (i.e., to split your code). As these
assignments are not verified by a program, feel free to do so as long as you turn in
the mandatory files.
- Sometimes, the guidelines of an exercise look short but the examples can show
requirements that are not explicitly written in the instructions.
- Read each module completely before starting! Really, do it.
- By Odin, by Thor! Use your brain!!!
