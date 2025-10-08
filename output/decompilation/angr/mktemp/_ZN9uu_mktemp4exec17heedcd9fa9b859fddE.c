long long uu_mktemp::exec(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, char a8)
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long v6;  // [bp-0x40]
    int v7;  // [bp-0x38], Other Possible Types: char
    char v8;  // [bp-0x28]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdi

    if (a8)
        uu_mktemp::make_temp_dir(&v0, a1, a2, a3, a4, a5, a6, a7);
    else
        uu_mktemp::make_temp_file(&v0, a1, a2, a3, a4, a5, a6, a7);
    if (v1 == 0x8000000000000000)
    {
        *((unsigned long long *)&a0[8]) = v5;
        *((unsigned long *)&a0[16]) = v6;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    v4 = v1;
    v5 = v2;
    v6 = v3;
    v9 = v5.file_name(v6);
    if (v9)
    {
        core::str::converts::from_utf8(&v0, v9, a2);
        if ((int)v1 != 1)
        {
            v7.join(a1, a2, v2, v3);
            *((long long *)&a0[16]) = *((long long *)&v8);
            *(a0) = v7;
            core::ptr::drop_in_place<std::path::PathBuf>(&v4);
            return a0;
        }
        v10 = &g_4f9118;
    }
    else
    {
        v10 = &g_4f9100;
    }
    core::option::unwrap_failed(v10); /* do not return */
}
