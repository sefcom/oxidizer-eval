fn uu_fmt::linebreak::build_best_path(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct24;  // [sp-0x38]
    let v1: i64;  // [sp-0x30]
    let v2: i64;  // [sp-0x28]
    let v3: i64;  // [sp-0x20]
    let v5: struct8;  // rax
    let v6: i64;  // rax

    v1 = a3 + a4 * 8;
    v2 = a1;
    v3 = a2;
    v5 = core::iter::traits::iterator::Iterator::reduce();
    if v5 {
        v0 = uu_fmt::linebreak::build_best_path::{{closure}}(a1, a2, *(v5 as &i64));
        v6 = a3;
        return struct24 {
            field_0: v6
            field_8: *((&v0.field_0 as &char + 8) as &i128)
        };
    }
    *((a0 + 8) as &i64) = 8;
    *((a0 + 16) as &i64) = 0;
    v6 = 0;
}
