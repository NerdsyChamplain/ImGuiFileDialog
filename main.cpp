//
// Created by joshua.scalia on 4/16/2024.
//
#ifndef IMGUI_DEFINE_MATH_OPERATORS
#define IMGUI_DEFINE_MATH_OPERATORS
#endif

#include <DemoDialog.h>

#include "imgui.h"
#include "imgui_internal.h"

#include "ImGuiFileDialog.h"
#include "CustomFont.cpp"
#include "Roboto_Medium.cpp"
//#include "HanyISentyPagodaRegular.cpp"
#include <cstdio>
#include <sstream>
#include <fstream>
#include <clocale>
#include <string>

#include <ImWidgets.h>

#if defined(__WIN32__) || defined(WIN32) || defined(_WIN32) || defined(__WIN64__) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
#define stat _stat
#include <ShlObj.h>  // for get known folders
#else                // UNIX
#include <sys/types.h>
#include <sys/stat.h>
#endif  // __WIN32__

#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/gl3w.h>  // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>  // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#elif defined(IMGUI_IMPL_OPENGL_ES3)
#include <GLES3/gl3.h>          // Use GL ES 3
#endif

int main()
{


    return 0;
}