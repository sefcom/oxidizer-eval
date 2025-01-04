fn uu_fmt::parasplit::FileLines::match_prefix(a0: &struct_0, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u32;  // rdx

    if a0->field_0 != 0x8000000000000000 {
        v0 = 0x8000000000000000;
        return uu_fmt::parasplit::FileLines::match_prefix_generic(*(&a0->field_8 as &i64), *(&a0->field_10 as &i64), a1, v2, a0->field_4c);
    }
    return -255;
}
