#pragma once
class MathsExperiment
{
public:
	float add(const float& a, const float& b)
	{
		return a + b;
	};
	float subtract(const float& a, const float& b)
	{
		return a - b;
	};
	float multiply(const float& a, const float& b)
	{
		return a * b;
	};
	float divide(const float& a, const float& b)
	{
		if (a==0||b==0)
			return 0;
		return a / b;
	};
	MathsExperiment()
	{

	};
};

