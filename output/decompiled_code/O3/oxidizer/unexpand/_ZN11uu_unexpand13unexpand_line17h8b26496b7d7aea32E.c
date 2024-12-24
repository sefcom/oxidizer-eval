fn uu_unexpand::unexpand_line() -> u32 {
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
    let v10: i136;  // [sp-0x48], Other Possible Types: struct17
    let v11: i64;  // [sp-0x20]
    let v12: i64;  // [bp+0x8]
    let v13: i64;  // r13
    let v14: i32;  // ecx
    let v15: i32;  // edx
    let v16: i64;  // rdi
    let v18: i64;  // rax
    let v19: i64;  // r8
    let v20: i64;  // rax
    let v21: i64;  // rsi
    let v22: i64;  // rbp
    let v23: i64;  // r9
    let v24: i64;  // r15
    let v25: i64;  // r15
    let v26: i64;  // r12
    let v27: i64;  // r13
    let v28: i64;  // r13
    let v29: i64;  // rbx
    let v30: i64;  // rdx

    v11 = v13;
    v8 = v14;
    v6 = v15;
    if !v7 {
        v3 = v20 | -0x100 | 1;
        v5 = 0;
        goto LABEL_4b3e10;
    }
    v3 = v18 | -0x100 | 1;
    v5 = 0;
    v7 = *((v16 + 16) as &i64);
    v9 = v19 - 1;
    v2 = 3;
    if v9 >= 0 {
        v10 = uu_unexpand::next_char_info(-0x100 | v8, *((v16 + 8) as &i64), v7, 0);
        v4 = *((&v10 as &char + 8) as &i8);
        goto *((4314348 + vvar_269{stack -137} * 4) as &i32) + 4314348;
    }
    v22 = v21;
    v1 = 1;
    v0 = v3 & 1;
    uu_unexpand::write_tabs(v22, v23, v12, v5, 0, -0x100 | v2 == 2);
    v24 = v7;
    v25 = v24 - 0;
    if v24 < 0 {
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    v26 = 0 + *((v16 + 8) as &i64);
    v27 = *((v22 + 16) as &i64);
    if v25 < *(v22 as &i64) - v27 {
        memcpy(*((v22 + 8) as &i64) + v27, v26, v25);
        *((v22 + 16) as &i64) = v27 + v25;
        v5 = 0;
        goto LABEL_4b3e10;
    } else {
        v5 = 0;
        if std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v22, v26, v25) {
            return;
        }
LABEL_4b3e10:
        v29 = v21;
        v1 = 1;
        v0 = v3 & 1;
        uu_unexpand::write_tabs(v29, v23, v12, v5, 0, 0xffffffffffffff00);
        if !<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v29, v21, v30) {
            alloc::vec::Vec<T,A>::truncate(v28, 0);
        }
    }
}
