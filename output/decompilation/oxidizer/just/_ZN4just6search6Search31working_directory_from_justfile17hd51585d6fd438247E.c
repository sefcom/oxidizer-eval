fn just::search::Search::working_directory_from_justfile(a1: i64, a2: i64) -> : struct32 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x38]
    let v2: core::option::Option<&str>;  // r12
    let v3: u64;  // rax
    let v5: iNone;  // xmm0
    let v6: u64;  // r12

    v2 = 9223372036854775811;
    v3 = std::path::Path::parent(a1, a2);
    if !v3 {
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1 as u32);
        v5 = *(&v0.field_8 as &i128);
        return struct32 {
            field_0: v6
            field_8: v0.field_0
            field_16: v5
        };
    }
    std::sys::pal::unix::os::split_paths::bytes_to_path(a0 + 8, v3);
}
