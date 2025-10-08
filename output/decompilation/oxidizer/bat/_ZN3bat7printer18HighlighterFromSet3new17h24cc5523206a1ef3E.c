fn bat::printer::HighlighterFromSet::new(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0x18]
    let v2: i64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = syntect::easy::HighlightLines::new(a0, a1, a3);
    *((a0 + 208) as &u64) = a2;
    return v3;
}
