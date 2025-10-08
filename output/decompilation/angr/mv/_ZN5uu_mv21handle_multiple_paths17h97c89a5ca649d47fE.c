long long uu_mv::handle_multiple_paths(unsigned long long a0[9], unsigned long long a1, struct_0 *a2)
{
    char *v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long v3;  // [bp-0x80]
    unsigned long v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char *v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    void* v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned int v12;  // [bp-0x20]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    if (a2->field_30)
    {
        if (a1 > 2)
        {
            v2 = 1;
            v3 = a0[7];
            v4 = a0[8];
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v6 = &g_541878;
            v7 = 1;
            v10 = 0;
            v8 = &v0;
            v9 = 1;
            v11.map_or_else(&v6);
            v12 = 1;
            return v11.new();
        }
        core::panicking::panic_bounds_check(2, a1, &g_5418b8); /* do not return */
    }
    else
    {
        if (a1)
        {
            v14 = a1 - 1.index(a0, a1);
            return uu_mv::move_files_into_dir(v14, v15, a0[2 + 3 * a1], a0[1 + 3 * a1], a2);
        }
        core::option::unwrap_failed(&g_541888); /* do not return */
    }
}
