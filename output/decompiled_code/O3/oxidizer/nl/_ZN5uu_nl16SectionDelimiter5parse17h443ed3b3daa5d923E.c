fn uu_nl::SectionDelimiter::parse(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct104;  // [sp-0x88], Other Possible Types: i832
    let v2: i64;  // rbx
    let v3: i64;  // rbx
    let v4: i64;  // rax
    let v5: i64;  // r14

    v3 = v2 | -0x100 | 3;
    if a1 && a3 {
        v0 = core::str::pattern::StrSearcher::new(a0, a1, a2, a3);
        v4 = core::iter::traits::iterator::Iterator::fold(&v0);
        v5 = v4 * a3;
        if v4 == 1 {
            v3 = v3 | -0x100 | v5 == a1 ^ 3;
        } else if v4 == 2 {
            v3 = v3 | -0x100 | (v5 != a1) * 2 | 1;
        } else if v4 == 3 {
            v3 = (-0x100 | v5 != a1) * 3 & 4294967295;
        }
    }
    return v3 & 4294967295;
}
