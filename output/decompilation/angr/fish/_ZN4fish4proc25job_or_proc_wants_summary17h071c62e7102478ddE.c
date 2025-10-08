char fish::proc::job_or_proc_wants_summary(unsigned long long a0[5])
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]

    if ((char)fish::proc::job_wants_summary(a0))
        return 1;
    v0 = a0[3];
    v1 = a0[4] * 224 + a0[3];
    v0.any(a0);
    return 1;
}
