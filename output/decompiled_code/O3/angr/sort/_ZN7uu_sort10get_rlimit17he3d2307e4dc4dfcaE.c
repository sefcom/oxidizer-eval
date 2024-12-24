long long uu_sort::get_rlimit::he3d2307e4dc4dfca(unsigned long long a0[2])
{
    int v0;  // [sp-0x48], Other Possible Types: unsigned int (32 bits)[3]
    char v1;  // [bp-0x30]
    unsigned int v2;  // [sp-0x18]
    unsigned long long v4;  // rcx
    void* v5;  // rax

    *((int128_t *)&v0) = 0;
    if (!getrlimit(7, v0))
    {
        v4 = *((long long *)&v0[0]);
        v5 = 0;
    }
    else
    {
        ::0x51bb90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3ba68681839953e5(&v1, "Failed to fetch rlimit", 22);
        v2 = 2;
        v5 = alloc::boxed::Box$LT$T$GT$::new::h7c455a6ef5a83858(&v1);
        v4 = &g_5ff168;
    }
    a0[1] = v4;
    a0[0] = v5;
    return a0;
}
