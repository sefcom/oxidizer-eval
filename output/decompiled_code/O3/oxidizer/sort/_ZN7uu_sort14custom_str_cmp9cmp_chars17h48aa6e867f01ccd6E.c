fn uu_sort::custom_str_cmp::cmp_chars(a0: u32, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // cc_dep1
    let v2: u64;  // cc_dep2
    let v3: u64;  // cc_ndep
    let v5: u64;  // rax

    if !a2 {
        v1 = a0;
        v2 = a1;
    } else {
        v1 = a0 & 95;
        v2 = (26 <= a1 - 97 ? a1 : a1 & 95);
    }
    v5 = (!(amd64g_calculate_condition(2, 7, v1, v2, v3) & 1 & 255) ? v1 != v2 : 255);
    return v5;
}
