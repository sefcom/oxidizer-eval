fn uu_df::table::RowFormatter::scaled_inodes(a0: &struct24, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // [sp-0x10]
    let v3: u64;  // rax

    v1 = a3;
    v0 = a2;
    v3 = a1->field_54;
    if v3 != 2 {
        return uu_df::blocks::to_magnitude_and_suffix(a0, a2, a3, v3 & 4294967295 & 4294967295);
    }
    return <T as alloc::string::ToString>::to_string(a0, &v0);
}
