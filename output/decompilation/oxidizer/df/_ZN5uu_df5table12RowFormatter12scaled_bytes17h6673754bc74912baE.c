fn uu_df::table::RowFormatter::scaled_bytes(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x10]
    let v1: u64;  // [bp-0x8]
    let v3: u64;  // rbx
    let v4: u64;  // xmm0lq
    let v5: u128;  // xmm1
    let v6: u64;  // xmm2lq

    if *((a1 + 84) as &i8) != 2 {
        return uu_df::blocks::to_magnitude_and_suffix(a0, a2, 0, *((a1 + 84) as &i8));
    }
    v1 = v3;
    v4 = BinaryOp AddV;
    v5 = BinaryOp InterleaveLOV - 0x45300000000000004330000000000000;
    v6 = BinaryOp AddV;
    ceil(BinaryOp DivV);
    v0 = BinaryOp DivV;
    return <T as alloc::string::ToString>::to_string(a0, &v0) as u64;
}
