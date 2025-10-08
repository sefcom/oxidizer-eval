long long uu_cp::copydir::Context::new(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    char v3;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    char v6;  // [bp-0xf8]
    char v7;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xd8]
    char v9;  // [bp-0xd0]
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbp

    v11 = 0x8000000000000000;
    std::env::current_dir(&v7);
    if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
    {
        *((unsigned long long *)&a0[8]) = v8;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v7;
    }
    v0 = v7;
    v1 = v8;
    v2 = *((long long *)&v9);
    v3.join(v8, *((long long *)&v9), a1, a2);
    std::fs::metadata(&v7, a3, a4);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v7);
    if ((unsigned int)v7 != 2)
    {
        core::str::converts::from_utf8(&v7, a1, a2);
        if ((int)v7 == 1)
        {
            core::option::unwrap_failed(&g_55e5e8); /* do not return */
        }
        else if (!(char)core::slice::<impl [T]>::ends_with(v8, *((long long *)&v9), "/.src/uu/cp/src/copydir.rsFailed to create directory: \n", 2))
        {
            v12 = v4.parent(v5);
            v13 = v11;
            if (v12)
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v7, v12, a2);
                memcpy(&v6, &v8, 16);
                v13 = v7;
            }
            *((unsigned long long *)&a0[16]) = v2;
            *((int128_t *)a0) = *((int128_t *)&v0);
            *((unsigned long long *)&a0[24]) = v13;
            *((int128_t *)&a0[32]) = *((int128_t *)&v6);
            *((unsigned long long *)&a0[48]) = a3;
            *((unsigned long long *)&a0[56]) = a4;
            *((unsigned long long *)&a0[64]) = a1;
            *((unsigned long long *)&a0[72]) = a2;
            return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v3);
        }
    }
    *((unsigned long long *)&a0[16]) = v2;
    *((int128_t *)a0) = *((int128_t *)&v0);
    *((unsigned long long *)&a0[24]) = v3;
    *((int128_t *)&a0[32]) = *((int128_t *)&v4);
    *((unsigned long long *)&a0[48]) = a3;
    *((unsigned long long *)&a0[56]) = a4;
    *((unsigned long long *)&a0[64]) = a1;
    *((unsigned long long *)&a0[72]) = a2;
    return a4;
}
