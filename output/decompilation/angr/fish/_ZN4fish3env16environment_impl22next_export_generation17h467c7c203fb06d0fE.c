long long fish::env::environment_impl::next_export_generation()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v2;  // 4096
    unsigned long long v3;  // rax

    v2 = atomic_exchange_add(&_ZN4fish3env16environment_impl22next_export_generation3GEN17h34802f4996028e92E, 1);
    v3 = v2;
    if ((char)_ccall(4, 24, v3 + 1, 0, (v2 + 1 <= v2 ? 1 : 0)))
    {
        v0 = v3 + 1;
        core::panicking::panic_const::panic_const_add_overflow(&g_14d6880); /* do not return */
    }
    return v3 + 1;
}
