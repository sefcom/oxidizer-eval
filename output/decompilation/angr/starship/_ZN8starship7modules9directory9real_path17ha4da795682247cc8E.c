void starship::modules::directory::real_path(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x148]
    int v1;  // [bp-0x148]
    int v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x140]
    void* v4;  // [bp-0x138]
    struct_0 *v5;  // [bp-0x130]
    unsigned long long v6;  // [bp-0x128]
    unsigned long long v7;  // [bp-0x120]
    void* v8;  // [bp-0x118]
    unsigned long long v9;  // [bp-0x108]
    unsigned long long v10;  // [bp-0x100]
    unsigned long long v11;  // [bp-0xf8]
    void* v12;  // [bp-0xf0]
    int v13;  // [bp-0xe8]
    unsigned long long v14;  // [bp-0xe0]
    int v15;  // [bp-0xd8]
    int v16;  // [bp-0xc8]
    char v17;  // [bp-0xb8]
    int v18;  // [bp-0xa8], Other Possible Types: char
    int v19;  // [bp-0x98]
    int v20;  // [bp-0x88]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x68]
    unsigned long long v24;  // rdx

    v0 = 0;
    v3 = 1;
    v4 = 0;
    v9 = a1.as_ref(a2);
    v18.components(v9, a2);
    memcpy(&v17, &v21, 16);
    v16 = v20;
    v15 = v19;
    v13 = v18;
    while (true)
    {
        v22.next(&(char)v13);
        if (v22 == 10)
            break;
        v10.join(1, v4, &v22);
        std::fs::read_link(&v6, v11, v12);
        if (v6 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v6);
            core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            v4 = v12;
            *((int128_t *)&v1) = *((int128_t *)&v10);
        }
        else
        {
            if ((char)v7.is_absolute(v8))
            {
                core::ptr::drop_in_place<std::path::PathBuf>(&v0);
                v4 = v8;
                *((int128_t *)&v2) = *((int128_t *)&v6);
            }
            else
            {
                v0.push(&v6);
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&v10);
        }
    }
    std::fs::canonicalize(&(char)v13, 1, v4);
    if ((long long)v13 == 0x8000000000000000)
    {
        starship::modules::directory::real_path::{{closure}}(a0, v9, v24, v14);
    }
    else
    {
        v5->field_10 = (long long)v15;
        v5->field_0 = (int128_t)v13;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return;
}
