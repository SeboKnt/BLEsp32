#include <zephyr/kernel.h>
#include <zephyr/device.h>

int main(void)
{
	while (true) {
		k_msleep(1000);
		printk("Hello World again from %s\n", CONFIG_BOARD);
	}
	
	return 0;
}
