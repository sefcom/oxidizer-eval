long long starship::modules::rust::env_rustup_toolchain(void* a0)
{
    int v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    uint128_t v9;  // [bp-0x20]
    unsigned long long v12;  // rdx

    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v6 = &g_11f5fa8;
        v7 = 1;
        v8 = 8;
        v9 = 0;
        v1 = "starship::modules::rustRustup rustc version is ";
        v2 = 23;
        v3 = "starship::modules::rustRustup rustc version is ";
        v4 = 23;
        v5 = log::__private_api::loc(&g_11f5fb8);
        log::__private_api::log(&v6, 5, &v1);
    }
    v6.get_env("RUSTUP_TOOLCHAINuse_logical_path returned error SpawnChildExitedInvalidSignature", 16);
    if (!((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63)))
    {
        v3 = v8;
        *((int128_t *)&v0) = *((int128_t *)&v6);
        v6.to_vec(core::str::<impl str>::trim_matches(v2, v8), v12);
        *((unsigned long long *)&a0[16]) = v8;
        *((int128_t *)a0) = *((int128_t *)&v6);
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v0);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
