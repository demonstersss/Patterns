#pragma once
class FactoryActionSymbol: FactorySymbol
{
private:

public:
	void Create() {
		auto* actionSymbol = new ActionSymbol();
		actionSymbol->Draw();
	}
};

