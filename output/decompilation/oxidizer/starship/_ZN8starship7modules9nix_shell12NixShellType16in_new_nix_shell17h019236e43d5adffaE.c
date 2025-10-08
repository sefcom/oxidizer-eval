fn starship::modules::nix_shell::NixShellType::in_new_nix_shell() -> u64 {
    let v0: u128;  // [bp-0x48]
    let v1: i64;  // [bp-0x40]
    let v2: struct192;  // [bp-0x38]
    let v3: Option<struct24>;  // [bp-0x30], Other Possible Types: struct24
    let v4: u64;  // [bp-0x30]
    let v5: struct40;  // [bp-0x28]
    let v6: struct16;  // [bp-0x20], Other Possible Types: u64
    let v7: Result<struct72, struct32>;  // [bp-0x18]
    let v8: struct24;  // [bp-0x10]

    v3 = starship::context_env::Env::get_env("PATH");
    if !((((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char) {
        v2 = v6;
        v0 = v3 as i128;
        v3 = std::path::Path::to_path_buf;
        v5 = v1;
        v6 = v2;
        v7 = std::sys::pal::unix::os::split_paths::is_separator;
        v8 = 0;
        return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v3) as i32, 0x1);
    }
    return 0;
}
