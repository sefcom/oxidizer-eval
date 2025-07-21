fn uu_fmt::linebreak::break_lines(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0xb0]
    let v1: struct16;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: struct56;  // [bp-0x90]
    let v5: u64;  // [bp-0x90]
    let v6: u64;  // [bp-0x50]
    let v7: i8;  // [bp-0x48]
    let v9: u32;  // rcx
    let v10: i64;  // rax
    let v11: i64;  // r12
    let v12: u64;  // rax
    let v13: u64;  // r13
    let v14: u64;  // rbp
    let v15: core::result::Result<usize, core::num::error::ParseIntError>;  // r13
    let v16: core::result::Result<(), std::io::error::Error>;  // rax
    let v17: u64;  // r13
    let v18: u64;  // rbp
    let v19: core::fmt::Arguments;  // r12
    let v20: u64;  // r13

    uu_fmt::parasplit::ParaWords::new(a1, a0, v9);
    v1 = struct16 {
        field_0: v6
        field_8: *(&v7 as &i64) * 64 + v6
    };
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v10 {
        v11 = v10;
        v3 = *((v10 + 40) as &i64);
        v0 = *((a0 + 88) as &i64);
        if !(!*((a1 + 72) as &i8) && !*((a1 + 73) as &i8)) {
            v13 = *((a0 + 40) as &i64);
            v14 = *((a2 + 16) as &i64);
            if v13 < *(a2 as &i64) - v14 {
                memcpy(*((a2 + 8) as &i64) + v14, *((a0 + 32) as &i64), v13);
                *((a2 + 16) as &u64) = v14 + v13;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, *((a0 + 32) as &i64), v13);
                if let Err(_) = v15 {
                    return v15;
                }
            }
        } else if !*((a0 + 104) as &i8) {
            v17 = *((a0 + 64) as &i64);
            v18 = *((a2 + 16) as &i64);
            if v17 < *(a2 as &i64) - v18 {
                memcpy(*((a2 + 8) as &i64) + v18, *((a0 + 56) as &i64), v17);
                *((a2 + 16) as &u64) = v18 + v17;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, *((a0 + 56) as &i64), v17);
                if let Err(_) = v15 {
                    return v15;
                }
            }
        }
        v19 = *((v11 + 24) as &i64);
        v20 = *((a2 + 16) as &i64);
        if v19 < *(a2 as &i64) - v20 {
            memcpy(*((a2 + 8) as &i64) + v20, *((v11 + 16) as &i64), v19);
            *((a2 + 16) as &core::fmt::Arguments) = v20 + v19;
LABEL_4bb37a:
            if *((a0 + 104) as &i8) || (v4 = struct56 {
    field_0: a1
    field_8: *((a0 + 56) as &i128)
    field_24: a2
    padding_32: <UNKNOWN>
    field_40: v0
    field_48: *((a1 + 78) as &i8)
}, *((a1 + 79) as &i8)) {
                uu_fmt::linebreak::break_simple(v1.field_0, v2, &v5);
            } else {
                uu_fmt::linebreak::break_knuth_plass(v1.field_0, v2, &v4);
            }
LABEL_4bb3f7:
            v15 = v16;
        } else {
            std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, *((v11 + 16) as &i64), v19);
            if let Ok(_) = v15 {
                goto LABEL_4bb37a;
            }
        }
    } else {
        v12 = *((a2 + 16) as &i64);
        if *(a2 as &i64) - v12 > 1 {
            *((*((a2 + 8) as &i64) + v12) as &i8) = 10;
            *((a2 + 16) as &u64) = v12 + 1;
        } else {
            std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, "\n");
            goto LABEL_4bb3f7;
        }
    }
    return v15;
}
