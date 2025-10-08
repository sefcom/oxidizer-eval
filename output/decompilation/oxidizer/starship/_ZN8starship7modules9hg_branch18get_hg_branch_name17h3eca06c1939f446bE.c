fn starship::modules::hg_branch::get_hg_branch_name(a0: i64, a1: void*, a2: u64) -> void {
    let v0: struct24;  // [bp-0x50]
    let v1: u64;  // [bp-0x50]
    let v2: i64;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u8;  // [bp-0x38]
    let v5: i64;  // [bp-0x30]
    let v6: u64;  // [bp-0x28]
    let v7: struct24;  // [bp-0x20], Other Possible Types: u8
    let v10: &str;  // rax:rdx

    std::path::Path::join(&v4, a1, a2, ".hg");
    std::path::Path::join(&v7, v5, v6, "branch");
    v0 = starship::utils::read_file(&v7);
    if !((((0 ^ v0.field_0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v10 = core::str::<impl str>::trim_matches(v2, v3, a2);
        v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10.data_ptr, a2);
        return struct24 {
            field_0: v7.field_0
            field_16: v7.field_16
        };
    }
    return struct24 {
        field_0: v0.field_0
        field_16: v3
    };
}
