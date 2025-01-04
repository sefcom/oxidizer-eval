fn uu_df::table::RowFormatter::scaled_bytes(a0: u64, a1: &struct_0, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x10], Other Possible Types: i64
    let v1: u64;  // [sp-0x8]
    let v3: u64;  // rax
    let v4: u64;  // rbx
    let v5: u256;  // ymm1
    let v6: u128;  // xmm1
    let v7: u64;  // xmm0lq
    let v8: u256;  // ymm0

    v3 = a1->field_54;
    if v3 == 2 {
        v1 = v4;
        v6 = BinaryOp InterleaveLOV - 0x45300000000000004330000000000000;
        ceil(v7);
        v0 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp InterleaveLOV - 0x45300000000000004330000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (BinaryOp InterleaveLOV - 0x45300000000000004330000000000000 >> 64 CONCAT BinaryOp InterleaveLOV - 0x45300000000000004330000000000000 >> 64) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp AddV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp DivV;
        return <T as alloc::string::ToString>::to_string(a0, &v0);
    }
    return uu_df::blocks::to_magnitude_and_suffix(a0, a2, 0, v3 & 4294967295);
}
