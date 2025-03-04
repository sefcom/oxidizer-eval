fn uu_tail::follow::files::PathData::new(a0: &struct216, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x38]

    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a4, a5);
    *((a0 + 192) as &u64) = v0.field_16;
    *((a0 + 176) as &i128) = *(&v0.field_0 as &i128);
    *((a0 + 200) as &unsigned long) = a1;
    *((a0 + 208) as &unsigned long) = a2;
    memcpy(a0, a3, 176);
    return a0;
}
