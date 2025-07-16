fn uu_sort::FieldSelector::new(a1: &struct17, a2: i64, a3: i64) -> : struct56 {
    let a0: i64;  // rsi
    let v0: u128;  // [bp-0x38]
    let v1: u64;  // [bp-0x28]
    let v2: u128;  // [bp-0x20]
    let v3: u64;  // [bp-0x18]
    let v4: u64;  // [bp-0x10]
    let v6: u64;  // rax
    let v7: u32;  // edi
    let v8: u8;  // dil
    let v9: u8;  // r8b
    let v10: i64;  // rdi
    let v12: i64;  // rdi

    if !*((a0 + 8) as &i64) {
        <T as alloc::slice::hack::ConvertVec>::to_vec("invalid character index 0 for the start position of a field", a2);
        *((v10 + 55) as &i8) = 2;
        return;
    }
    v6 = a2 >> 40;
    v7 = v6;
    v4 = *((a0 + 16) as &i64);
    v2 = *(a0 as &i128);
    v1 = *((a1 + 16) as &i64);
    v0 = *(a1 as &i128);
    *((v12 + 32) as &u64) = v3;
    *((v12 + 40) as &u64) = v4;
    *(v12 as &u128) = v0;
    *((v12 + 16) as &u64) = v1;
    *((v12 + 24) as &i64) = v2;
    *((v12 + 52) as &u8) = (a2 >> 32) as u8;
    *((v12 + 48) as &u32) = a2 as u32;
    *((v12 + 53) as &u8) = v6;
    *((v12 + 54) as &u8) = v9;
    *((v12 + 55) as &u8) = v8;
    return;
}
