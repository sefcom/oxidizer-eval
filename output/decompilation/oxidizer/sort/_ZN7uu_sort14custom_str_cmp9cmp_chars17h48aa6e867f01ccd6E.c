fn uu_sort::custom_str_cmp::cmp_chars(a0: i32, a1: i32, a2: i32) -> char {
    let v1: u64;  // cc_dep1
    let v2: u64;  // cc_dep2
    let v4: u64;  // cc_ndep

    return (!(amd64g_calculate_condition(2, 7, v1, v2, v4) & 1 & 255) ? v1 != v2 : 255);
}
