long long uu_install::strip_file(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x1c0], Other Possible Types: unsigned long long
    int v1;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v2;  // [bp-0x1a8]
    int v3;  // [bp-0x198], Other Possible Types: unsigned long long
    int v4;  // [bp-0x198]
    int v5;  // [bp-0x190], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x180]
    void* v8;  // [bp-0x178]
    char *v9;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x148]
    unsigned long long v11;  // [bp-0x140]
    char v12;  // [bp-0x138], Other Possible Types: unsigned int
    unsigned int v13;  // [bp-0x134]
    unsigned long long v14;  // [bp-0x130]
    int v15;  // [bp-0x128], Other Possible Types: char
    unsigned long long v16;  // [bp-0x118]
    char v17;  // [bp-0x110]
    unsigned int v18;  // [bp-0x110]
    char v19;  // [bp-0x100]
    unsigned long long v21;  // r13
    unsigned long long v22;  // r14
    unsigned long v23;  // rbx

    core::str::converts::from_utf8(&v17, a0, a1);
    if (v17)
        v21 = 1;
    v18 = 0;
    if ((char)core::slice::<impl [T]>::starts_with(v21, (!v17 ? *((long long *)&v19) : 0), ::0x462e00::core::char::methods::encode_utf8_raw(45, &v18)))
    {
        v18.to_vec("./a Display implementation returned an error unexpectedly/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux", 1);
        v6 = *((long long *)&v19);
        *((int128_t *)&v4) = *((int128_t *)&v18);
        (char)v4.push(a0, a1);
        v2 = v6;
        memcpy(&v1, &v4, 16);
    }
    else
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v1, a0, a1);
    }
    v18.new(a2 + 24);
    v18.arg(&v1);
    v12.status(&v18);
    if (v12 == 1)
    {
        v0 = v14;
        v6 = v2;
        v3 = v1;
        v9 = std::fs::remove_file(&(char)v4);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v9);
        v9.spec_to_string(&v0);
        v7 = v11;
        *((int128_t *)&v5) = *((int128_t *)&v9);
        v3 = 9;
        v22 = v3.new();
        core::ptr::drop_in_place<std::io::error::Error>(&v0);
    }
    else
    {
        v23 = v13;
        if (!(unsigned int)v23)
        {
            core::ptr::drop_in_place<std::process::Command>(&v18);
            core::ptr::drop_in_place<std::path::PathBuf>(&v1);
            return 0;
        }
        v6 = v2;
        v4 = v1;
        v9 = std::fs::remove_file(&(char)v4);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v9);
        if (((char)v23 & 127))
            core::option::unwrap_failed(&g_5024f8); /* do not return */
        v0 = v23 >> 8;
        v9 = &v0;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v3 = &g_5024e8;
        v5 = 1;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        v15.map_or_else(&v3);
        v5 = v15;
        v7 = v16;
        v3 = 9;
        v22 = v3.new();
    }
    core::ptr::drop_in_place<std::process::Command>(&v18);
    return v22;
}
