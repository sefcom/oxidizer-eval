fn uu_fmt::linebreak::build_best_path(a0: &struct24, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: struct24;  // [sp-0x38]
    let v1: i64;  // [sp-0x30]
    let v2: i64;  // [sp-0x28]
    let v3: i64;  // [sp-0x20]
    let v5: struct8;  // rax

    v1 = a3 + a4 * 8;
    v2 = a1;
    v3 = a2;
    v5 = core::iter::traits::iterator::Iterator::reduce();
    if v5 {
        v0 = uu_fmt::linebreak::build_best_path::{{closure}}(a1, a2, *(v5 as &i64));
        return struct24 {
            field_0: a3
            field_8: *((&v0 as &char + 8) as &i128)
        };
    }
    *((a0 + 8) as &i64) = 8;
    *((a0 + 16) as &i64) = 0;
    a3 = 0;
}
