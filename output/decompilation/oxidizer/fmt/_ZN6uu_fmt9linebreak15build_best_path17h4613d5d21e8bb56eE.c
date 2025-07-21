fn uu_fmt::linebreak::build_best_path(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: u32;  // rsi
    let v0: struct32;  // [bp-0x38]
    let v1: struct24;  // [bp-0x38]
    let v3: i64;  // rax
    let v4: i64;  // rdi
    let v5: struct40;  // rax

    v0 = struct32 {
        field_0: a2
        field_8: a2 + a3 * 8
        field_16: a0
        field_24: a1
    };
    v3 = core::iter::traits::iterator::Iterator::reduce(&v0);
    if v3 {
        v1 = uu_fmt::linebreak::build_best_path::{{closure}}(a0, a1, *(v3 as &i64));
        v5 = v1.field_0 as i64;
        *((v4 + 8) as &i128) = *((&v1.field_0 as &char + 8) as &i128);
    } else {
        *((v4 + 8) as &i64) = 8;
        *((v4 + 16) as &i64) = 0;
        v5 = 0;
    }
    *(v4 as &struct40) = v5;
    return;
}
