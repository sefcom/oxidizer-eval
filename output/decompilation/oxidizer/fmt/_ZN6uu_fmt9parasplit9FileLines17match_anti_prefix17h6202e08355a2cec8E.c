fn uu_fmt::parasplit::FileLines::match_anti_prefix(a0: void*, a1: u32, a2: u32) -> u8 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    if a0->field_18 != 0x8000000000000000 {
        v0 = v2 & -0x100 | 1;
        uu_fmt::parasplit::FileLines::match_prefix_generic(a0->field_20, a0->field_28, a1, a2, a0->field_4d);
        return 1;
    }
    return 1;
}
