fn starship::context::Context::expand_tilde(a1: i64) -> : struct24 {
    let a0: void*;  // rdi
    let v0: u128;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: struct24;  // [bp-0x48]
    let v3: u128;  // [bp-0x38]
    let v4: u8;  // [bp-0x28]
    let v6: u64;  // rdx
    let v7: u64;  // rax

    if !std::path::Path::starts_with(*((a1 + 8) as &i64), *((a1 + 16) as &i64), "~") {
        return struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
    }
    v7 = core::result::Result<T,E>::unwrap(std::path::Path::strip_prefix(*((a1 + 8) as &i64), *((a1 + 16) as &i64)), v6, "src/context.rs");
    starship::utils::home_dir(&v3);
    if (((0 ^ *(&v3 as &i64)) & (0 ^ -(*(&v3 as &i64)))) >> 63) as char {
        core::option::unwrap_failed(); /* do not return */
    }
    v0 = v3;
    v2 = *(&v4 as &i64);
    std::path::Path::join(a0, v1, *(&v4 as &i64), v7, v6);
    return;
}
