# Description
請參考process.c與kernel source內的資料結構  
列出每一個process的pid,uid,comm  
#### 繳交內容
1. module輸出
2. ps -ax -opid,uid,comm的輸出
3. module source code
 
#### 可參考資料結構與function
* include/linux/cred.h
* struct cred
* struct task_struct
* get_task_cred

#### module範例輸出
```bash
Mar 13 09:30:03 ubuntu kernel: [38683.148582] LOADING MODULE
Mar 13 09:30:03 ubuntu kernel: [38683.148584] PID: 1, UID: 0, PROCESS: init
Mar 13 09:30:03 ubuntu kernel: [38683.148585] PID: 2, UID: 0, PROCESS: kthreadd
Mar 13 09:30:03 ubuntu kernel: [38683.148586] PID: 3, UID: 0, PROCESS: kworker/0:0
Mar 13 09:30:03 ubuntu kernel: [38683.148587] PID: 4, UID: 0, PROCESS: kworker/0:0H
Mar 13 09:30:03 ubuntu kernel: [38683.148588] PID: 6, UID: 0, PROCESS: mm_percpu_wq
Mar 13 09:30:03 ubuntu kernel: [38683.148589] PID: 7, UID: 0, PROCESS: ksoftirqd/0
Mar 13 09:30:03 ubuntu kernel: [38683.148590] PID: 8, UID: 0, PROCESS: rcu_sched
Mar 13 09:30:03 ubuntu kernel: [38683.148591] PID: 9, UID: 0, PROCESS: rcu_bh
Mar 13 09:30:03 ubuntu kernel: [38683.148592] PID: 10, UID: 0, PROCESS: migration/0
Mar 13 09:30:03 ubuntu kernel: [38683.148592] PID: 11, UID: 0, PROCESS: watchdog/0
Mar 13 09:30:03 ubuntu kernel: [38683.148594] PID: 12, UID: 0, PROCESS: cpuhp/0
...
```

ps -ax -opid,uid,comm範例輸出
```bash
root@ubuntu:~/process# ps -ax -opid,uid,comm
  PID   UID COMMAND
    1     0 init
    2     0 kthreadd
    3     0 kworker/0:0
    4     0 kworker/0:0H
    6     0 mm_percpu_wq
    7     0 ksoftirqd/0
    8     0 rcu_sched
    9     0 rcu_bh
   10     0 migration/0
```
