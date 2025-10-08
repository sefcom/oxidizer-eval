fn uu_fmt::linebreak::build_best_path(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x38]
    let v1: struct24;  // [bp-0x38]
    let v3: i64;  // rax
    let v4: u64;  // rax
    let v5: void*;  // rax
    let v6: u64;  // rax

    v0 = struct32 {
        field_0: a3
        field_8: a3 + a4 * 8
        field_16: a1
        field_24: a2
    };
    v3 = core::iter::traits::iterator::Iterator::reduce(&v0);
    if !v3 {
        v5 = 0;
        return Ok(struct24 {
            field_0: v6
            field_8: 8
            field_16: 0
        });
    }
    v1 = uu_fmt::linebreak::build_best_path::{{closure}}(a1, a2, *(v3 as &i64));
    v4 = v1.field_0;
    *((a0 + 8) as &i128) = *((&v1.field_0 as &char + 8) as &i128);
}
