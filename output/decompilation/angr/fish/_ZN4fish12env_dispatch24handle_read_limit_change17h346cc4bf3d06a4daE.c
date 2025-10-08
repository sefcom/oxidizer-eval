void fish::env_dispatch::handle_read_limit_change(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x30], Other Possible Types: unsigned long long
    char v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x18]
    char v4;  // [bp-0x10]
    unsigned long long v6;  // rsi

    v0.getf_unless_empty(a0, "f", 15, 0);
    if (!*((long long *)&v0))
    {
        core::sync::atomic::atomic_store(&_ZN4fish3env15READ_BYTE_LIMIT17h28be1d6ca7bf6cd0E, 0x40000000, 0);
        return;
    }
    fish::env_dispatch::init_locale::{{closure}}(&v1, &v0);
    memcpy(&v4, &v2, 16);
    v3 = v1;
    if (!((char)fish::env_dispatch::handle_read_limit_change::{{closure}}(&v3) & 1))
        v6 = 0x40000000;
    core::sync::atomic::atomic_store(&_ZN4fish3env15READ_BYTE_LIMIT17h28be1d6ca7bf6cd0E, v6, 0);
    return;
}
