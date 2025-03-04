fn uu_sort::custom_str_cmp::cmp_chars(a0: u32, a1: u32, a2: u32) -> u8 {
    let v1: u64;  // cc_dep1
    let v2: u64;  // cc_dep2
    let v3: u32;  // ecx
    let v4: u64;  // cc_ndep
    let v6: u8;  // al

    if !a2 {
        v1 = a0;
        v2 = a1;
    } else {
        if 26 <= a0 - 97 {
            v3 = a0;
        } else {
            v3 = a0 & 95;
        }
        v1 = v3;
        v2 = (26 <= a1 - 97 ? a1 : a1 & 95);
    }
    v6 = (!(amd64g_calculate_condition(2, 7, v1, v2, v4) & 1 & 255) ? v1 != v2 : 255);
    return v6;
}
