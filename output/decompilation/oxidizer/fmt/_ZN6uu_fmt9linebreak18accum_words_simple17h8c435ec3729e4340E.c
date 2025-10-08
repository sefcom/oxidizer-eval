fn uu_fmt::linebreak::accum_words_simple(a0: i64, a1: i64, a2: u64, a3: u8, a4: void*) -> long long {
    let v0: i64;  // [bp-0x48]
    let v1: u64;  // [bp-0x40]
    let v2: i64;  // [bp-0x38]
    let v4: u64;  // rax
    let v5: u32;  // rbp
    let v6: u64;  // r12
    let v7: &u64;  // r13
    let v8: u64;  // rax
    let v9: u64;  // rbx
    let v10: core::option::Option<&str>;  // rax
    let v11: u32;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rcx
    let v14: u8;  // al

    v2 = *(a1 as &i64);
    v4 = uu_fmt::linebreak::BreakArgs::compute_width(*(a1 as &i64), a4, a2, 0);
    v5 = ((*((a1 + 48) as &i8) || a4[58] as i8) == 1 ? ((a3 & a4[58] as i8 | a4[56] as i8) & 1) + 1 : 0);
    v1 = a4[40] as i64;
    v6 = a2 + a4[40] as i64 + v4 + v5;
    v7 = *((a1 + 24) as &i64);
    if v6 > *((v2 + 48) as &i64) {
        v8 = uu_fmt::linebreak::write_newline(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v7);
        if v8 {
            goto LABEL_4616b0;
        }
        v9 = a4[24] as i64;
        v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a4[32] as i64, a4[16] as i64, v9) as u64;
        v8 = uu_fmt::linebreak::write_with_spaces(v10, v11, 0, v7);
        if v8 {
            goto LABEL_4616b0;
        }
        v12 = a4[57] as i8;
        v13 = a0;
        *(v0 as &u64) = v1 + *((a1 + 40) as &i64);
    } else {
        v8 = uu_fmt::linebreak::write_with_spaces(a4[16] as i64, a4[24] as i64, v5, v7);
        if v8 {
LABEL_4616b0:
            v13 = a0;
            *(v0 as &u64) = v8;
            v14 = 2;
            v12 = v8 & -0x100 | 2;
        } else {
            v12 = a4[57] as i8;
            v13 = a0;
            *(v0 as &u64) = v6;
        }
    }
    *((v13 + 8) as &u8) = v14;
    return v12;
}
