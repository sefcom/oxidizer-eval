long long uu_sort::Output::new::h1139e36d8926c00a(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0xdc]
    unsigned long long v1;  // [sp-0xd8]
    unsigned int v2;  // [bp-0xd0]
    char v3;  // [sp-0xcf]
    char v4;  // [bp-0xcc], Other Possible Types: unsigned short
    char v5;  // [bp-0xc8]
    char v6;  // [bp-0xc4]
    char v7;  // [bp-0xc0]
    char v8;  // [bp-0xb8]
    unsigned short v9;  // [sp-0xb7]
    char v10;  // [sp-0xb5]
    unsigned int v11;  // [sp-0xb4]
    int v12;  // [sp-0xb0]
    int v13;  // [sp-0xa0]
    int v14;  // [sp-0x90]
    unsigned long long v15;  // [sp-0x80]
    char v16;  // [bp-0x78]
    char v17;  // [bp-0x77]
    char v18;  // [bp-0x75]
    char v19;  // [bp-0x74]
    char v20;  // [bp-0x70]
    char v21;  // [bp-0x60]
    char v22;  // [bp-0x50]
    char v23;  // [bp-0x40]
    int v24;  // [sp-0x38]
    unsigned long long v26;  // r12
    unsigned int v27;  // ebp

    v26 = 0x8000000000000000;
    if (a1)
    {
        v1 = 0x1b600000000;
        v2 = 0;
        v4 = 0;
        v3 = 1;
        v4 = 1;
        std::fs::OpenOptions::open::h9a3673fc2fbc0946(&v5, &v1, a1, a2);
        if (*((int *)&v5))
        {
            uu_sort::Output::new::_$u7b$$u7b$closure$u7d$$u7d$::h1ed18382e82e78f5(&v16, a1, a2, *((long long *)&v7));
            v10 = v18;
            v9 = *((short *)&v17);
            *((int128_t *)&v12) = *((int128_t *)&v20);
            *((int128_t *)&v13) = *((int128_t *)&v21);
            *((int128_t *)&v14) = *((int128_t *)&v22);
            v15 = *((long long *)&v23);
            v8 = v16;
            v11 = *((int *)&v19);
            *((double *)&a0->field_8) = ::0x51c0f0::alloc::boxed::Box$LT$T$GT$::new::h0f817cda3e2779c3(&v8);
            *((char **)&a0->padding_10[0]) = &g_5feb50;
            a0->field_0 = 9223372036854775809;
            return a0;
        }
        v27 = *((int *)&v6);
        v0 = v27;
        ::0x51bb90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3ba68681839953e5(&v8, a1, a2);
        v26 = *((long long *)&v8);
        v24 = v12;
    }
    a0->field_0 = v26;
    *((void*)&a0->field_8) = v24;
    a0->field_18 = v27;
    return a0;
}
