#pragma once

#include "Core.h"

namespace BlackOpal {
	class BLACK_OPAL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Client permissions to define
	Application* CreateApplication();
}