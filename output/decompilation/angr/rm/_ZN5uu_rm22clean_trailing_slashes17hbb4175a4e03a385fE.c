long long uu_rm::clean_trailing_slashes(char *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x48]
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    void* v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // 4096
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long v10;  // rdi

    v1 = a0;
    v2 = a1;
    v0 = 0x8000000000000000;
    if (a1 >= 2 && a0[1 + a1] == 47)
    {
        v7 = a1;
        do
        {
            v8 = v7;
            if (v8 < 2)
            {
                v9 = a1 - 1;
                break;
            }
            v9 = v8.backward_unchecked();
            v10 = v9 - 1;
            if (v10 >= a1)
                core::panicking::panic_bounds_check(v10, a1, &g_57d8a0); /* do not return */
            v7 = v9;
        } while (a0[v10] == 47);
        v3 = 0;
        v4 = v9;
        v5 = 0;
        a0 = v3.index(a0, a1);
    }
    ::0x49ffd0::core::ptr::drop_in_place<core::option::Option<clap_builder::builder::styled_str::StyledStr>>(&v0);
    return a0;
}
