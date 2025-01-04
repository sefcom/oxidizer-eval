fn uu_fmt::linebreak::break_lines(a0: void*, a1: &u64, a2: &struct8) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i128;  // [bp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i128;  // [sp-0x88]
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i64;  // [sp-0x68]
    let v9: i8;  // [sp-0x60]
    let v10: struct40;  // [sp-0x58], Other Possible Types: i320
    let v12: i64;  // r13
    let v13: i64;  // rax
    let v14: i64;  // r12
    let v15: i8;  // 4100
    let v16: i64;  // rax
    let v17: i64;  // rsi
    let v18: i64;  // r13
    let v19: i64;  // rbp
    let v20: i64;  // r13
    let v21: i64;  // rsi
    let v22: i64;  // r13
    let v23: i64;  // rbp
    let v24: i64;  // rsi
    let v25: i64;  // r12
    let v26: i64;  // r13

    v12 = *((a0 + 88) as &i64);
    v10 = uu_fmt::parasplit::ParaWords::new(a1, a0);
    v1 = *((&v10 as &char + 8) as &i128);
    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if !v13 {
        v16 = *((a2 + 16) as &i64);
        if *(a2 as &i64) - v16 > 1 {
            *((*((a2 + 8) as &i64) + v16) as &i8) = 10;
            *((a2 + 16) as &i64) = v16 + 1;
            return 0;
        }
        v20 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &g_41e186, 1);
    } else {
        v14 = v13;
        v3 = *((v13 + 40) as &i64);
        v15 = *((a1 + 73) as &i8);
        v0 = v12;
        if !(!*((a1 + 72) as &i8)) || !(!v15) {
            v17 = *((a0 + 32) as &i64);
            v18 = *((a0 + 40) as &i64);
            v19 = *((a2 + 16) as &i64);
            if v18 < *(a2 as &i64) - v19 {
                memcpy(*((a2 + 8) as &i64) + v19, v17, v18);
                *((a2 + 16) as &i64) = v19 + v18;
            } else {
                v20 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v17, v18);
                if v20 {
                    return v20;
                }
            }
        } else if !*((a0 + 104) as &i8) {
            v21 = *((a0 + 56) as &i64);
            v22 = *((a0 + 64) as &i64);
            v23 = *((a2 + 16) as &i64);
            if v22 < *(a2 as &i64) - v23 {
                memcpy(*((a2 + 8) as &i64) + v23, v21, v22);
                *((a2 + 16) as &i64) = v23 + v22;
            } else {
                v20 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v21, v22);
                if v20 {
                    return v20;
                }
            }
        }
        v24 = *((v14 + 16) as &i64);
        v25 = *((v14 + 24) as &i64);
        v26 = *((a2 + 16) as &i64);
        if v25 < *(a2 as &i64) - v26 {
            memcpy(*((a2 + 8) as &i64) + v26, v24, v25);
            *((a2 + 16) as &i64) = v26 + v25;
        } else {
            v20 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v24, v25);
            if v20 {
                return v20;
            }
        }
        if !*((a0 + 104) as &i8) {
            v4 = a1;
            v7 = v7;
            v5 = *((a0 + 56) as &i128);
            v8 = v0;
            v9 = *((a1 + 78) as &i8);
            v6 = a2;
            if !(!*((a1 + 79) as &i8)) {
                goto LABEL_4bb3e3;
            }
            v20 = uu_fmt::linebreak::break_knuth_plass(v1, v2, &v4);
        } else {
            v4 = a1;
            v7 = v7;
            v5 = *((a0 + 56) as &i128);
            v8 = v0;
            v9 = 1;
            v6 = a2;
LABEL_4bb3e3:
            v20 = uu_fmt::linebreak::break_simple(v1, v2, &v4);
        }
    }
    return v20;
}
