#pragma once

#ifndef SPDLOG_ACTIVE_LEVEL
#if _DEBUG
#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE
#else
#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_ERROR
#endif
#endif

#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <spdlog/spdlog.h>