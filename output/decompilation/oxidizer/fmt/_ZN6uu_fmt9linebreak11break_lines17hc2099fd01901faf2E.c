fn uu_fmt::linebreak::break_lines(a0: void*, a1: i64, a2: i64) -> long long {
    let v0: void*;  // [bp-0xb0]
    let v1: void*;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: struct40;  // [bp-0x90]
    let v4: void*;  // [bp-0x88]
    let v5: struct56;  // [bp-0x68]
    let v7: void*;  // r12
    let v8: u64;  // r15
    let v10: u64;  // rbp
    let v11: u64;  // rbx
    let v12: core::fmt::rt::Argument;  // rbp
    let v13: u64;  // rbp
    let v14: u64;  // rbx
    let v15: u64;  // rbp
    let v16: u64;  // r12
    let v17: core::fmt::rt::Argument;  // r12
    let v18: u64;  // r15
    let v19: u64;  // rax
    let v20: u64;  // rax

    v3 = uu_fmt::parasplit::ParaWords::new(a1, a0);
    v7 = v4;
    v8 = v3.field_16;
    if v8 {
        v2 = v7[40] as i64;
        v0 = a0[88] as i64;
        if *((a1 + 72) as &i8) || *((a1 + 73) as &i8) == 1 {
            v13 = a0[40] as i64;
            v14 = *((a2 + 16) as &i64);
            if v13 < *(a2 as &i64) - v14 {
                memcpy(*((a2 + 8) as &i64) + v14, a0[32] as i64, v13);
                *((a2 + 16) as &u64) = v14 + v13;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, a0[32] as i64, v13);
                if v12 {
                    return v12;
                }
            }
        } else if !a0[104] as i8 {
            v10 = a0[64] as i64;
            v11 = *((a2 + 16) as &i64);
            if v10 < *(a2 as &i64) - v11 {
                memcpy(*((a2 + 8) as &i64) + v11, a0[56] as i64, v10);
                *((a2 + 16) as &u64) = v11 + v10;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, a0[56] as i64, v10);
                if v12 {
                    return v12;
                }
            }
        }
        v1 = v7;
        v15 = v7[24] as i64;
        v16 = *((a2 + 16) as &i64);
        if v15 < *(a2 as &i64) - v16 {
            memcpy(*((a2 + 8) as &i64) + v16, v7[16] as i64, v15);
            *((a2 + 16) as &u64) = v16 + v15;
            v17 = v1;
        } else {
            v17 = v1;
            std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v7[16] as i64, v15);
            if v12 {
                return v12;
            }
        }
        v18 = v8 * 64 + v17;
        v5 = struct56 {
            field_0: a1
            field_8: a0[56] as i128
            field_24: a2
            field_32: v0 + v2
            field_40: v0
            field_48: (!a0[104] as i8 ? *((a1 + 78) as &i8) : 1)
        };
        v19 = (!((*((a1 + 79) as &i8) | a0[104] as i8) & 1) ? uu_fmt::linebreak::break_knuth_plass(v17 + 64, v18, &v5 as u64) : uu_fmt::linebreak::break_simple(v17 + 64, v18, &v5 as u64));
    } else {
        v20 = *((a2 + 16) as &i64);
        if *(a2 as &i64) - v20 > 1 {
            *((*((a2 + 8) as &i64) + v20) as &i8) = 10;
            *((a2 + 16) as &u64) = v20 + 1;
            return v12;
        }
        std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, "\n");
    }
    v12 = v19;
    return v12;
}
