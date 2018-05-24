#pragma once
#include "Math/matrix4.h"
#include "Math/vector2.h"
#include "Math/vector3.h"
#include "s00nya_defs.h"

namespace s00nya 
{

	class Renderer;

	struct S00NYA_API Transform2D
	{
		Vector3 position;
		Float rotation;
		Vector2 scale;
		Vector2 pivot;

		Transform2D();
		Transform2D(Vector3 pos, Vector2 sc, Float rot);

	private:
		Matrix4 GetModalMatrix() const;

		friend class Renderer;

		// TO-DO : Other methods required
	};

}