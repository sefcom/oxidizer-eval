fn uu_fmt::linebreak::break_knuth_plass(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0xc8]
    let v1: i8;  // [bp-0xc0]
    let v2: i8;  // [bp-0xb8]
    let v3: iNone;  // [sp-0xa8]
    let v4: struct24;  // [sp-0x90], Other Possible Types: struct40
    let v5: i64;  // [sp-0x80]
    let v6: Result<struct2, struct8>;  // [sp-0x68]
    let v7: i64;  // [sp-0x58]
    let v8: i64;  // [sp-0x50]
    let v9: struct24;  // [sp-0x48]
    let v11: i64;  // r15
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rdi
    let v15: i64;  // rax
    let v16: i64;  // r12

    v7 = a0;
    v8 = a1;
    v9 = uu_fmt::linebreak::find_kp_breakpoints(<core::slice::iter::Iter<T> as core::clone::Clone>::clone(a0, a1), a2, a2);
    v3 = *(&v9.field_8 as &i128);
    v4 = struct40 {
        field_0: *((a2 + 8) as &i128)
        field_16: a2 + 48
        field_24: *((a2 + 24) as &i64)
        field_32: &v7
    };
    v6 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v3, &v4);
    match v6 {
        Err(_) => {
            return v16;
        },
        Ok(_) => {
            v11 = *((&v6 as &char + 2) as &i8) as u8 as u64;
            v3 = *(&v7 as &i128);
            v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
            if v12 {
                if v11 as u8 && uu_fmt::linebreak::write_newline(*((a2 + 8) as &i64), *((a2 + 16) as &i64), *((a2 + 24) as &i64)) {
                    return v16;
                }
                v4 = uu_fmt::linebreak::slice_if_fresh(v11 & 4294967295, *((v12 + 16) as &i64), *((v12 + 24) as &i64), *((v12 + 32) as &i64), *(v5 as &i8) as u8 as u64, v0, v1, v2);
                if uu_fmt::linebreak::write_with_spaces(v4.field_8, v5, v4.field_0, *((a2 + 24) as &i64)) {
                    return v16;
                }
                loop {
                    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
                    if !v13 {
                        break;
                    }
                    v4 = uu_fmt::linebreak::slice_if_fresh(None, *((v13 + 16) as &i64), *((v13 + 24) as &i64), *((v13 + 32) as &i64), (*(v5 as &i8)) as u8 as u64, v0, v1, v2);
                    if uu_fmt::linebreak::write_with_spaces(v4.field_8, v5, v4.field_0, *((a2 + 24) as &i64)) {
                        return v16;
                    }
                }
            }
            v14 = *((a2 + 24) as &i64);
            v15 = *((v14 + 16) as &i64);
            if *(v14 as &i64) - v15 > 1 {
                *((*((v14 + 8) as &i64) + v15) as &i8) = 10;
                *((v14 + 16) as &unsigned long) = v15 + 1;
                return v16;
            }
            std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v14, "
");
            return v16;
        },
    }
}
