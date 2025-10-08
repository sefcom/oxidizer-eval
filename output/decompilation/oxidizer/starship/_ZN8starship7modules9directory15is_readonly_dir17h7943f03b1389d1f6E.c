fn starship::modules::directory::is_readonly_dir(a0: u64, a1: i192) -> long long {
    let v0: struct24;  // [bp-0xc8]
    let v1: Result<struct24, struct9>;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa8]
    let v4: struct24;  // [bp-0x88]
    let v5: Result<struct32, struct16>;  // [bp-0x80]
    let v6: struct32;  // [bp-0x78]
    let v7: struct32;  // [bp-0x70]
    let v8: struct24;  // [bp-0x68]
    let v9: struct40;  // [bp-0x60]
    let v10: struct80;  // [bp-0x38]
    let v11: struct32;  // [bp-0x30]
    let v12: struct24;  // [bp-0x28]
    let v13: struct25;  // [bp-0x20]
    let v14: void*;  // [bp-0x18]

    v1 as u64 = a0;
    v4 = a1;
    v1 = starship::modules::utils::directory_nix::is_write_allowed(a0, a1);
    if (((0 ^ v1 as i64) & (0 ^ -(v2))) >> 63) as char {
        return *((&v1 as &char + 8) as &i8) ^ 1;
    }
    v0 = v2;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 4 {
        return 0;
    }
    v5 = &v1 as u64;
    v6 = <&T as core::fmt::Debug>::fmt;
    v7 = &v0;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v10 = "Failed to determine read only status of directory '";
    v11 = 2;
    v14 = 0;
    v12 = &v5;
    v13 = 2;
    v9 = struct40 {
        field_0: "starship::modules::directory"
        field_16: "starship::modules::directory"
        field_32: log::__private_api::loc("src/modules/directory.rs")
    };
    log::__private_api::log(&v10, 4, &v9);
    return 0;
}
