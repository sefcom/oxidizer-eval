fn uu_sort::month_compare(a0: i32, a1: i32, a2: i32, a3: i32) -> long long {
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v3: u64;  // r14
    let v4: u64;  // rbx
    let v5: u64;  // rbp

    v1 = v3;
    v0 = v4;
    v5 = uu_sort::month_parse(a0, a1) as i32;
    return ((v5 & 255) <= (uu_sort::month_parse(a2, a3) & 255) ? -((v5 & 255) < (uu_sort::month_parse(a2, a3) & 255)) : 1);
}
