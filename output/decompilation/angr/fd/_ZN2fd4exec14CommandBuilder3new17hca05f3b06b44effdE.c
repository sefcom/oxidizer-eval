long long fd::exec::CommandBuilder::new(void* a0, unsigned long long a1[4], unsigned long a2, unsigned long a3)
{
    void* v0;  // [bp-0x268]
    unsigned long long v1;  // [bp-0x260]
    void* v2;  // [bp-0x258]
    void* v3;  // [bp-0x250]
    unsigned long long v4;  // [bp-0x248]
    void* v5;  // [bp-0x240]
    unsigned long v6;  // [bp-0x230]
    unsigned long long v7;  // [bp-0x228]
    int v8;  // [bp-0x220]
    int v9;  // [bp-0x220]
    unsigned long long v10;  // [bp-0x210]
    unsigned long long v11;  // [bp-0x208]
    unsigned long long v12;  // [bp-0x200]
    void* v13;  // [bp-0x1f8], Other Possible Types: unsigned long long
    int v14;  // [bp-0x118]
    unsigned long long v15;  // [bp-0x110]
    unsigned long long v16;  // [bp-0x108]
    unsigned long long v18[4];  // r12
    unsigned long long v19;  // r15
    unsigned long long v20;  // r14
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r15
    unsigned long v23;  // r15
    unsigned long long v24;  // [bp-0x118]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 2;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    if (a2)
    {
        v18 = a1;
        v19 = a2 * 32;
        v20 = 2;
        v21 = 2;
        do
        {
            v22 = v19;
            if (!v18[0])
            {
                v11.clone(v18[2], v18[3]);
                v16 = v13;
                *((int128_t *)&v14) = *((int128_t *)&v11);
                core::ptr::drop_in_place<core::option::Option<fd::fmt::FormatTemplate>>(&v7);
                v7 = 0;
                v10 = v16;
                memcpy(&v8, &v14, 16);
                v20 = 0;
                v21 = 0;
                v8 = v9;
            }
            else if (v21 == 2)
            {
                v11.generate(v18);
                v0.push(&v11, &g_802200);
                v21 = 2;
            }
            else
            {
                v11.generate(v18);
                v3.push(&v11, &g_8021e8);
                v8 = v8;
            }
            v18 += 1;
            v23 = v22 - 32;
            v19 = v23;
        } while (v22 != 32);
    }
    else
    {
        v20 = 2;
    }
    v11.new_command(8, 0);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        *((unsigned long long *)&a0[8]) = v12;
        *((unsigned long long *)a0) = 2;
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v3);
        core::ptr::drop_in_place<core::option::Option<fd::fmt::FormatTemplate>>(&v7);
        return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v0);
    }
    ::libc.so.0::memcpy(&v16, &v13, 216);
    v24 = v11;
    v15 = v12;
    v13 = 0;
    memcpy(&v11, &v0, 16);
    if (v20 == 2)
        core::option::unwrap_failed(&g_802218); /* do not return */
    *((unsigned long long *)&a0[24]) = v10;
    a0[8] = v8;
    *((int128_t *)&a0[56]) = *((int128_t *)&v3);
    *((unsigned long long *)&a0[72]) = 0;
    ::libc.so.0::memcpy(a0 + 80, &v24, 232);
    *((int128_t *)&a0[32]) = *((int128_t *)&v0);
    *((long long *)&a0[48]) = 0;
    *((unsigned long long *)a0) = v20;
    *((unsigned long long *)&a0[312]) = 0;
    *((unsigned long *)&a0[320]) = v6;
    *((char *)&a0[328]) = 2;
    return a3;
}
