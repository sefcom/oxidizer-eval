fn uu_mv::mv(a0: i64, a1: i64, a2: &struct56) -> long long {
    let v0: u64;  // [bp-0x58], Other Possible Types: struct_1 *
    let v1: u32;  // [bp-0x50]
    let v2: u8;  // [bp-0x48]
    let v3: u32;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]
    let v5: struct24;  // [bp-0x30]
    let v7: u8;  // r8b
    let v9: u32;  // rcx

    uu_mv::parse_paths(a0, a1, *((a2 + 50) as &i8), v7);
    if *((a2 + 24) as &i64) != 0x8000000000000000 {
        v5 = std::sys::os_str::bytes::Slice::to_owned();
        v4 = v5.field_16;
        memcpy(&v2, &v5, 16);
        return uu_mv::move_files_into_dir(v0, v1, v3, v9, a2);
    }
    return (v1 == 2 ? uu_mv::handle_two_paths(*((v0 + 8) as &i64), *((v0 + 16) as &i64), *((v0 + 32) as &i64), *((v0 + 40) as &i64), a2) : uu_mv::handle_multiple_paths(v0, v1, a2));
}
