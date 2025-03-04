long long uu_nproc::num_cpus_all::h7340e3b3a8ccdb85()
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = sysconf(83);
    if (v3 != 1)
        return (v3 > 1 ? v3 : 1);
    return uu_nproc::available_parallelism::h0a12aac02eb8d812();
}
