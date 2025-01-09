fn uu_tail::follow::files::PathData::new(a0: &struct216, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x38], Other Possible Types: struct24

    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a4, a5);
    *((a0 + 192) as &i64) = *((&v0 as &char + 16) as &i64);
    *((a0 + 176) as &i192) = v0;
    *((a0 + 200) as &i64) = a1;
    *((a0 + 208) as &i64) = a2;
    memcpy(a0, a3, 176);
    return a0;
}
