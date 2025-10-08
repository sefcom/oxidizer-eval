long long starship::modules::rust::find_rust_toolchain_file(void* a0, unsigned long long a1[25])
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    uint128_t v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long v10;  // rdx
    unsigned long long v11;  // r12
    unsigned long long v13;  // r13
    unsigned long long v14;  // r13

    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v0 = &g_11f6008;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v4 = "starship::modules::rustRustup rustc version is ";
        v5 = 23;
        v6 = "starship::modules::rustRustup rustc version is ";
        v7 = 23;
        v8 = log::__private_api::loc(&g_11f6018);
        log::__private_api::log(&v0, 5, &v4);
    }
    if ((char)a1.dir_contents().is_ok_and(v10))
    {
        starship::modules::rust::find_rust_toolchain_file::read_channel(&v0, "rust-toolchainrust-toolchain.tomlerror: toolchain '' is not installed\nError formatting `rust` version:\n", 14, 0);
        if (v0 != 0x8000000000000000)
        {
            *((unsigned long long *)&a0[16]) = v2;
            *((int128_t *)a0) = *((int128_t *)&v0);
            return v2;
        }
        core::ptr::drop_in_place<regex::error::Error>(&v0);
    }
    if ((char)a1.dir_contents().is_ok_and(v10))
    {
        starship::modules::rust::find_rust_toolchain_file::read_channel(&v0, "rust-toolchain.tomlerror: toolchain '' is not installed\nError formatting `rust` version:\n", 19, 1);
        if (v0 != 0x8000000000000000)
        {
            *((unsigned long long *)&a0[16]) = v2;
            *((int128_t *)a0) = *((int128_t *)&v0);
            return v2;
        }
        core::ptr::drop_in_place<regex::error::Error>(&v0);
    }
    v11 = a1[23];
    v13 = a1[24];
    while (true)
    {
        v14 = v13;
        v0.join(v11, v14, "rust-toolchainrust-toolchain.tomlerror: toolchain '' is not installed\nError formatting `rust` version:\n", 14);
        starship::modules::rust::find_rust_toolchain_file::read_channel(&v4, v1, v2, 0);
        if (v4 != 0x8000000000000000)
            break;
        core::ptr::drop_in_place<regex::error::Error>(&v4);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        v0.join(v11, v14, "rust-toolchain.tomlerror: toolchain '' is not installed\nError formatting `rust` version:\n", 19);
        starship::modules::rust::find_rust_toolchain_file::read_channel(&v4, v1, v2, 1);
        if (v4 != 0x8000000000000000)
            break;
        core::ptr::drop_in_place<regex::error::Error>(&v4);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        v11 = v11.parent(v14);
        if (!v11)
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            return a0;
        }
        v13 = v10;
    }
    *((unsigned long long *)&a0[16]) = v6;
    *((int128_t *)a0) = *((int128_t *)&v4);
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v0);
}
