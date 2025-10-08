fn uu_sort::month_compare(a0: u64, a1: u64, a2: u64, a3: u64) -> char {
    let v1: u8;  // al

    v1 = uu_sort::month_parse(a0, a1);
    return (v1 > uu_sort::month_parse(a2, a3)) - 0 - (v1 < (uu_sort::month_parse(a2, a3) & 255));
}
