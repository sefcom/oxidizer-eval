char fish::complete::CompletionReceiver::extend(unsigned long long a0[4], unsigned long long a1)
{
    char v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    char v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    uint128_t v7;  // [bp-0x50]
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    unsigned long long v12;  // r15

    v0.into_iter(a1);
    v11 = v1.len(v3);
    v12 = a0[3] - a0[2];
    if (a0[3] < a0[2])
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d5ac0); /* do not return */
    if (v11 <= v12)
    {
        memcpy(&v9, &v2, 16);
        memcpy(&v8, &v0, 16);
        a0.spec_extend(&v8);
        if (a0[2] > a0[3])
        {
            v4 = &g_14d5ab0;
            v5 = 1;
            v6 = 8;
            v7 = 0;
            core::panicking::panic_fmt(&v4, &g_14d5ad8); /* do not return */
        }
    }
    else
    {
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::complete::Completion>>(&v0);
    }
    return v11 <= v12;
}
