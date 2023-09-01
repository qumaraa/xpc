# xpc
XPC - A small and convenient tool for getting system information about GPU,CPU,RAM, written in C++ (Windows Only yet)
```cpp
int main() {
    GPUInfo gpu;
    bool init = gpu.Init();
    
    if (init != true) {
        std::cerr << "Could not initialize gpu!" << std::endl;
        return 1;
    }
    std::wcout << "GPU: " << gpu.GetDeviceStringW() << std::endl;
    std::cout << "Display FPS: " << gpu.GetDisplayFrequency() << std::endl;
    std::wcout << "ID: " << gpu.GetDeviceId();
    return 0;
}
```
