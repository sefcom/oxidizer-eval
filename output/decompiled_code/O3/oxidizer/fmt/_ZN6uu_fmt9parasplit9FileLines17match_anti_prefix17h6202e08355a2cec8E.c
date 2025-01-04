fn uu_fmt::parasplit::FileLines::match_anti_prefix(a0: &struct_0, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax

    v3 = v2 | -0x100 | 1;
    if a0->field_18 != 0x8000000000000000 {
        v0 = v3;
        v4 = uu_fmt::parasplit::FileLines::match_prefix_generic(*(&a0->field_20 as &i64), *(&a0->field_28 as &i64), a1, a2, a0->field_4d);
        v3 = v4 | -0x100 | v4 ^ 1;
    }
    return v3 | -0x100 | 1;
}
