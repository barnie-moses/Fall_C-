using namespace std;
class Temperature{
    private:
        double temp;
        char unit;

    public:
        Temperature(double temperature, char unit_ ) : temp{temperature}, unit{unit_}{}

    //convertion to Celsius

    double AsCelsius() const {
        if(unit == 'C') return temp;
        if(unit == 'K') return (temp-273.15);
        if(unit == 'R') return (temp-491.67)* 5.0/9.0;
        if(unit == 'F') return (temp-32) * 5.0/9.0;

        return temp;
    }

    double AsFahrenheit() const {
        return AsCelsius() * 9.0/5.0 +32;
    }

    double AsKelvin() const {
        return AsCelsius() + 273.15;
    }

    double AsRankine() const {
        return AsCelsius() * 9.0/5.0 + 491.67;
    }
};