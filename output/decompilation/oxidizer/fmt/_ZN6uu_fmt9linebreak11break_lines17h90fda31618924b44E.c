fn uu_fmt::linebreak::break_lines(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0xb0]
    let v1: u128;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: i64;  // [bp-0x90]
    let v5: u128;  // [bp-0x88]
    let v6: i64;  // [bp-0x78]
    let v7: u64;  // [bp-0x68]
    let v8: u8;  // [bp-0x60]
    let v9: u64;  // [bp-0x50]
    let v10: i8;  // [bp-0x48]
    let v12: u32;  // rcx
    let v13: i64;  // rax
    let v14: i64;  // r12
    let v15: u64;  // rax
    let v16: u64;  // r13
    let v17: u64;  // rbp
    let v18: core::result::Result<usize, core::num::error::ParseIntError>;  // r13
    let v19: core::result::Result<(), std::io::error::Error>;  // rax
    let v20: u64;  // r13
    let v21: u64;  // rbp
    let v22: u64;  // r12
    let v23: u64;  // r13

    uu_fmt::parasplit::ParaWords::new(a1, a0, v12);
    v1 = struct16 {
        field_0: v9
        field_8: *(&v10 as &i64) * 64 + v9
    };
    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v13 {
        v14 = v13;
        v3 = *((v13 + 40) as &i64);
        v0 = *((a0 + 88) as &i64);
        if !(!*((a1 + 72) as &i8) && !*((a1 + 73) as &i8)) {
            v16 = *((a0 + 40) as &i64);
            v17 = *((a2 + 16) as &i64);
            if v16 < *(a2 as &i64) - v17 {
                memcpy(*((a2 + 8) as &i64) + v17, *((a0 + 32) as &i64), v16);
                *((a2 + 16) as &u64) = v17 + v16;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, *((a0 + 32) as &i64), v16);
                if let Err(_) = v18 {
                    return v18;
                }
            }
        } else if !*((a0 + 104) as &i8) {
            v20 = *((a0 + 64) as &i64);
            v21 = *((a2 + 16) as &i64);
            if v20 < *(a2 as &i64) - v21 {
                memcpy(*((a2 + 8) as &i64) + v21, *((a0 + 56) as &i64), v20);
                *((a2 + 16) as &u64) = v21 + v20;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, *((a0 + 56) as &i64), v20);
                if let Err(_) = v18 {
                    return v18;
                }
            }
        }
        v22 = *((v14 + 24) as &i64);
        v23 = *((a2 + 16) as &i64);
        if v22 < *(a2 as &i64) - v23 {
            memcpy(*((a2 + 8) as &i64) + v23, *((v14 + 16) as &i64), v22);
            *((a2 + 16) as &u64) = v23 + v22;
LABEL_4bb37a:
            if *((a0 + 104) as &i8) {
                v4 = a1;
                v5 = *((a0 + 56) as &i128);
                v7 = v0;
                v8 = 1;
                v6 = a2;
LABEL_4bb3e3:
                uu_fmt::linebreak::break_simple(v1 as i64, v2, &v4);
            } else {
                v4 = a1;
                v5 = *((a0 + 56) as &i128);
                v7 = v0;
                v8 = *((a1 + 78) as &i8);
                v6 = a2;
                if !(!*((a1 + 79) as &i8)) {
                    goto LABEL_4bb3e3;
                }
                uu_fmt::linebreak::break_knuth_plass(v1 as i64, v2, &v4);
            }
LABEL_4bb3f7:
            v18 = v19;
        } else {
            std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, *((v14 + 16) as &i64), v22);
            if let Ok(_) = v18 {
                goto LABEL_4bb37a;
            }
        }
    } else {
        v15 = *((a2 + 16) as &i64);
        if *(a2 as &i64) - v15 > 1 {
            *((*((a2 + 8) as &i64) + v15) as &i8) = 10;
            *((a2 + 16) as &u64) = v15 + 1;
        } else {
            std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, "\n");
            goto LABEL_4bb3f7;
        }
    }
    return v18;
}
