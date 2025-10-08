char fish::autoload::Autoload::mark_autoload_finished(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    char v5;  // al

    v5 = a0 + 64.remove(a1, a2);
    if (!v5)
    {
        v0 = &g_14c5848;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14c5858); /* do not return */
    }
    return v5;
}
