long long uu_tail::follow::watch::WatcherRx::watch::h2b5e061523dbb1d7(unsigned long long a0, struct_2 *a1)
{
    void* v0;  // [sp-0xe0]
    unsigned long long v1;  // [sp-0xd8]
    void* v2;  // [sp-0xd0]
    int v3;  // [sp-0xc8]
    int v4;  // [sp-0xb8]
    int v5;  // [sp-0xa8]
    unsigned long long v6;  // [sp-0x98]
    void* v7;  // [sp-0x90]
    void* v8;  // [sp-0x80]
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x60]
    char v12;  // [sp-0x58]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    char v16;  // [bp-0x20]
    unsigned long long v18;  // rdx
    struct_0 *v19;  // rax

    a1->field_18(&v13, a0, v18);
    if (*((int *)&v13) == 6)
        return 0;
    v6 = *((long long *)&v16);
    *((int128_t *)&v5) = *((int128_t *)&v15);
    *((int128_t *)&v4) = *((int128_t *)&v14);
    *((int128_t *)&v3) = *((int128_t *)&v13);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v11 = 32;
    v12 = 3;
    v7 = 0;
    v8 = 0;
    v9 = &v0;
    v10 = &g_55c8e0;
    if ((char)_$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h2c969b1369eef633(&v3, &v7))
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    v19 = __rust_alloc(32, 8);
    if (v19)
    {
        v19->field_0 = v0;
        v19->field_8 = v1;
        v19->field_10 = v2;
        v19->field_18 = 1;
        core::ptr::drop_in_place$LT$notify..error..Error$GT$::h2c87bb0d027aea6b(&v3);
        return v19;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
