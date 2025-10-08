long long fish::wutil::gettext::gettext_impl::get_language_preferences_from_env::check_language_var(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x40], Other Possible Types: char
    unsigned long long v1;  // [bp-0x30]
    int v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]

    v0.getf(a1, "L", 8, 0);
    if (!*((long long *)&v0))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v4 = v1;
    v2 = v0;
    v0.collect((long long)v2 + 16, (long long)v2 + v3 * 24 + 16);
    if (v1)
    {
        *((unsigned long long *)&a0[16]) = v1;
        *(a0) = v0;
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    }
    return core::ptr::drop_in_place<fish::env::var::EnvVar>(&(char)v2);
}
