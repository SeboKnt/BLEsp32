#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <errno.h>

int main(void)
{
	while (true) {
		k_msleep(60000);
		printk("Hello World again from %s\n", CONFIG_BOARD);
	}
	return 0;
}