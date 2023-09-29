#ifndef _PROCESSESINFO_H_
#define _PROCESSESINFO_H_

struct processes_info {
    int num_processes;
    int pids[NPROC];
    int times_scheduled[NPROC];
    int tickets[NPROC];
};

#endif //_PROCESSESINFO_H_
