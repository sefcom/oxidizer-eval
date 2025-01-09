fn uu_fmt::linebreak::break_knuth_plass(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0xc8]
    let v1: i8;  // [bp-0xc0]
    let v2: i8;  // [bp-0xb8]
    let v3: i128;  // [sp-0xa8]
    let v4: i192;  // [sp-0x90], Other Possible Types: struct24
    let v5: i64;  // [sp-0x80]
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: Result<struct2, struct8>;  // [sp-0x68], Other Possible Types: i72
    let v9: i64;  // [sp-0x58]
    let v10: i64;  // [sp-0x50]
    let v11: struct24;  // [sp-0x48], Other Possible Types: i192
    let v13: i64;  // rdx
    let v14: i64;  // r12
    let v15: i64;  // r15
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v18: i64;  // rdi
    let v19: i64;  // rax

    v9 = a0;
    v10 = a1;
    v11 = uu_fmt::linebreak::find_kp_breakpoints(<core::slice::iter::Iter<T> as core::clone::Clone>::clone(a0, a1), v13, a2);
    v3 = *((&v11 as &char + 8) as &i128);
    v4 = *((a2 + 8) as &i128);
    v5 = a2 + 48;
    v6 = *((a2 + 24) as &i64);
    v7 = &v9;
    v8 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v3, &v4);
    match v8 {
        Err(v14) => {
            return v14;
        },
        Ok(_) => {
            v15 = *((&v8 as &char + 2) as &i8) as u8 as u64;
            v3 = v9;
            v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
            if v16 {
                if v15 as i8 {
                    v14 = uu_fmt::linebreak::write_newline(*((a2 + 8) as &i64), *((a2 + 16) as &i64), *((a2 + 24) as &i64));
                    if v14 {
                        return v14;
                    }
                }
                v4 = uu_fmt::linebreak::slice_if_fresh(v15 & 4294967295, *((v16 + 16) as &i64), *((v16 + 24) as &i64), *((v16 + 32) as &i64), *(v5 as &i8) as u8 as u64, v0, v1, v2);
                v14 = uu_fmt::linebreak::write_with_spaces(*((&v4 as &char + 8) as &i64), v5, v4, *((a2 + 24) as &i64));
                if v14 {
                    return v14;
                }
                loop {
                    v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
                    if !v17 {
                        break;
                    }
                    v4 = uu_fmt::linebreak::slice_if_fresh(None, *((v17 + 16) as &i64), *((v17 + 24) as &i64), *((v17 + 32) as &i64), -0x100 | (*(v5 as &i8)) as u8 as u64, v0, v1, v2);
                    v14 = uu_fmt::linebreak::write_with_spaces(*((&v4 as &char + 8) as &i64), v5, v4, *((a2 + 24) as &i64));
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
            v14 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v18, "\n");
            return v14;
        },
    }
}
