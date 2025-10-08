char fish::proc::Job::is_completed(unsigned long long a0[5])
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    if (!a0[4])
        core::panicking::panic("assertion failed: !self.processes().is_empty()Run job %d (%ls), %ls, %lsUNCOMPLETEDCOMPLETEDNON-INTERACTIVEINTERACTIVEFailed to send SIGCONT to procs in job %lskillpg(%d, %s)", 46, &g_14df3b0); /* do not return */
    v0 = a0[3];
    v1 = a0[4] * 224 + a0[3];
    return v0.all();
}
