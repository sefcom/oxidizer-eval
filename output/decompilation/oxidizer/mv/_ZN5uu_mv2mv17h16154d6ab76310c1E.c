fn uu_mv::mv(a0: i64, a1: i64, a2: &struct56) -> u64 {
    let v0: u8;  // [bp-0x58]
    let v1: i64;  // [bp-0x50], Other Possible Types: u32
    let v2: u64;  // [bp-0x48]
    let v3: struct24;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]
    let v6: u64;  // rax

    uu_mv::parse_paths(&v0, a0, a1, *((a2 + 50) as &i8));
    if (((0 ^ *((a2 + 24) as &i64)) & (0 ^ -(*((a2 + 24) as &i64)))) >> 63) as char {
        v6 = (v2 == 2 ? uu_mv::handle_two_paths(*((v1 + 8) as &i64), *((v1 + 16) as &i64), *((v1 + 32) as &i64), *((v1 + 40) as &i64), a2) : uu_mv::handle_multiple_paths(v1, v2, a2));
    } else {
        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        v6 = uu_mv::move_files_into_dir(v1, v2, v4, v3.field_16, a2);
    }
    return v6;
}
