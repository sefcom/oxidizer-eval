void flealib::fleaserver::remove_newline_characters(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    unsigned long long v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    unsigned long long v9;  // r14
    unsigned long long v10;  // r15
    unsigned long long v11;  // rdx

    v0.to_vec(a1, a2);
    alloc::str::<impl str>::replace(&v3, v1, v2, 10);
    ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&v0);
    alloc::str::<impl str>::replace(&v0, v4, v5, 13);
    v9 = v1;
    v10 = v2;
    v6 = v9;
    v7 = v9 + v10;
    if (!v6.position())
        core::option::unwrap_failed(&g_b0b1d0); /* do not return */
    a0.to_vec(v11.index(v9, v10, &g_b0b1e8), a2);
    ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&v0);
    ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&v3);
    return;
}
