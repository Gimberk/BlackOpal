#include <BlackOpal.h>

class Sandbox : public BlackOpal::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

BlackOpal::Application* BlackOpal::CreateApplication() {
	return new Sandbox();
}