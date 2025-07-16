fn uu_sort::general_numeric_compare(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = <uu_sort::GeneralF64ParseResult as core::cmp::PartialOrd>::partial_cmp(a0, a1);
    if v3 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    return v3;
}
