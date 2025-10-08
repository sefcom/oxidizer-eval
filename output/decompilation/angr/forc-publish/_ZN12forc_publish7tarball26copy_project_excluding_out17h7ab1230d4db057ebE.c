long long forc_publish::tarball::copy_project_excluding_out(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x150]
    unsigned long long v1;  // [bp-0x148]
    unsigned long long v2;  // [bp-0x140]
    unsigned long long v3;  // [bp-0x128]
    char v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x118]
    char v7;  // [bp-0x110]
    int v8;  // [bp-0x100]
    char v9;  // [bp-0xf0]
    void* v10;  // [bp-0xe0], Other Possible Types: char, unsigned long long
    unsigned long long v11;  // [bp-0xd8]
    void* v12;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xc8]
    uint128_t v14;  // [bp-0xc0]
    unsigned long long v15;  // [bp-0xb0]
    uint128_t v16;  // [bp-0xa8]
    unsigned long long v17;  // [bp-0x98]
    void* v18;  // [bp-0x90]
    char v19;  // [bp-0x88]
    unsigned long long v20;  // [bp-0x78]
    char v21;  // [bp-0x70]
    int v22;  // [bp-0x60]
    char v23;  // [bp-0x50]
    uint128_t v24;  // [bp-0x40]
    unsigned long long v26;  // r15
    unsigned long long v27;  // rdx
    unsigned long long v29;  // rax

    std::env::current_dir(&v10);
    if ((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63))
    {
        a0->field_0 = 0;
        a0->field_8 = v1;
        return v11;
    }
    v0 = v10;
    v1 = v11;
    v2 = v12;
    v4.new(&v0);
    memcpy(&v23, &v9, 16);
    v22 = v8;
    memcpy(&v21, &v7, 16);
    memcpy(&v19, &v4, 16);
    v20 = v6;
    v10 = 0;
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v17 = 8;
    v18 = 0;
    v24 = 0;
    while (true)
    {
        v4.try_fold(&v10);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<walkdir::dent::DirEntry>>(0x8000000000000000, v5);
            core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<walkdir::IntoIter,forc_publish::tarball::copy_project_excluding_out::{{closure}}>>(&v10);
            a0->field_0 = 14;
            break;
        }
        v26 = v5.strip_prefix(v6, &v0);
        if (!v26)
        {
            a0->field_0 = 5;
LABEL_a65275:
            core::ptr::drop_in_place<walkdir::Ancestor>(v3, v5);
            core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<walkdir::IntoIter,forc_publish::tarball::copy_project_excluding_out::{{closure}}>>(&v10);
            break;
        }
        if (!v26.starts_with(v27))
        {
            v4.join(a1, a2, v26, v27);
            if ((char)v5.is_dir(v6))
            {
                v29 = std::fs::create_dir_all(&v4);
                if (v29)
                    goto LABEL_a6522d;
            }
            else
            {
                v29 = v27;
                if (((char)std::fs::copy(v5, v6, &v4) & 1))
                {
LABEL_a6522d:
                    a0->field_0 = 0;
                    a0->field_8 = v29;
                    core::ptr::drop_in_place<std::path::PathBuf>(v3, v5);
                    goto LABEL_a65275;
                }
            }
            core::ptr::drop_in_place<std::path::PathBuf>(v3, v5);
        }
        core::ptr::drop_in_place<walkdir::Ancestor>(v3, v5);
    }
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
}
