fn uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(a0: u32, a1: &struct1, a2: u32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax

    if a2 != 0x110000 && a2 == a0 {
        if *(a1) {
            return v2 | -0x100 | 1;
        }
        *(a1) = 1;
        return 0;
    }
    return v1 | -0x100 | a0 - 58 < -10;
}
