
#define MICROPY_HW_BOARD_NAME       "CC3D Mini Revolution"
#define MICROPY_HW_MCU_NAME         "STM32F405RG"
#define MICROPY_PY_SYS_PLATFORM     "pyboard"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (0)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (1)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_CAN       (0)

// HSE is 8MHz
#define MICROPY_HW_CLK_PLLM (8)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)
#define MICROPY_HW_CLK_LAST_FREQ (1)

// UART config
#define MICROPY_HW_UART1_PORT (GPIOA)
#define MICROPY_HW_UART1_PINS (GPIO_PIN_9 | GPIO_PIN_10)
#define MICROPY_HW_UART2_PORT (GPIOA)
#define MICROPY_HW_UART2_PINS (GPIO_PIN_2 | GPIO_PIN_3)
#define MICROPY_HW_UART2_RTS  (GPIO_PIN_1)
#define MICROPY_HW_UART2_CTS  (GPIO_PIN_0)
#define MICROPY_HW_UART3_PORT (GPIOB)
#define MICROPY_HW_UART3_PINS (GPIO_PIN_10 | GPIO_PIN_11)
#define MICROPY_HW_UART4_PORT (GPIOA)
#define MICROPY_HW_UART4_PINS (GPIO_PIN_0 | GPIO_PIN_1)
#define MICROPY_HW_UART5_TX_PORT (GPIOC)
#define MICROPY_HW_UART5_TX_PIN  (GPIO_PIN_12)
#define MICROPY_HW_UART5_RX_PORT (GPIOD)
#define MICROPY_HW_UART5_RX_PIN  (GPIO_PIN_2)
#define MICROPY_HW_UART6_PORT (GPIOC)
#define MICROPY_HW_UART6_PINS (GPIO_PIN_6 | GPIO_PIN_7)

// I2C busses
//I2C1 used for onboard Magnetometer(HMC5883) and Barometer(MS5611)
#define MICROPY_HW_I2C1_SCL (pin_B8)
#define MICROPY_HW_I2C1_SDA (pin_B9)
#define MICROPY_HW_I2C2_SCL (pin_B10)
#define MICROPY_HW_I2C2_SDA (pin_B11)

// SPI busses
//SPI1 used for onboard Accelerometer/Gyroscope (MPU-6000)
#define MICROPY_HW_SPI1_NSS  (pin_A4) // MPU-6000
#define MICROPY_HW_SPI1_SCK  (pin_A5)
#define MICROPY_HW_SPI1_MISO (pin_A6)
#define MICROPY_HW_SPI1_MOSI (pin_A7)
//SPI3 on port 4 shared with onboard Flash (M25P16)
//Flash CS is pin_B3
#define MICROPY_HW_SPI3_NSS  (pin_A15)
#define MICROPY_HW_SPI3_SCK  (pin_C10)
#define MICROPY_HW_SPI3_MISO (pin_C11)
#define MICROPY_HW_SPI3_MOSI (pin_C12)

// Add switch on port 1
// USRSW has no pullup or pulldown, and pressing the switch makes the input go low
#define MICROPY_HW_USRSW_PIN        (pin_C1)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// Revo has 2 LEDs
#define MICROPY_HW_LED1             (pin_B5) // blue
#define MICROPY_HW_LED2             (pin_B4) // green
#define MICROPY_HW_LED1_PWM         { TIM3, 3, TIM_CHANNEL_2, GPIO_AF2_TIM3 }
#define MICROPY_HW_LED2_PWM         { TIM3, 3, TIM_CHANNEL_1, GPIO_AF2_TIM3 }
#define MICROPY_HW_LED_INVERTED     (1)
#define MICROPY_HW_LED_OTYPE        (GPIO_MODE_OUTPUT_PP)
#define MICROPY_HW_LED_ON(pin)      (pin->gpio->BSRRH = pin->pin_mask)
#define MICROPY_HW_LED_OFF(pin)     (pin->gpio->BSRRL = pin->pin_mask)

// USB config
//#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_C5) - non standard pin

// Other pins used
//MPU-6000 INT = pin_C4
//SPI Flash CS = pin_B3
//HMC5883 DRDY = pin_B7
//UART1 RX inverter = pin_C0

