#include "Arduino.h"
#include "Wire.h"

#include <PicI2C.h> // https://github.com/MXPicture/arduino-library-i2c-soft
using pic_i2c::SoftI2C;

// initialize I2C
int VL53L0X_i2c_init(TwoWire *i2c);
int VL53L0X_write_multi(uint8_t deviceAddress, uint8_t index, uint8_t *pdata,
                        uint32_t count, TwoWire *i2c);
int VL53L0X_read_multi(uint8_t deviceAddress, uint8_t index, uint8_t *pdata,
                       uint32_t count, TwoWire *i2c);
int VL53L0X_write_byte(uint8_t deviceAddress, uint8_t index, uint8_t data,
                       TwoWire *i2c);
int VL53L0X_write_word(uint8_t deviceAddress, uint8_t index, uint16_t data,
                       TwoWire *i2c);
int VL53L0X_write_dword(uint8_t deviceAddress, uint8_t index, uint32_t data,
                        TwoWire *i2c);
int VL53L0X_read_byte(uint8_t deviceAddress, uint8_t index, uint8_t *data,
                      TwoWire *i2c);
int VL53L0X_read_word(uint8_t deviceAddress, uint8_t index, uint16_t *data,
                      TwoWire *i2c);
int VL53L0X_read_dword(uint8_t deviceAddress, uint8_t index, uint32_t *data,
                       TwoWire *i2c);

int VL53L0X_SoftWire_i2c_init(SoftI2C* i2c);
int VL53L0X_SoftWire_write_multi(uint8_t deviceAddress, uint8_t index, uint8_t *pdata,
                        uint32_t count, SoftI2C* i2c);
int VL53L0X_SoftWire_read_multi(uint8_t deviceAddress, uint8_t index, uint8_t *pdata,
                       uint32_t count, SoftI2C* i2c);
int VL53L0X_SoftWire_write_byte(uint8_t deviceAddress, uint8_t index, uint8_t data,
                       SoftI2C* i2c);
int VL53L0X_SoftWire_write_word(uint8_t deviceAddress, uint8_t index, uint16_t data,
                       SoftI2C* i2c);
int VL53L0X_SoftWire_write_dword(uint8_t deviceAddress, uint8_t index, uint32_t data,
                        SoftI2C* i2c);
int VL53L0X_SoftWire_read_byte(uint8_t deviceAddress, uint8_t index, uint8_t *data,
                      SoftI2C* i2c);
int VL53L0X_SoftWire_read_word(uint8_t deviceAddress, uint8_t index, uint16_t *data,
                      SoftI2C* i2c);
int VL53L0X_SoftWire_read_dword(uint8_t deviceAddress, uint8_t index, uint32_t *data,
                       SoftI2C* i2c);
