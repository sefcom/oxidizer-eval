long long uu_mv::rename(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[56], unsigned long long *a5)
{
    unsigned long long v1;  // [bp-0x2e8]
    unsigned long v2;  // [bp-0x2c8]
    char *v3;  // [bp-0x2c0]
    unsigned long long v4;  // [bp-0x2b8]
    char *v5;  // [bp-0x2b0]
    unsigned long long v6;  // [bp-0x2a8]
    int v8;  // [bp-0x298], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v9;  // [bp-0x290]
    char *v10;  // [sp-0x288], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x280]
    void* v12;  // [sp-0x278]
    int v14;  // [sp-0x1e8], Other Possible Types: char
    unsigned long long v15;  // [bp-0x1e8]
    unsigned long long v16;  // [bp-0x1e0]
    unsigned long long v17;  // [sp-0x1d8]
    char v18;  // [bp-0x1d0]
    unsigned long long v20;  // [sp-0x130]
    unsigned long long v22;  // [bp-0x120]
    char *v24;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x108]
    unsigned long long v26;  // [sp-0x100]
    char v27;  // [sp-0xf8]
    unsigned long long v31;  // r15
    unsigned long long *v32;  // rax

    std::fs::metadata(&v8, a2, a3);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v8);
    if ((unsigned int)v8 == 2)
    {
        std::fs::metadata(&v8, a2, a3);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v8);
        if (!((unsigned int)v8 != 2 && (char)a2.is_dir(a3) && (char)a0.is_dir(a1)))
        {
LABEL_48cb47:
            v31 = uu_mv::rename_with_fallback(a0, a1, a2, a3, a5);
            if (!v31)
            {
                if (!a4[49])
                    return 0;
                v24 = 1;
                v25 = a0;
                v26 = a1;
                v27 = 1;
                v15 = 1;
                v16 = a2;
                v17 = a3;
                v18 = 1;
                v3 = &v24;
                v4 = <os_display::Quoted as core::fmt::Display>::fmt;
                v5 = &v15;
                v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                v8 = &g_541a30;
                v9 = 2;
                v12 = 0;
                v10 = &v3;
                v11 = 2;
                (char)v20.map_or_else(&v8);
                *((int128_t *)&v14) = *((int128_t *)&v20);
                v17 = v22;
                v32 = a5;
                if (v2)
                {
                    *(v32).suspend(&v15);
                }
                else
                {
                    v24 = &v15;
                    v25 = <alloc::string::String as core::fmt::Display>::fmt;
                    v8 = &g_541a50;
                    v9 = 2;
                    v12 = 0;
                    v10 = &v24;
                    v11 = 1;
                    std::io::stdio::_print(&v8);
                }
                core::ptr::drop_in_place<alloc::string::String>(&v15);
                return 0;
            }
        }
        else if ((char)uu_mv::is_empty_dir(a2, a3))
        {
            v31 = std::fs::remove_dir(a2, a3);
            if (!v31)
                goto LABEL_48cb47;
        }
        else
        {
            v14.to_vec("Directory not empty (backup: ){msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}Permission deniedinter-device move failed: '' to ''; unable to remove target: ", 19);
            v10 = v17;
            *((int128_t *)&v8) = *((int128_t *)&v14);
            v31 = 40._new(v8.new(), &g_541778);
        }
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(0x8000000000000000, v1);
        return v31;
    }
    goto (long long)(g_420f2c[a4[55]] + (char *)&g_420f2c[0]);
}
