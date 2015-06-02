#ifdef __KERNEL__
#include <linux/module.h>
#else
#define EXPORT_SYMBOL(x) // x
#define KERN_ALERT
#define printk printf
#include <gplib.h>
#endif
#include <RtGpShm.h>	// Global Rt/Gp Externals and structures
#include <rtpmacapi.h>
#include "../Include/pp_proj.h"

double user_pid_ctrl(struct MotorData *Mptr);
EXPORT_SYMBOL(user_pid_ctrl);

void user_phase(struct MotorData *Mptr);
EXPORT_SYMBOL(user_phase);



