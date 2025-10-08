long long uu_nproc::num_cpus_all()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = sysconf(83);
    if (v3 == 1)
    {
        return uu_nproc::available_parallelism();
    }
    else if (v3 > 1)
    {
        return v3;
    }
    else
    {
        return 1;
    }
}
