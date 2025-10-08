long long fish::nix::timeval_to_duration(unsigned long long a0[2])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long v4;  // cc_ndep

    v0 = v2;
    v3 = a0[0] * 1000000;
    if ((char)_ccall(0, 52, a0[0], 1000000, v4))
    {
        core::panicking::panic_const::panic_const_mul_overflow(&g_14dbf80); /* do not return */
    }
    else if (!((char)_ccall(0, 4, v3, a0[1], v4)))
    {
        return (v3 + a0[1]) / 1000000;
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14dbf80); /* do not return */
    }
}
