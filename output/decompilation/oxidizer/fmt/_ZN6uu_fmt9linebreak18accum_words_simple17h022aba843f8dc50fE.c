fn uu_fmt::linebreak::accum_words_simple(a1: i64, a2: i32, a3: i8, a4: i64) -> : struct1 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v3: void*;  // rbx
    let v5: u64;  // r12
    let v6: &u64;  // r13
    let v7: u64;  // rax
    let v8: u64;  // rbx
    let v9: core::option::Option<&str>;  // rax
    let v10: u64;  // rax
    let v11: i64;  // rcx
    let v12: u32;  // rdx
    let v13: u8;  // al

    v1 = *((a4 + 40) as &i64);
    v3 = 0;
    v5 = a2 + v1 + uu_fmt::linebreak::BreakArgs::compute_width(*(a1 as &i64), a4, a2, 0) + v3;
    v6 = *((a1 + 24) as &i64);
    if v5 > *((*(a1 as &i64) + 48) as &i64) {
        v7 = uu_fmt::linebreak::write_newline(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v6);
        if !(!v7) {
            goto LABEL_4bb5ce;
        }
        v8 = *((a4 + 24) as &i64);
        v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(*((a4 + 32) as &i64), *((a4 + 16) as &i64), v8) as u64;
        v7 = uu_fmt::linebreak::write_with_spaces(v9, v12, 0, v6);
        if !(!v7) {
            goto LABEL_4bb5ce;
        }
        v10 = *((a4 + 57) as &i8);
        v11 = a0;
        *(v0 as &u64) = v1 + *((a1 + 40) as &i64);
    } else {
        v7 = uu_fmt::linebreak::write_with_spaces(*((a4 + 16) as &i64), *((a4 + 24) as &i64), v3, v6);
        if v7 {
LABEL_4bb5ce:
            v11 = a0;
            *(v0 as &u64) = v7;
            v13 = 2;
            v10 = v7 & -0x100 | 2;
        } else {
            v10 = *((a4 + 57) as &i8);
            v11 = a0;
            *(v0 as &u64) = v5;
        }
    }
    *((v11 + 8) as &u8) = v13;
    return v10;
}
