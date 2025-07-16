fn uu_fmt::linebreak::break_knuth_plass(a0: i64, a1: i64, a2: &struct32) -> long long {
    let v0: u128;  // [bp-0xa8]
    let v1: struct24;  // [bp-0x90], Other Possible Types: u320
    let v2: u32;  // [bp-0x88]
    let v3: i64;  // [bp-0x80]
    let v4: Result<struct2, struct8>;  // [bp-0x68]
    let v5: u8;  // [bp-0x67]
    let v6: u64;  // [bp-0x60]
    let v7: u64;  // [bp-0x58]
    let v8: u128;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v10: Result<struct24, struct24>;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v15: core::result::Result<(), std::io::error::Error>;  // r12
    let v17: u64;  // rax
    let v19: u8;  // bpl
    let v20: i64;  // rax
    let v22: i64;  // rdi
    let v23: u64;  // rax

    v7 = a0;
    v9 = a1;
    v10 = uu_fmt::linebreak::find_kp_breakpoints(<core::slice::iter::Iter<T> as core::clone::Clone>::clone(a0, a1), a2, a2);
    v0 = struct16 {
        field_0: v11
        field_8: *((&v10 as &char + 16) as &i64) * 16 + v11
    };
    v1 = struct40 {
        field_0: *((a2 + 8) as &i128)
        field_16: a2 + 48
        field_24: *((a2 + 24) as &i64)
        field_32: &v7
    };
    v4 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v0, &v1);
    match v4 {
        Err(v15) => {
        },
        Ok(_) => {
            v0 = v8;
            v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v17 {
LABEL_4bb804:
                v22 = *((a2 + 24) as &i64);
                v23 = *((v22 + 16) as &i64);
                if *(v22 as &i64) - v23 > 1 {
                    *((*((v22 + 8) as &i64) + v23) as &i8) = 10;
                    *((v22 + 16) as &u64) = v23 + 1;
                } else {
                    std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v22, "\n");
                }
            } else if !*((&v4 as &char + 2) as &i8) || (uu_fmt::linebreak::write_newline(*((a2 + 8) as &i64), *((a2 + 16) as &i64) as i32, *((a2 + 24) as &i64)), !v15) {
                v1 = uu_fmt::linebreak::slice_if_fresh(*((&v4 as &char + 2) as &i8) as u8 as u64, *((v17 + 16) as &i64), *((v17 + 24) as &i64), *((v17 + 32) as &i64), *(v3 as &i8), *((v17 + 58) as &i8), *((v17 + 56) as &i8), v5);
                uu_fmt::linebreak::write_with_spaces(v2, v3 as u32, v1.field_0, *((a2 + 24) as &i64));
                match v15 {
                    Err(_) => {
                        return v15;
                    },
                    Ok(_) => {
                        loop {
                            v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
                            if !v20 {
                                break;
                            }
                            v1 = uu_fmt::linebreak::slice_if_fresh(None, *((v20 + 16) as &i64), *((v20 + 24) as &i64), *((v20 + 32) as &i64), (*(v3 as &i8)) as u8 as u8, (*((v20 + 58) as &i8)) as u8 as u8, (*((v20 + 56) as &i8)) as u8 as u8, (v19) as u8 as u8);
                            uu_fmt::linebreak::write_with_spaces(v2, v3 as u32, v1.field_0, *((a2 + 24) as &i64));
                            if let Err(_) = v15 {
                                return v15;
                            }
                        }
                    },
                }
                goto LABEL_4bb804;
            }
        },
    }
    return v15;
}
