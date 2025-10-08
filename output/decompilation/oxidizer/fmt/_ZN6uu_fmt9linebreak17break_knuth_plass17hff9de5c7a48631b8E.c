fn uu_fmt::linebreak::break_knuth_plass(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u8;  // [bp-0xa9]
    let v1: struct16;  // [sp-0xa8]
    let v2: struct16;  // [bp-0xa8]
    let v3: struct40;  // [bp-0x90], Other Possible Types: struct24
    let v4: u32;  // [bp-0x88]
    let v5: i64;  // [bp-0x80]
    let v6: Result<struct2, struct8>;  // [bp-0x68]
    let v7: u8;  // [bp-0x67]
    let v8: void*;  // [bp-0x60]
    let v9: struct16;  // [bp-0x58]
    let v10: Result<struct24, struct24>;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v15: void*;  // r13
    let v16: u8;  // r12b
    let v17: i64;  // rax
    let v19: core::fmt::rt::Argument;  // r12b
    let v20: i64;  // rax
    let v22: i64;  // rdi
    let v23: u64;  // rax

    v9 = struct16 {
        field_0: a0
        field_8: a1
    };
    v10 = uu_fmt::linebreak::find_kp_breakpoints(<core::slice::iter::Iter<T> as core::clone::Clone>::clone(a0, a1), a2, a2);
    v1 = struct16 {
        field_0: v11
        field_8: *((&v10 as &char + 16) as &i64) * 16 + v1
    };
    v3 = struct40 {
        field_0: a2[8] as i128
        field_16: a2 + 48
        field_24: a2[24] as i64
        field_32: &v9
    };
    v6 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v1, &v3);
    match v6 {
        Err(v15) => {
        },
        Ok(_) => {
            v16 = *((&v6 as &char + 2) as &i8);
            *(&v2.field_0 as &i128) = *(&v9.field_0 as &i128);
            v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            if v17 {
                v0 = v7;
                if v16 {
                    uu_fmt::linebreak::write_newline(a2[8] as i64, a2[16] as i64, a2[24] as i64);
                    if !v15 {
                        goto LABEL_4617ef;
                    }
                } else {
LABEL_4617ef:
                    v3 = uu_fmt::linebreak::slice_if_fresh(v16 as u64, *((v17 + 16) as &i64), *((v17 + 24) as &i64), *((v17 + 32) as &i64), *(v5 as &i8), *((v17 + 58) as &i8), *((v17 + 56) as &i8), v0);
                    uu_fmt::linebreak::write_with_spaces(v4, v5, v3.field_0, a2[24] as i64);
                    if v15 {
                        return v15;
                    }
                    loop {
                        v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
                        if !v20 {
                            break;
                        }
                        v3 = uu_fmt::linebreak::slice_if_fresh(None, *((v20 + 16) as &i64), *((v20 + 24) as &i64), *((v20 + 32) as &i64), *(v5 as &i8), *((v20 + 58) as &i8), *((v20 + 56) as &i8), v19);
                        uu_fmt::linebreak::write_with_spaces(v4, v5, v3.field_0, a2[24] as i64);
                        if v15 {
                            return v15;
                        }
                    }
                    goto LABEL_4618ce;
                }
            } else {
LABEL_4618ce:
                v22 = a2[24] as i64;
                v23 = *((v22 + 16) as &i64);
                if *(v22 as &i64) - v23 > 1 {
                    *((*((v22 + 8) as &i64) + v23) as &i8) = 10;
                    *((v22 + 16) as &u64) = v23 + 1;
                } else {
                    std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v22, "\n");
                }
            }
        },
    }
    return v15;
}
