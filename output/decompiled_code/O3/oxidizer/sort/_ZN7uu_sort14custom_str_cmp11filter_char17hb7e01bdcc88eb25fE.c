fn uu_sort::custom_str_cmp::filter_char(a0: u64, a1: u8, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x120]
    let v2: u64;  // rax

    if a2 {
        v2 = a0 - 48 & 4294967295;
        if v2 >= 10 {
            v2 = (a0 & -33) - 65;
            if v2 >= 26 {
                v2 = 0;
                if a0 > 32 {
                    return 0;
                }
                v0 = 0x100003600;
                if !(*((&v0 + ((a0 & 4294967295 & 63) >> 3)) as &i8) >> (a0 & 4294967295 & 63 & 7) & 1) {
                    return 0;
                }
            }
        }
    }
    v2 = v2 | -0x100 | 1;
    if a1 {
        v2 = v2 | -0x100 | a0 - 32 < 95;
        return v2;
    }
    return v2;
}
