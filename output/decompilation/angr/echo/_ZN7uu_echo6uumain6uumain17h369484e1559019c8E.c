long long uu_echo::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    char v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    char v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    int v10;  // [bp-0x78], Other Possible Types: char
    unsigned long long v11;  // [bp-0x68]
    char v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x50]
    int v14;  // [bp-0x48], Other Possible Types: char
    char v15;  // [bp-0x38]
    char v17;  // bl
    char v18;  // bpl
    unsigned long long v19;  // rax

    std::env::var_os(&(char)v0);
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v0, v1);
    v12.skip(a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        uu_echo::filter_echo_flags(&(char)v0, &v12);
        v11 = v2;
        memcpy(&v10, &v0, 16);
    }
    else
    {
        v9 = v13;
        memcpy(&v7, &v12, 16);
        v4 = 9223372036854775809;
        v4.get_or_insert_with(&v7);
        (char)v0.to_vec("-n/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 2);
        if (v4 != 0x8000000000000000 && (char)v5.eq(v6, v1, v2))
        {
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
            memcpy(&v3, &v8, 16);
            memcpy(&v2, &v6, 16);
            *((int128_t *)&v0) = *((int128_t *)&v4);
            uu_echo::filter_echo_flags(&v14, &(char)v0);
            v10 = v14;
            v11 = *((long long *)&v15);
        }
        else
        {
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
            memcpy(&v3, &v8, 16);
            memcpy(&v2, &v6, 16);
            *((int128_t *)&v0) = *((int128_t *)&v4);
            v10.collect(&(char)v0);
            v17 = 1;
        }
        v18 = 1;
    }
    v0 = std::io::stdio::stdout();
    v4 = v0.lock();
    v2 = v11;
    memcpy(&v0, &v10, 16);
    v19 = uu_echo::execute(&v4, &v0, v17, v18);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
    return v19;
}
