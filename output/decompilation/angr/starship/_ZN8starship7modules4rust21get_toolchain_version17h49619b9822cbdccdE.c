long long starship::modules::rust::get_toolchain_version(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x38]
    unsigned long long v3[3];  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // r14
    unsigned long long *v6;  // rax
    unsigned long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax

    v3 = a2.get_rustup_settings(a1);
    if ((char)(((0 ^ v3[0]) & (0 ^ -(v3[0]))) >> 63))
    {
        v4 = guess_host_triple::guess_host_triple();
    }
    else
    {
        v4 = v3[1];
        v5 = v3[2];
    }
    v6 = a2.get_rustup_rustc_version(a1);
    if (*(v6) >= 2)
    {
        v7 = *(v6) - 2;
        if (v7 >= 2)
        {
            *(a0) = 0x8000000000000000;
            return v7;
        }
        v7 = v0.get_rustc_verbose_version(a2, a1);
        if (!*((long long *)&v0))
        {
            *(a0) = 0x8000000000000000;
            return v7;
        }
        v8 = *((long long *)&v1);
    }
    else
    {
        v9 = a2.get_env_toolchain_override(a1);
        if (!v9)
            core::option::expect_failed("Toolchain override was None: programming error.Searching for rustup toolchain in environment.Searching for toolchain with rustup defaultSearching for toolchain in toolchain file", 47, &g_11f5f90); /* do not return */
    }
    return starship::modules::rust::format_toolchain(a0, v9, v8, v4, v5);
}
