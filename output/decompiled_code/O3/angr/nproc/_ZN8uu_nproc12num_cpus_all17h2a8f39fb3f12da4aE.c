long long uu_nproc::num_cpus_all::h2a8f39fb3f12da4a(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx

    v0 = v2;
    v3 = sysconf(83);
    if (v3 == 1)
    {
        return uu_nproc::available_parallelism::h4619c9691f49919a(v4, v5, v6);
    }
    else if (v3 <= 1)
    {
        return 1;
    }
    else
    {
        return v3;
    }
}
