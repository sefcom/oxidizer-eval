long long fish::fs::fsync(unsigned int *a0)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    uint128_t v3;  // [bp-0x40]
    unsigned int v5;  // eax

    v5 = fsync(*(a0));
    if (v5 == -1)
    {
        do
        {
            v0 = *(__errno_location()) * 0x100000000 | 2;
            if ((char)v0.kind() != 35)
                return v0;
            core::ptr::drop_in_place<std::io::error::Error>(&v0);
            v5 = fsync(*(a0));
        } while (v5 == -1);
    }
    if (v5)
    {
        v0 = &g_14d8d30;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d8d40); /* do not return */
    }
    return 0;
}
