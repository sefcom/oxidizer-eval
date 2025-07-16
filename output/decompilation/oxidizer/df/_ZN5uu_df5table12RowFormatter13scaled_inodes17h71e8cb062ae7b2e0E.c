fn uu_df::table::RowFormatter::scaled_inodes(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v3: u64;  // rax

    v1 = a3;
    v0 = a2;
    v3 = *((a1 + 84) as &i8);
    if v3 != 2 {
        return uu_df::blocks::to_magnitude_and_suffix(a0, a2, a3, v3 & 255);
    }
    return <T as alloc::string::ToString>::to_string(a0, &v0) as u64;
}
