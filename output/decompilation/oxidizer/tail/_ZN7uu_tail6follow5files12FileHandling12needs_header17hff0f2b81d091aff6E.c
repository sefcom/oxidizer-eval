fn uu_tail::follow::files::FileHandling::needs_header(a0: i64, a1: i64, a2: i64, a3: i32) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v3: u64;  // rax
    let v4: u64;  // rax

    if !a3 {
        return 0;
    } else if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        v0 = v4 & -0x100 | 1;
        v3 = <std::path::PathBuf as core::cmp::PartialEq<&std::path::Path>>::eq(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a1, a2);
        return v3 & -0x100 | v3 ^ 1;
    } else {
        return v4 & -0x100 | 1;
    }
}
