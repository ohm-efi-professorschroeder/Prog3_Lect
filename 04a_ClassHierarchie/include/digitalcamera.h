#include <camera.h>

class DigitalCamera : public Camera
{
public:
    DigitalCamera(int year, std::string make, std::string model, int megapixel);
    virtual ~DigitalCamera(){};
    void takePhoto() override;
private:
    int megapixel_;
};