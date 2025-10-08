long long fish::common::get_executable_path(unsigned long long a0[3])
{
    unsigned long long v0;  // [bp-0x108]
    char v1;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0xd8]
    char v6;  // [bp-0xd0]
    unsigned long long v8;  // rdx
    unsigned long long v9;  // r15
    unsigned long long v10;  // r12
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax

    std::env::current_exe(&v1);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v1);
        return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, "fish%ls\n ".as_ref(4), v8);
    }
    v9 = v2;
    v10 = v3;
    std::fs::metadata(&v4, v9, v10);
    v11 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v4);
    if ((unsigned int)v4 == 2)
    {
        v11 = v9.ends_with(v10);
        if ((char)v11)
        {
            v12 = v9.file_name(v10);
            v0 = v9.parent(v10);
            v11 = v0 & 0xffffffffffffff00 | !v12;
            if ((!v0 | !v12) != 1)
            {
                v11 = core::str::converts::from_utf8(&v4, v12, v13);
                if ((int)v4 != 1)
                {
                    v14 = " (deleted)uv".strip_suffix_of(10, v5, *((long long *)&v6));
                    if (!v14)
                        core::option::unwrap_failed(&g_14c1070); /* do not return */
                    a0.join(v0, v13, v14, v13);
                    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v1, v9);
                }
            }
        }
    }
    a0[0] = v1;
    a0[1] = v9;
    a0[2] = v10;
    return v11;
}
