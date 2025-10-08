fn uu_sort::custom_str_cmp::cmp_chars(a0: u32, a1: u32, a2: u32) -> long long {
    let v1: u32;  // 4096
    let v3: u64;  // rax

    if !a2 {
        return v3 & -0x100 | (a1 < a0) - 0 - (a0 < a1);
    }
    if 26 <= a1 - 97 {
        v1 = a1;
    } else {
        v1 = a1 & 95;
    }
    return a1 - 97 & 0xffffffffffffff00 | (v1 < a0) - 0 - (a0 < v1);
}
