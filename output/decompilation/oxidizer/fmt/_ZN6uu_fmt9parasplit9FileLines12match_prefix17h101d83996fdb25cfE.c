fn uu_fmt::parasplit::FileLines::match_prefix(a0: void*, a1: u64, a2: u64) -> u8 {
    let v0: u64;  // [sp-0x8]

    if a0->field_0 != 0x8000000000000000 {
        v0 = 0x8000000000000000;
        return uu_fmt::parasplit::FileLines::match_prefix_generic(*(&a0->field_8 as &i64), *(&a0->field_10 as &i64), a1, a2, a0->field_4c) as i8;
    }
    return 1;
}
