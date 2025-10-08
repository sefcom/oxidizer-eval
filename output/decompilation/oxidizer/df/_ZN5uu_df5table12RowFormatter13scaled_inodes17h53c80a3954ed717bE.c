fn uu_df::table::RowFormatter::scaled_inodes(a0: u64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct16;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = struct16 {
        field_0: a2
        field_8: a3
    };
    v2 = *((a1 + 84) as &i8);
    if v2 != 2 {
        return uu_df::blocks::to_magnitude_and_suffix(a0, a2, a3, v2 & 255);
    }
    return <T as alloc::string::SpecToString>::spec_to_string(a0, &v0);
}
