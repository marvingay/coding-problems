class ParkingSystem {
    vector<int> lot;
public:
    ParkingSystem(int big, int medium, int small) {
        lot = {big, medium, small};
    }
    
    bool addCar(int carType) {
        return lot[carType-1]-- > 0;
    }
};