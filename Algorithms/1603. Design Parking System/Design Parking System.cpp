class ParkingSystem
{
private:
    int Big, Small, Medium;

public:
    ParkingSystem(int big, int medium, int small)
    {
        Big = big;
        Small = small;
        Medium = medium;
    }

    bool addCar(int carType)
    {
        if (carType == 1)
        {
            if (Big != 0)
            {
                --Big;
                return 1;
            }
        }
        if (carType == 2)
        {
            if (Medium != 0)
            {
                --Medium;
                return 1;
            }
        }
        if (carType == 3)
        {
            if (Small != 0)
            {
                return 1;
            }
        }
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */