long long just::search::Search::global_justfile_paths(unsigned long a0)
{
    char v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    void* v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    void* v5;  // [bp-0xb0]
    int v6;  // [bp-0xa8], Other Possible Types: void*, unsigned long long
    unsigned long long v7;  // [bp-0xa0]
    int v8;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x90]
    int v10;  // [bp-0x88], Other Possible Types: unsigned long long
    int v11;  // [bp-0x78], Other Possible Types: char
    unsigned long long v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x60]
    unsigned long long v15;  // [bp-0x58]
    struct_0 *v16;  // [bp-0x50]
    char v17;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v18;  // [bp-0x40]
    char v19;  // [bp-0x38]
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // r14
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r13

    v3 = 0;
    v4 = 8;
    v5 = 0;
    dirs::config_dir(&v0);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v11.join(v1, v2, "just", 4);
        v8 = v13;
        *((int128_t *)&v6) = *((int128_t *)&v11);
        v9 = &g_469778;
        v10 = 8;
        v3.push(&(char)v6, &g_830d68);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    }
    dirs::home_dir(&v17);
    if (v17 != 0x8000000000000000)
    {
        v11.join(v18, *((long long *)&v19), ".config", 7);
        v0.join(v12, v13, "just", 4);
        v8 = v2;
        memcpy(&v6, &v0, 16);
        v9 = &g_469778;
        v10 = 8;
        v3.push(&v6, &g_830d80);
        core::ptr::drop_in_place<std::path::PathBuf>(&v11);
        v6 = 0;
        v7 = 2;
        *((uint128_t *)&v8) = g_82e5b0;
        *((uint128_t *)&v10) = g_82e5c0;
        v22 = v6.next();
        if (v22)
        {
            v23 = v22;
            v25 = v24;
            do
            {
                <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v0, v18, v21);
                v13 = v2;
                *((int128_t *)&v11) = *((int128_t *)&v0);
                v14 = v23;
                v15 = v25;
                v3.push(&v11, &g_830d98);
                v23 = v6.next();
                v25 = v24;
            } while (v23);
        }
        core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    }
    v16->field_10 = 0;
    v16->field_0 = *((int128_t *)&v3);
    return 0;
}
