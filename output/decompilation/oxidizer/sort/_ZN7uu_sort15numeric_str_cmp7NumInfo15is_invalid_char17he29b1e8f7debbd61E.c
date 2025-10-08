fn uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(a0: i32, a1: i64, a2: i32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // rax

    if a0 != a2 {
        return v3 & -0x100 | a0 - 58 < -10;
    }
    v2 = v1 & -0x100 | 1;
    if *(a1 as &i8) == 1 {
        return v2;
    }
    *(a1 as &i8) = 1;
    v2 = 0;
    return v2;
}
