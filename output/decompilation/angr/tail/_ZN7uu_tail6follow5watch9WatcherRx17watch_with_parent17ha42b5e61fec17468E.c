long long uu_tail::follow::watch::WatcherRx::watch_with_parent(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    char v4;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    char *v7;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x98]
    unsigned int v9;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x88]
    char v11;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    char *v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    int v16;  // [bp-0x48], Other Possible Types: char
    char v17;  // [bp-0x38]
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long v22;  // rdx
    int v23;  // xmm0
    unsigned long long v24;  // r14
    unsigned long long v25;  // r13

    std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, a2, a3);
    v19 = v2;
    v20 = v3;
    if ((char)v19.is_file(v20))
    {
        v21 = v19.parent(v20);
        if (!v21)
        {
            v11 = v19;
            v12 = v20;
            v14 = &v11;
            v15 = <std::path::Display as core::fmt::Display>::fmt;
            *((unsigned long long **)&v5) = &g_573490;
            v6 = 1;
            v10 = 0;
            v7 = &v14;
            v9 = 1;
            v16.map_or_else(&(unsigned long long)v5);
            v9 = 1;
            v5 = v16;
            v7 = *((long long *)&v17);
            (unsigned long long)v5.new();
            core::ptr::drop_in_place<std::path::PathBuf>(v1, v19);
            return v24;
        }
        if ((char)v21.is_dir(v22))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v4, v21, v22);
            core::ptr::drop_in_place<std::path::PathBuf>(v1, v19);
            v3 = v8;
            v23 = *((int128_t *)&v4);
        }
        else
        {
            v4.to_vec(".cannot watch parent directory of ", 1);
            v13 = v8;
            memcpy(&v11, &v4, 16);
            core::ptr::drop_in_place<std::path::PathBuf>(v1, v19);
            v3 = v13;
            v23 = *((int128_t *)&v11);
        }
        v0 = v23;
    }
    v19 = v2;
    if (!(char)v19.is_absolute(v3))
    {
        std::fs::canonicalize(&v4, v19, v3);
        v25 = v6;
        if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        {
            v24 = v25.from();
            core::ptr::drop_in_place<std::path::PathBuf>(v1, v19);
            return v24;
        }
        core::ptr::drop_in_place<std::path::PathBuf>(v1, v19);
        v1 = v4;
        v2 = v25;
        v3 = v8;
        v19 = v25;
    }
    v24 = a0.watch(a1);
    if (!v24)
    {
        core::ptr::drop_in_place<std::path::PathBuf>(v1, v19);
        return 0;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v1, v19);
    return v24;
}
