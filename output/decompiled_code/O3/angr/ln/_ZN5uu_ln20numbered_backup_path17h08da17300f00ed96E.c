double uu_ln::numbered_backup_path::h08da17300f00ed96(long long a0, long long a1, long long a2)
{
    unsigned long v0;  // [sp-0x130], Other Possible Types: unsigned long long
    char v1;  // [bp-0x128]
    char v2;  // [bp-0x120]
    char v3;  // [bp-0x118]
    unsigned long v4;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x100]
    char v6;  // [bp-0xf8]
    char v7;  // [bp-0xf0]
    char v8;  // [bp-0xe8]
    unsigned long v9;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xd8]
    unsigned long long v11;  // [sp-0xd0]
    unsigned long long v12;  // [sp-0xc8]
    void* v13;  // [sp-0xc0]
    unsigned long long v16;  // r12
    unsigned long long v17;  // rbx
    int v18;  // xmm0
    int v19;  // ymm0

    v0 = 1;
    while (true)
    {
        v4 = &v0;
        v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v9 = &g_4efb58;
        v10 = 2;
        v13 = 0;
        v11 = &v4;
        v12 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v6, &v9);
        v16 = *((long long *)&v7);
        uu_ln::simple_backup_path::haa080293f24451c7(&v1, a1, a2, v16, *((long long *)&v8));
        if (*((long long *)&v6))
            __rust_dealloc(v16);
        v17 = *((long long *)&v2);
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v9, v17, *((long long *)&v3));
        if ((int)v9 == 2)
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h75f7b1879fd717cc(v10);
            a0->field_10 = *((long long *)&v3);
            v18 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v18;
            return (unsigned long long)(v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18);
        }
        v0 += 1;
        if (*((long long *)&v1))
            __rust_dealloc(v17);
    }
}
