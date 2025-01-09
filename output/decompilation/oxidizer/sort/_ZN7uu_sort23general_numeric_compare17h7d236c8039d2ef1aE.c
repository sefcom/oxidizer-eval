fn uu_sort::general_numeric_compare(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = <uu_sort::GeneralF64ParseResult as core::cmp::PartialOrd>::partial_cmp(a0, a1);
    if v3 == 2 {
        core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
    }
    return v3;
}
