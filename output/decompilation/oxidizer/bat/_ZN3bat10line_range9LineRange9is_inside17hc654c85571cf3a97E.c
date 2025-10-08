fn bat::line_range::LineRange::is_inside(a0: i64, a1: u64, a2: u8, a3: u64) -> long long {
    let v1: u64;  // rax
    let v2: u64;  // r8
    let v3: struct24;  // r10
    let v4: core::str::pattern::CharSearcher;  // rcx

    v1 = *((a0 + 8) as &i64);
    v2 = *((a0 + 24) as &i64);
    if *(a0 as &i32) == 1 {
        if !(*((a0 + 16) as &i8) & 1) {
            return (v1 & -0x100 | v3 <= a1 & a2) & -0x100 | v3 <= a1 & a2 & a1 <= v2;
        } else if !(v3 <= a1 & a2) {
            return 0;
        }
    } else {
        if !(*((a0 + 16) as &i8) & 1) {
            return v1 & -0x100 | a1 <= v2 & v1 <= a1;
        } else if !(a2 & 1) {
            return v1 & -0x100 | v1 <= a1;
        } else if v1 > a1 {
            return 0;
        }
    }
    return v4 & -0x100 | a1 <= v4;
}
