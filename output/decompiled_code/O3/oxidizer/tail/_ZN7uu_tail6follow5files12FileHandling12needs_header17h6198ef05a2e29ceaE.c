fn uu_tail::follow::files::FileHandling::needs_header(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax

    if !a3 {
        return 0;
    }
    v3 = v2 | -0x100 | 1;
    if a0->field_0 != 0x8000000000000000 {
        v0 = v3;
        v4 = <std::path::PathBuf as core::cmp::PartialEq<&std::path::Path>>::eq(a0->field_8, a0->field_10, a1, a2, a2, a5);
        v3 = v4 | -0x100 | v4 ^ 1;
        return v3;
    }
    return v3;
}
