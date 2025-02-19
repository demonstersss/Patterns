#include "Drob.h"
// Singleton
#include "Logger.h"


// Factory
#include "Symbol.h"
#include "ActionSymbol.h"
#include "ConditionSymbol.h"
#include "FactorySymbol.h"
#include "FactoryActionSymbol.h"
#include "FactoryConditionSymbol.h"

// Abstract Factory
#include "Figure2D.h"
#include "Reactangle2D.h"
#include "Ellipse2D.h"
#include "AbstractFactory2D.h"
#include "Factory2D.h"

// Builder
#include "Figure.h"
#include "Builder.h"


int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    //  ----------- SINGLETON START
    auto logger = new Logger();
    cout << logger->GetInstance();
    logger->LogInformation("");
    // ------------ SINGLETON END 



    // ------------ FACTORY START
    /*  --- Вызывает exception
    (new FactoryActionSymbol())->Create();
    (new FactoryConditionSymbol())->Create();
    */
    // ------------ FACTORY END

    
    
    // ------------ ABSTRACT FACTORY - ТОЛЬКО В ФАЙЛАХ-ЗАГОЛОВКАХ



    // ------------ BUILDER START
    auto builder = new Builder();
    builder->SetSize(10, 50).SetColor("black").SetBackground("white").Build();


    // ------------ BUIDER END



    cout << "\n\n";
    system("pause");
    return 0;
}









