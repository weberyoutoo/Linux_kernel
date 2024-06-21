#include <linux/init.h>
#include <linux/module.h>
 
//#include <linux/sched/signal.h>
#include <linux/sched.h>
 
MODULE_LICENSE("Dual BSD/GPL");
 
struct task_struct *task;  //Structure defined in sched.h for tasks/processes
struct task_struct *task_child; // Structure needed to iterate through task children
struct list_head *list; //Structure needed to iterate through the list in each task->children struct
struct cred *task_cred;
 
static int process_init(void)
{
	printk(KERN_INFO "%s","LOADING MODULE\n");
	for_each_process( task ){  // for_each_process() MACRO for iterating through each task in the os located in linux/sched/signal.h
		task_cred = task->cred;
		printk(KERN_INFO "PID: %d, UID: %d, PROCESS: %s\n", task->pid, task_cred->uid, task->comm); // log parent id/executable name/state
	}

	return 0;
}
 
static void process_exit(void)
{
	printk(KERN_INFO "%s","REMOVING MODULE\n");
}
 
module_init(process_init);
module_exit(process_exit);
