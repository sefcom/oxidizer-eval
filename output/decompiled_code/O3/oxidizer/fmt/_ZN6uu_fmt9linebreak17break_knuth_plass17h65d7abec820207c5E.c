fn uu_fmt::linebreak::break_knuth_plass(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0xc8]
    let v1: i8;  // [bp-0xc0]
    let v2: i8;  // [bp-0xb8]
    let v3: struct24;  // [bp-0xa8]
    let v4: struct24;  // [bp-0x90], Other Possible Types: i192, struct40
    let v5: i64;  // [sp-0x80]
    let v6: i64;  // [sp-0x68], Other Possible Types: Result<struct2, struct8>
    let v7: i8;  // [bp-0x60]
    let v8: i64;  // [sp-0x58]
    let v9: i64;  // [sp-0x50]
    let v10: i8;  // [bp-0x48]
    let v13: i64;  // rdx
    let v14: i64;  // r12
    let v15: i64;  // r15
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v18: i64;  // rdi
    let v19: i64;  // rax

    v8 = a0;
    v9 = a1;
    uu_fmt::linebreak::find_kp_breakpoints(&v10, <core::slice::iter::Iter<T> as core::clone::Clone>::clone(a0, a1), v13, a2);
    v3 = struct24 {
        field_0: v11
        field_8: <UNKNOWN>
    };
    v4 = struct40 {
        field_0: *((a2 + 8) as &i128)
        field_16: a2 + 48
        field_24: *((a2 + 24) as &i64)
        field_32: &v8
    };
    v6 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v3, &v4);
    match v6 {
        Err(_) => {
            v14 = v7;
            return v14;
        },
        Ok(_) => {
            v15 = *((&v6 as &char + 2) as &i8) as u8 as u64;
            v3 = struct24 {
                field_0: v8
                field_8: <UNKNOWN>
            };
            v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
            if v16 {
                if v15 as i8 {
                    v14 = uu_fmt::linebreak::write_newline(*((a2 + 8) as &i64), *((a2 + 16) as &i64), *((a2 + 24) as &i64));
                    if v14 {
                        return v14;
                    }
                }
                v4 = uu_fmt::linebreak::slice_if_fresh(v15 & 4294967295, *((v16 + 16) as &i64), *((v16 + 24) as &i64), *((v16 + 32) as &i64), *(v5 as &i8) as u8 as u64, v0, v1, v2);
                v14 = uu_fmt::linebreak::write_with_spaces(*((&v4 as &char + 8) as &i64), v4.field_16, v4.field_0 as i64, *((a2 + 24) as &i64));
                if v14 {
                    return v14;
                }
                loop {
                    v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
                    if !v17 {
                        break;
                    }
                    v4 = uu_fmt::linebreak::slice_if_fresh(0, *((v17 + 16) as &i64), *((v17 + 24) as &i64), *((v17 + 32) as &i64), -0x100 | (*((v4.field_16) as &i8)) as u8 as u64, v0, v1, v2);
                    v14 = uu_fmt::linebreak::write_with_spaces(*((&v4 as &char + 8) as &i64), v4.field_16, v4, *((a2 + 24) as &i64));
                    if v14 {
                        return v14;
                    }
                }
            }
            v18 = *((a2 + 24) as &i64);
            v19 = *((v18 + 16) as &i64);
            if *(v18 as &i64) - v19 > 1 {
                *((*((v18 + 8) as &i64) + v19) as &i8) = 10;
                *((v18 + 16) as &i64) = v19 + 1;
                return 0;
            }
            v14 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v18, &g_41e28e, 1);
            return v14;
        },
    }
}
