long long uu_sort::get_rlimit::h790b745a9692d371(unsigned long long a0[2])
{
    unsigned int v0[3];  // [sp-0x48]
    char v1;  // [bp-0x30]
    unsigned int v2;  // [sp-0x18]
    unsigned long long v4;  // rcx
    void* v5;  // rax

    *((uint128_t *)v0) = 0;
    if (!getrlimit(7, v0))
    {
        v4 = *((long long *)&v0[0]);
        v5 = 0;
    }
    else
    {
        ::0x51cb50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(&v1, "Failed to fetch rlimit", 22);
        v2 = 2;
        v5 = alloc::boxed::Box$LT$T$GT$::new::hab49dd9f0ca1dd34(&v1);
        v4 = &g_5ffc90;
    }
    a0[1] = v4;
    a0[0] = v5;
    return a0;
}
