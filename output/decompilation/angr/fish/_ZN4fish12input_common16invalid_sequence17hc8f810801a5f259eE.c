long long fish::input_common::invalid_sequence(unsigned int *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x38]

    if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a99a0);
        v7.into_iter(&v3);
        v0.spec_extend(&v7);
        v0.push(58, &g_14db598);
        v0.push(32, &g_14db598);
        v9.to_vec("Error: invalid escape sequence: ", 32);
        v7.into_iter(&v9);
        v0.spec_extend(&v7);
        v0.push(32, &g_14db598);
        v5 = a1;
        v6 = a2;
        v7.spec_to_string(&v5);
        v4 = *((long long *)&v8);
        memcpy(&v3, &v7, 16);
        v7.into_iter(&v3);
        v0.spec_extend(&v7);
        v0.push(10, &g_14db598);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    *(a0) = 0x110000;
    return a0;
}
