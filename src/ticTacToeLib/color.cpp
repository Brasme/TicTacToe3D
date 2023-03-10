#include "ticTacToe3D/color.h"
#include "ticTacToe3D/field.h"
#include <sstream>

namespace ttt {
    uint8_t Color::nameToIdx(const ColorName& c) {
        switch (c) {
        case ColorName::None: return 0;
        case ColorName::Yellow: return 1;
        case ColorName::Green: return 2;
        case ColorName::Blue: return 3;
        case ColorName::Red: return 4;
        }
        return 0;
    }

    Colors::Colors(const std::string& c)
    {
        for (size_t idx = 0;idx < 3 && idx < c.length();++idx)
            colors[idx] = Color(c[idx]);
    }

    char Color::toChar() const {
        static const char* colorIdxChar = "-ygbr";
        return idx>=5?'-':colorIdxChar[idx];
    }
    
    Color::operator ColorName() const {
        static const ttt::ColorName idxToColorName[5] = { ColorName::None,ColorName::Yellow,ColorName::Green,ColorName::Blue,ColorName::Red };
        return idx>=5?ColorName::None:idxToColorName[idx];
    }

    std::ostream &operator<<(std::ostream &os, const Color &c) { os << c.toChar(); return os; }

    Colors::Colors(const Field& f) {
        *this = f.toColors();
    }

    std::string Colors::toStr() const
    {
        std::stringstream ss;
        ss << *this;
        return ss.str();
    }

    std::ostream& operator<<(std::ostream& os, const Colors& c)
    {
        os << c.colors[0] << c.colors[1] << c.colors[2];
        return os;
    }


}
