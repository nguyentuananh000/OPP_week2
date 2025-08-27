#include <iostream>
using namespace std;
class Laptop {
    private:
    string brand;
    string model;
    string gpu;
    int ram; // dung lượng ram tính bằng GB
    int storage; // Dung lượng ram tính bằng GB
    public:
    void setBrand(string _brand) {brand = _brand;}
    void setModel(string _model) {model = _model;}
    void setGpu(string _gpu) {gpu = _gpu;}
    void setRam(int _ram) {ram = _ram;}
    void setStorage(int _storage) {storage = _storage;}
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "GPU: " << gpu << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }
    //kiểm tra ram, nếu không đủ yêu cầu sẽ không chạy được phần mềm
    void checkRAM(int requiredRAM) {
        if (ram >= requiredRAM) {
        cout << "Laptop này đủ ram để chạy phần mềm." << endl;
    } else {
        cout << "Laptop này không đủ ram để chạy phần mềm."<<endl; 
        }
    }//nếu gpu có tiền tố là "GTX" hoặc "RTX" thì là dòng card phù hợp để chơi game
    void checkGPU(string requiredGPU){
        if (gpu.find("RTX") != string::npos || gpu.find("GTX") != string::npos) {
            cout << "GPU mạnh, phù hợp gaming!" << endl;
        } else {
            cout << "GPU cơ bản, chỉ phù hợp văn phòng." << endl;
        }
    }//nâng cấp ram, cập nhật ram đã nâng cấp
    void upgradeRAM(int additionalRAM){
        ram += additionalRAM;
        cout << "Đã nâng cấp RAM thêm " << additionalRAM << "GB. Tổng RAM: " << ram << "GB" << endl;
    }
};
int main() {
    Laptop laptop1;
    laptop1.setBrand ("Dell");
    laptop1.setModel ("XPS 36");
    laptop1.setRam (8);
    laptop1.setStorage (256);
    laptop1.setGpu ("Intel UHD Graphics");
    int min_ram = 16;
    
    //hiển thị thông tin máy
    laptop1.displayInfo();
    //kiểm tra máy có đủ ram để chạy phần mềm hay ko
    laptop1.checkRAM(min_ram);
    //kiểm tra GPU
    laptop1.checkGPU("");
    //nâng cấp RAM
    laptop1.upgradeRAM(8);
    //kiểm tra lại sau nâng cấp
    laptop1.checkRAM(min_ram);
    
    return 0;
}