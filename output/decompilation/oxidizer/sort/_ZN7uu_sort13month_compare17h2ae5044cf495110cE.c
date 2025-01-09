fn uu_sort::month_compare(a0: u64, a1: u64, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // [sp-0x10]
    let v3: u64;  // r14
    let v4: u64;  // rbx
    let v7: u64;  // rax

    v1 = v3;
    v0 = v4;
    v7 = (uu_sort::month_parse(a0, a1) as i32 <= uu_sort::month_parse(a2, a3) as i8 ? -(uu_sort::month_parse(a0, a1) as i32 < uu_sort::month_parse(a2, a3) as i8) : 1);
    return v7;
}
