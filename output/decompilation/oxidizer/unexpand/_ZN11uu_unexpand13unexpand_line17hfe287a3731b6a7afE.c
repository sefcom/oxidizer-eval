fn uu_unexpand::unexpand_line(a0: void*, a1: &struct8, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: i64;  // [sp-0xa0]
    let v2: i8;  // [sp-0x91]
    let v3: i32;  // [sp-0x90]
    let v4: i8;  // [sp-0x89]
    let v5: i64;  // [sp-0x88]
    let v6: i32;  // [sp-0x6c]
    let v7: i64;  // [sp-0x60]
    let v8: i32;  // [sp-0x54]
    let v9: i64;  // [sp-0x50]
    let v10: struct17;  // [sp-0x48], Other Possible Types: i136
    let v11: i64;  // [sp-0x20]
    let v12: i64;  // [bp+0x8]
    let v13: i64;  // r13
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rbp
    let v18: i64;  // r15
    let v19: i64;  // r12
    let v20: i64;  // r13
    let v21: i64;  // rax
    let v22: i64;  // rbx

    v11 = v13;
    v8 = a3;
    v6 = a2;
    if !v7 {
        v3 = v16 & -0x100 | 1;
        v5 = 0;
    } else {
        v3 = v15 & -0x100 | 1;
        v5 = 0;
        v7 = *((a0 + 16) as &i64);
        v9 = a4 - 1;
        v2 = 3;
        if v9 >= 0 {
            v10 = uu_unexpand::next_char_info(v8, *((a0 + 8) as &i64), v7, 0);
            v4 = *((&v10 as &char + 8) as &i8);
            goto *((4313588 + vvar_275{stack -137} * 4) as &i32) + 4313588;
        } else {
            v17 = a1;
            v1 = 1;
            v0 = v3 & 1;
            uu_unexpand::write_tabs(v17, a5, v12, v5, 0, v2 == 2);
            v18 = v7 - 0;
            v19 = 0 + *((a0 + 8) as &i64);
            v20 = *((v17 + 16) as &i64);
            if v18 < *(v17 as &i64) - v20 {
                memcpy(*((v17 + 8) as &i64) + v20, v19, v18);
                *((v17 + 16) as &i64) = v20 + v18;
                v5 = 0;
            } else {
                v21 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v17, v19, v18);
                v5 = 0;
                if v21 {
                    return v21;
                }
            }
        }
    }
    v22 = a1;
    v1 = 1;
    v0 = v3 & 1;
    uu_unexpand::write_tabs(v22, a5, v12, v5, 0, 0);
    v21 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v22);
    if !v21 {
        alloc::vec::Vec<T,A>::truncate(a0, 0);
        return 0;
    }
    return v21;
}
