void fish::terminal::osc_0_window_title(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    void* v4;  // rbp

    a0.write_bytes(&g_550f54, 4);
    if (a2)
    {
        v4 = 0;
        do
        {
            fish::common::wcs2osstring(&v0, *((long long *)(8 + a1 + (char *)v4)), *((long long *)(16 + a1 + (char *)v4)));
            a0.write_bytes(v1, *((long long *)&v2));
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            v4 += 24;
        } while (a2 * 24 != v4);
    }
    a0.write_bytes(&g_9fb4be, 1);
    return;
}
