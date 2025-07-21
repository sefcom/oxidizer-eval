fn uu_fmt::linebreak::break_knuth_plass(a0: i64, a1: i64, a2: &struct32) -> long long {
    let v0: struct16;  // [bp-0xa8]
    let v1: struct40;  // [bp-0x90], Other Possible Types: struct24
    let v2: u32;  // [bp-0x88]
    let v3: i64;  // [bp-0x80]
    let v4: Result<struct2, struct8>;  // [bp-0x68]
    let v5: u8;  // [bp-0x67]
    let v6: u64;  // [bp-0x60]
    let v7: struct16;  // [bp-0x58]
    let v8: struct16;  // [bp-0x58]
    let v9: struct24;  // [bp-0x48]
    let v10: u64;  // [bp-0x40]
    let v14: core::result::Result<(), std::io::error::Error>;  // r12
    let v16: u64;  // rax
    let v18: struct24;  // bpl
    let v19: i64;  // rax
    let v21: i64;  // rdi
    let v22: u64;  // rax

    v7 = struct16 {
        field_0: a0
        field_8: a1
    };
    v9 = uu_fmt::linebreak::find_kp_breakpoints(<core::slice::iter::Iter<T> as core::clone::Clone>::clone(a0, a1), a2, a2);
    v0 = struct16 {
        field_0: v10
        field_8: *((&v9.field_8 as &char + 8) as &i64) * 16 + v10
    };
    v0 = struct16 {
        field_0: v10
        field_8: *((&v9.field_8 as &char + 8) as &i64) * 16 + v10
    };
    v1 = struct40 {
        field_0: *((a2 + 8) as &i128)
        field_16: a2 + 48
        field_24: *((a2 + 24) as &i64)
        field_32: &v7
    };
    v4 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v0, &v1);
    match v4 {
        Err(v14) => {
        },
        Ok(_) => {
            v0 = v8;
            v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v16 {
LABEL_4bb804:
                v21 = *((a2 + 24) as &i64);
                v22 = *((v21 + 16) as &i64);
                if *(v21 as &i64) - v22 > 1 {
                    *((*((v21 + 8) as &i64) + v22) as &i8) = 10;
                    *((v21 + 16) as &u64) = v22 + 1;
                } else {
                    std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v21, "\n");
                }
            } else if !*((&v4 as &char + 2) as &i8) || (uu_fmt::linebreak::write_newline(*((a2 + 8) as &i64), *((a2 + 16) as &i64) as i32, *((a2 + 24) as &i64)), !v14) {
                v1 = uu_fmt::linebreak::slice_if_fresh(*((&v4 as &char + 2) as &i8) as u8 as u64, *((v16 + 16) as &i64), *((v16 + 24) as &i64), *((v16 + 32) as &i64), *(v3 as &i8), *((v16 + 58) as &i8), *((v16 + 56) as &i8), v5);
                uu_fmt::linebreak::write_with_spaces(v2, v3 as u32, v1.field_0, *((a2 + 24) as &i64));
                match v14 {
                    Err(_) => {
                        return v14;
                    },
                    Ok(_) => {
                        loop {
                            v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
                            if !v19 {
                                break;
                            }
                            v1 = uu_fmt::linebreak::slice_if_fresh(None, *((v19 + 16) as &i64), *((v19 + 24) as &i64), *((v19 + 32) as &i64), (*(v3 as &i8)) as u8 as u8, (*((v19 + 58) as &i8)) as u8 as u8, (*((v19 + 56) as &i8)) as u8 as u8, (v18) as u8 as u8);
                            uu_fmt::linebreak::write_with_spaces(v2, v3 as u32, v1.field_0, *((a2 + 24) as &i64));
                            if let Err(_) = v14 {
                                return v14;
                            }
                        }
                    },
                }
                goto LABEL_4bb804;
            }
        },
    }
    return v14;
}
