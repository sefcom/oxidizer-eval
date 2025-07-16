fn uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(a0: i32, a1: i64, a2: i32) -> long long {
    let v1: u64;  // rax
    let v2: u64;  // rax

    if a2 != 0x110000 && a2 == a0 {
        if *(a1 as &i8) {
            return v2 & -0x100 | 1;
        }
        *(a1 as &i8) = 1;
        return 0;
    }
    return v1 & -0x100 | a0 - 58 < -10;
}
