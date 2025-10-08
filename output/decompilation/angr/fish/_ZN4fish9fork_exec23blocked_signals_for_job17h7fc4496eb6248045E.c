long long fish::fork_exec::blocked_signals_for_job(unsigned long long a0, unsigned int *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if (a0.is_foreground())
    {
        return 0;
    }
    else if ((char)a0.wants_job_control())
    {
        return 0;
    }
    else
    {
        sigaddset(a1, 2);
        return sigaddset(a1, 3) & 0xffffffffffffff00 | 1;
    }
}
