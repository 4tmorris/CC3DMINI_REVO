#include STM32_HAL_H

void CC3DMINI_REVO_board_early_init(void) {

    __GPIOA_CLK_ENABLE();
    __GPIOB_CLK_ENABLE();

    // Turn off JTAG AF on PB3 and PA15
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.Speed = GPIO_SPEED_HIGH;
    GPIO_InitStructure.Mode = GPIO_MODE_INPUT;
    GPIO_InitStructure.Pull = GPIO_NOPULL;

    GPIO_InitStructure.Pin = GPIO_PIN_15;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStructure);
    GPIO_InitStructure.Pin = GPIO_PIN_3;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStructure);
}
