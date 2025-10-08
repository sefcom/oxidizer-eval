long long fish::env_dispatch::handle_fish_use_posix_spawn_change(unsigned long long a0)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    char v3;  // [bp-0x10]

    v0.getf(a0, "f", 20, 0);
    if (!*((long long *)&v0))
        return (unsigned long long)core::sync::atomic::atomic_store(&_ZN4fish12env_dispatch15USE_POSIX_SPAWN17h8ce3e54ffcba1379E, 1, 0);
    if (!(char)v0.is_empty())
    {
        v1.as_string(&v0);
        fish::wcstringutil::bool_from_string(v2, *((long long *)&v3));
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    }
    core::sync::atomic::atomic_store(&_ZN4fish12env_dispatch15USE_POSIX_SPAWN17h8ce3e54ffcba1379E, 1, 0);
    return core::ptr::drop_in_place<fish::env::var::EnvVar>(&v0);
}
