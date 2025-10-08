void fish::env::environment::EnvStack::pop(char a0[130])
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x80]
    char v2;  // [bp-0x78], Other Possible Types: unsigned long long
    uint128_t v3;  // [bp-0x70]
    char v4;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]

    if (!a0[128])
    {
        v0 = &g_14d6750;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d6778); /* do not return */
    }
    v0.lock(a0);
    v7.pop(v0);
    core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
    if (a0[129] != 1)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v7);
        return;
    }
    v0.into_iter(&v7);
    v4.next(&v0);
    if (!((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63)))
    {
        do
        {
            fish::env_dispatch::env_dispatch_var_change(v5, v6, a0);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
            v4.next(&v0);
        } while (v4 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v0);
    return;
}
