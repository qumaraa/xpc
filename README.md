## XPC
A small and convenient tool for getting system information about GPU/CPU/RAM written in C++.

[![Discussions](https://img.shields.io/github/license/dec0dOS/amazing-github-template.svg?style=flat-square)](https://github.com/ynwqmv/netprotocol/discussions/3)
[![Network](https://img.shields.io/badge/XPC-0.1.0-red.svg)]()
![](https://camo.githubusercontent.com/a080948f1963a87a71216a884b318e6d84825d4cb0be5b242b3153e5b096486c/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f432b2b2d536f6c7574696f6e732d626c75652e7376673f7374796c653d666c6174266c6f676f3d63253242253242)
---

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

# ⚙️ Configurations
