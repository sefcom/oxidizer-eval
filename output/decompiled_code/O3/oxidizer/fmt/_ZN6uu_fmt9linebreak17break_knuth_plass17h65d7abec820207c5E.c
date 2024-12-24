fn uu_fmt::linebreak::break_knuth_plass(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0xc8]
    let v1: i8;  // [bp-0xc0]
    let v2: i8;  // [bp-0xb8]
    let v3: struct24;  // [bp-0xa8], Other Possible Types: i128
    let v4: i128;  // [sp-0x90], Other Possible Types: struct24
    let v5: i64;  // [sp-0x80]
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i64;  // [sp-0x68], Other Possible Types: Result<struct2, struct8>
    let v9: i8;  // [bp-0x60]
    let v10: i64;  // [sp-0x58]
    let v11: i64;  // [sp-0x50]
    let v12: struct24;  // [sp-0x48], Other Possible Types: i192
    let v14: i64;  // rdx
    let v15: i64;  // r12
    let v16: i64;  // r15
    let v17: i64;  // rax
    let v18: i64;  // rax
    let v19: i64;  // rdi
    let v20: i64;  // rax

    v10 = a0;
    v11 = a1;
    v12 = uu_fmt::linebreak::find_kp_breakpoints(<core::slice::iter::Iter<T> as core::clone::Clone>::clone(a0, a1), v14, a2);
    v3 = *((&v12 as &char + 8) as &i128);
    v4 = *((a2 + 8) as &i128);
    v5 = a2 + 48;
    v6 = *((a2 + 24) as &i64);
    v7 = &v10;
    v8 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v3, &v4);
    match v8 {
        Err(_) => {
            v15 = v9;
            return v15;
        },
        Ok(_) => {
            v16 = *((&v8 as &char + 2) as &i8) as u8 as u64;
            *(&v3.field_0 as &struct24) = struct24 {
                field_0: v10
                field_8: <UNKNOWN>
            };
            v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
            if v17 {
                if v16 as i8 {
                    v15 = uu_fmt::linebreak::write_newline(*((a2 + 8) as &i64), *((a2 + 16) as &i64), *((a2 + 24) as &i64));
                    if v15 {
                        return v15;
                    }
                }
                v4 = uu_fmt::linebreak::slice_if_fresh(v16 & 4294967295, *((v17 + 16) as &i64), *((v17 + 24) as &i64), *((v17 + 32) as &i64), *(v5 as &i8) as u8 as u64, v0, v1, v2);
                v15 = uu_fmt::linebreak::write_with_spaces(*((&v4 as &char + 8) as &i64), v4.field_16, v4, *((a2 + 24) as &i64));
                if v15 {
                    return v15;
                }
                loop {
                    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
                    if !v18 {
                        break;
                    }
                    v4 = uu_fmt::linebreak::slice_if_fresh(0, *((v18 + 16) as &i64), *((v18 + 24) as &i64), *((v18 + 32) as &i64), -0x100 | (*((v4.field_16) as &i8)) as u8 as u64, v0, v1, v2);
                    v15 = uu_fmt::linebreak::write_with_spaces(*((&v4 as &char + 8) as &i64), v4.field_16, v4.field_0 as i64, *((a2 + 24) as &i64));
                    if v15 {
                        return v15;
                    }
                }
            }
            v19 = *((a2 + 24) as &i64);
            v20 = *((v19 + 16) as &i64);
            if *(v19 as &i64) - v20 > 1 {
                *((*((v19 + 8) as &i64) + v20) as &i8) = 10;
                *((v19 + 16) as &i64) = v20 + 1;
                return 0;
            }
            v15 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v19, &g_41e28e, 1);
            return v15;
        },
    }
}
