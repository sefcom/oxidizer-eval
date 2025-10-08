fn starship::modules::rust::get_toolchain_version(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: u8;  // [bp-0x50]
    let v3: &mut [u8];  // rax
    let v4: struct24;  // rax
    let v5: struct192;  // r14
    let v6: &str;  // rax
    let v7: struct24;  // rax
    let v8: struct24;  // rdx
    let v9: &mut [u8];  // rax

    v3 = starship::modules::rust::RustToolingEnvironmentInfo::get_rustup_settings(a2, a1);
    if (((0 ^ *(v3 as &i64)) & (0 ^ -(*(v3 as &i64)))) >> 63) as char {
        guess_host_triple::guess_host_triple();
    }
    v6 = starship::modules::rust::RustToolingEnvironmentInfo::get_rustup_rustc_version(a2, a1);
    if *(v6 as &i64) >= 2 {
        if v7 >= 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        starship::modules::rust::RustToolingEnvironmentInfo::get_rustc_verbose_version(&v0, a2, a1);
        if *(&v0 as &i64) {
            return starship::modules::rust::format_toolchain(a0, v9, v8, v4, v5);
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
        starship::modules::rust::RustToolingEnvironmentInfo::get_env_toolchain_override(a2, a1);
        if v9 {
            return starship::modules::rust::format_toolchain(a0, v9, v8, v4, v5);
        }
        core::option::expect_failed("Toolchain override was None: programming error."); /* do not return */
    }
}
