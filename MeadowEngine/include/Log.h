#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

#ifndef MEADOW_LOG_H
#define MEADOW_LOG_H
namespace Meadow {
	class Log {
	
	// Static Methods
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetLogger() { return s_Logger; }

	// Member Variables
	private:
		static std::shared_ptr<spdlog::logger> s_Logger;
	};
}


// Logging Macros for Debuging
#ifdef ENGINE_DEBUG

#define MDW_ERROR(...) ::Meadow::Log::GetLogger()->error(__VA_ARGS__)
#define MDW_WARN(...) ::Meadow::Log::GetLogger()->warn(__VA_ARGS__)
#define MDW_INFO(...) ::Meadow::Log::GetLogger()->info(__VA_ARGS__)
#define MDW_TRACE(...) ::Meadow::Log::GetLogger()->trace(__VA_ARGS__)

#else
#define MDW_ERROR(...)
#define MDW_WARN(...)
#define MDW_INFO(...)
#define MDW_TRACE(...)

#endif // !ENGIEN_DEBUG

#endif // !MEADOW_LOG_H
