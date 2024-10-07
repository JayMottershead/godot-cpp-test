#pragma once

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot
{
	class DemoExample : public Sprite2D
	{
		GDCLASS(DemoExample, Sprite2D)

	protected:
		static void _bind_methods();

	public:
		DemoExample();
		~DemoExample();

		void _process(double delta) override;

		void set_amplitude(const double p_amplitude);
		double get_amplitude() const;

		void set_speed(const double p_speed);
		double get_speed() const;

	private:
		double time_passed;
		double time_emit;
		double amplitude;
		double speed;
	};
}
