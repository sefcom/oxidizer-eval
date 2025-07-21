fn uu_tail::follow::files::PathData::new(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct216 {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0x38]
    let v1: i64;  // rdi

    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a3, a4);
    *((v1 + 192) as &u64) = v0.field_16;
    *((v1 + 176) as &i128) = *(&v0.field_0 as &i128);
    *((v1 + 200) as &u64) = a0;
    *((v1 + 208) as &u64) = a1;
    memcpy(v1, a2, 176);
    return;
}
