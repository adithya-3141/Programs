class ParkingSystem {
public:
    int big;
    int medium;
    int small;
    
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        
        if (carType == 1 && big != 0){
            big -= 1;
            return true;
        }
        
        else if (carType == 1 && big == 0){
            return false;
        }
        
        else if (carType == 2 && medium != 0){
            medium -= 1;
            return true;
        }
        
        else if (carType == 2 && medium == 0){
            return false;
        }
        
        else if (carType == 3 && small != 0){
            small -= 1;
            return true;
        }
        
        else if (carType == 3 && small == 0){
            return false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */