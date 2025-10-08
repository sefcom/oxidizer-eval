long long uvx::get_uv_path(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    char v2;  // [bp-0x110], Other Possible Types: unsigned long
    unsigned long v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    char *v5;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xf8]
    void* v7;  // [bp-0xf0]
    char *v8;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xd8]
    char v10;  // [bp-0xd0]
    char v11;  // [bp-0xcf]
    unsigned long long v12;  // [bp-0xc8]
    unsigned long long v13;  // [bp-0xc0]
    char *v14;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0xb0]
    char *v16;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0xa0]
    unsigned long long v19;  // [bp-0x98]
    unsigned long long v20;  // [bp-0x90]
    unsigned long long v21;  // [bp-0x90]
    unsigned long long v22;  // [bp-0x88]
    int v24;  // [bp-0x78], Other Possible Types: char
    char *v25;  // [bp-0x68]
    char v28;  // [bp-0x48]
    unsigned long long v30;  // r14
    unsigned long long v31;  // rsi
    unsigned long long v32;  // r13
    unsigned long long v33;  // rbx
    unsigned long v34;  // rbx
    unsigned long long v35;  // r12
    unsigned long long v36;  // rbp
    char v37;  // al

    v30 = 0x8000000000000000;
    if (a3)
    {
        uvx::get_uv_path::{{closure}}(&v2, a1, a2, a3, a4);
        v30 = *((long long *)&v2);
        v31 = v4;
        v32 = v5;
        if (v30 == 0x8000000000000000)
        {
            v19 = v32;
            v0 = v33;
            v30 = 0x8000000000000000;
        }
        else
        {
            v33 = v0;
            std::fs::exists(&v10, v0, v32);
            if (v10 == 1)
            {
                v8 = v12;
                v20 = v34;
                v22 = v32;
                v14 = &v20;
                v15 = <std::path::Display as core::fmt::Display>::fmt;
                v16 = &v8;
                v18 = <std::io::error::Error as core::fmt::Display>::fmt;
                v2 = &g_463010;
                v4 = 3;
                v7 = 0;
                v5 = &v14;
                v6 = 2;
                std::io::stdio::_eprint(&v2);
                core::ptr::drop_in_place<std::io::error::Error>(v8);
            }
            else if (v11)
            {
                v2.clone(v34, v32);
                *((unsigned long long *)&a0[16]) = v5;
                *((int128_t *)a0) = *((int128_t *)&v2);
                return (unsigned long long)core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v30, v34);
            }
            v19 = v32;
            v0 = v34;
        }
    }
    v1 = v30;
    v14 = &g_4097f0;
    v15 = <&T as core::fmt::Display>::fmt;
    v3 = &g_463040;
    v4 = 1;
    v7 = 0;
    v5 = &v14;
    v6 = 1;
    v28.map_or_else(&(char)v2);
    v10.join(a1, a2, &v28);
    v35 = v12;
    v36 = v13;
    std::fs::exists(&(char)v2, v35, v36);
    v37 = v3;
    if (!v37 && !(*((char *)&v3 + 1) & 1))
    {
        core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v37, 1);
        v21 = v35;
        v22 = v36;
        v8 = &v21;
        v9 = <std::path::Display as core::fmt::Display>::fmt;
        v2 = &g_463070;
        v4 = 1;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        v14.map_or_else(&(char)v2);
        memcpy(&v24, &v14, 16);
        v25 = v16;
        *((long long *)&a0[8]) = v24.new();
        *((unsigned long long *)a0) = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(*((long long *)&v10), v35);
    }
    core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v37, 1);
    *((unsigned long long *)&a0[16]) = v13;
    *((int128_t *)a0) = *((int128_t *)&v10);
    return v13;
}
