#pragma once
class FactoryConditionSymbol: FactorySymbol
{
private:

public:
	void Create() {
		auto* actionSymbol = new ActionSymbol();
		actionSymbol->Draw();
	}
};

