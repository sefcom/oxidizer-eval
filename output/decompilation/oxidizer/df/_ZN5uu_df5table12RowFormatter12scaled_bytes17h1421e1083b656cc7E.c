fn uu_df::table::RowFormatter::scaled_bytes(a0: u64, a1: i64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x10]
    let v1: u64;  // [bp-0x8]
    let v3: u64;  // rbx
    let v4: iNone;  // xmm2
    let v5: iNone;  // xmm0
    let v6: iNone;  // xmm1
    let v7: iNone;  // xmm2

    if *((a1 + 84) as &i8) != 2 {
        return uu_df::blocks::to_magnitude_and_suffix(a0, a2, 0, *((a1 + 84) as &i8));
    }
    v1 = v3;
    v4 = BinaryOp InterleaveLOV - 0x45300000000000004330000000000000;
    v5 = (v4 >> 64) as u64 CONCAT (v4 >> 64) as u64;
    v6 = BinaryOp InterleaveLOV - 0x45300000000000004330000000000000;
    v7 = (v6 >> 64) as u64 CONCAT (v6 >> 64) as u64;
    ceil();
    v0 = (BinaryOp DivV) as u64;
    return <T as alloc::string::SpecToString>::spec_to_string(a0, &v0);
}
