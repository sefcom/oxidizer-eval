fn uu_unexpand::unexpand_line(a0: void*, a1: &struct8, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32) -> u64 {
    let v0: u8;  // [bp-0xa8]
    let v1: u8;  // [bp-0xa0]
    let v2: u8;  // [sp-0x91]
    let v3: u32;  // [sp-0x90]
    let v4: u8;  // [sp-0x89]
    let v5: void*;  // [sp-0x88]
    let v6: &u64;  // [sp-0x80]
    let v7: u32;  // [sp-0x6c]
    let v8: u64;  // [sp-0x60]
    let v9: u32;  // [sp-0x54]
    let v10: u64;  // [sp-0x50]
    let v11: u8;  // [bp-0x48]
    let v12: u8;  // [bp-0x40]
    let v13: u64;  // [sp-0x20]
    let v14: u64;  // r13
    let v15: &u64;  // r13
    let v17: u64;  // rax
    let v18: u64;  // rax
    let v19: &u64;  // rbp
    let v20: u64;  // r15
    let v21: u64;  // r12
    let v22: u64;  // r13
    let v23: void*;  // rax
    let v24: &u64;  // rbx

    v13 = v14;
    v9 = a3;
    v7 = a2;
    v15 = a0;
    if !v8 {
        v3 = v18 & -0x100 | 1;
        v5 = 0;
    } else {
        v3 = v17 & -0x100 | 1;
        v5 = 0;
        v6 = a0;
        v8 = a0->field_10;
        v10 = a4 - 1;
        v2 = 3;
        if v10 >= 0 {
            uu_unexpand::next_char_info(&v11, v9 as i8, a0->field_8, v8, 0);
            v4 = v12;
            goto *((4313588 + vvar_270{stack -137} * 4) as &i32) + 4313588;
        } else {
            v19 = a1;
            uu_unexpand::write_tabs(v19, a5, a6, v5, 0, v2 == 2, v0, v1);
            v20 = v8 - 0;
            v21 = 0 + a0->field_8;
            v22 = v19[2];
            if v20 < *(v19) - v22 {
                memcpy(v19[1] + v22, v21, v20);
                v19[2] = v22 + v20;
                v5 = 0;
                v15 = v6;
            } else {
                v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v19, v21, v20);
                v5 = 0;
                v15 = v6;
                if v23 {
                    return v23;
                }
            }
        }
    }
    v24 = a1;
    uu_unexpand::write_tabs(v24, a5, a6, v5, 0, 0, v0, v1);
    v23 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v24);
    if !v23 {
        alloc::vec::Vec<T,A>::truncate(v15, 0);
        return 0;
    }
    return v23;
}
