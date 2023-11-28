#include <zmk/led_widgets.h>
#include <zmk/endpoints_types.h>

const led_widget_t led_widgets[LED_EVENT_SIZE][6] = {
    [LED_EVENT_BOOT] = {
        WIDGET(0, priority = 100, period = 0, cmd_len = 3, CMD(100, 0, 0, 50), WAIT(100), CMD(100, 0, 0, 50)),
    },
    [LED_EVENT_LAYER] = {
        WIDGET(1, priority = 20, period = 0, cmd_len = 1, CMD(0, 20, 12, 0)),
        WIDGET(2, priority = 20, period = 0, cmd_len = 1, CMD(0, 0, 0, 20)),
        WIDGET(3, priority = 20, period = 0, cmd_len = 1, CMD(0, 0, 20, 0)),
        WIDGET(4, priority = 20, period = 0, cmd_len = 1, CMD(0, 20, 0, 0)),
        WIDGET(5, priority = 20, period = 0, cmd_len = 1, CMD(0, 10, 37, 34)),
        WIDGET(6, priority = 20, period = 0, cmd_len = 1, CMD(0, 50, 15, 24)),
    },
    [LED_EVENT_OUTPUT] = {
        WIDGET(ZMK_ENDPOINT_BLE, priority = 100, period = 0, cmd_len = 1, CMD(200, 0, 0, 100)),
        WIDGET(ZMK_ENDPOINT_USB, priority = 100, period = 0, cmd_len = 1, CMD(200, 0, 75, 0)),
    },
    [LED_EVENT_PROFILE] = {
        WIDGET(0, priority = 90, period = 0, cmd_len = 3, CMD(50, 0, 0, 50), WAIT(150), CMD(100, 100, 0, 0)),
        WIDGET(1, priority = 90, period = 0, cmd_len = 3, CMD(50, 0, 0, 50), WAIT(150), CMD(100, 0, 100, 0)),
        WIDGET(2, priority = 90, period = 0, cmd_len = 3, CMD(50, 0, 0, 50), WAIT(150), CMD(100, 0, 0, 100)),
    },
};