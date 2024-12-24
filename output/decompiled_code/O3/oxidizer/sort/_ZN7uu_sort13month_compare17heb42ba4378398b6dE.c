fn uu_sort::month_compare(a0: u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // [sp-0x10]
    let v3: u64;  // r14
    let v4: u64;  // rbx
    let v6: u64;  // rcx
    let v7: u64;  // rdx
    let v9: u64;  // rax

    v1 = v3;
    v0 = v4;
    v9 = (uu_sort::month_parse(a0, a1, a2) as i32 <= uu_sort::month_parse(a2, v6, v7) as i8 ? -(uu_sort::month_parse(a0, a1, a2) as i32 < uu_sort::month_parse(a2, v6, v7) as i8) : 1);
    return v9;
}
