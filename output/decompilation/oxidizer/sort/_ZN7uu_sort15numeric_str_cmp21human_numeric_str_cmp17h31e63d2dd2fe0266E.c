fn uu_sort::numeric_str_cmp::human_numeric_str_cmp(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x70]
    let v3: struct152;  // [bp-0x68]
    let v4: u64;  // [bp-0x58]
    let v5: u64;  // [bp-0x50]
    let v8: u64;  // r14
    let v9: u64;  // rax
    let v10: u64;  // r12
    let v17: core::option::Option<u32>;  // rax:rax

    v8 = *((*((a0 + 16) as &i64) + 8) as &i8);
    v9 = *((*((a1 + 16) as &i64) + 8) as &i8);
    if v8 != v9 {
        return (v9 < v8) - (v8 < v9);
    }
    v10 = *(a1 as &i64);
    v4 = *((a1 + 8) as &i64);
    v5 = *((a0 + 8) as &i64);
    v3 = *(a0 as &i64) + *((a0 + 8) as &i64);
    v17 = core::str::validations::next_code_point_reverse(&v0) as u128;
}
