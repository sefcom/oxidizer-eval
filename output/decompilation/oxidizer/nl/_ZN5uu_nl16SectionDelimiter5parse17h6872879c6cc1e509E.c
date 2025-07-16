fn uu_nl::SectionDelimiter::parse(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: iNone;  // [bp-0x88]
    let v2: i64;  // rbx
    let v3: i64;  // rbx
    let v4: i64;  // rax

    v3 = v2 & -0x100 | 3;
    if a1 && a3 {
        v0 = core::str::pattern::StrSearcher::new(a0, a1, a2, a3);
        v4 = core::iter::traits::iterator::Iterator::fold(&v0);
    }
    return v3 & 4294967295;
}
