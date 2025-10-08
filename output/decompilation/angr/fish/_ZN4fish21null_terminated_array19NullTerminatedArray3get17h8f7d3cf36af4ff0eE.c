long long fish::null_terminated_array::NullTerminatedArray::get(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a1 && !*((long long *)(a0 + a1 * 8 - 8)))
        return a0;
    v0 = &g_14dbf98;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    core::panicking::panic_fmt(&v0, &g_14dbfa8); /* do not return */
}
