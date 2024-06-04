#pragma once

#ifdef BP_WINDOWS

extern BlackOpal::Application* BlackOpal::CreateApplication();
int main(int argc, char** argv) {
	BlackOpal::Application* app = BlackOpal::CreateApplication();
	app->Run();
	delete app;
}
#endif