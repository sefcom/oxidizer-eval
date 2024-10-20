fn uu_tail::chunks::LinesChunkBuffer::print(a0: &struct_1, a1: &u64, a2: i64, a3: i64, a4: u64, a5: u64) -> u64 {
    let v0: &u64;  // [sp-0x60]
    let v1: &&struct_0;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v3: i8;  // [bp-0x40]
    let v4: u64;  // [sp-0x38]
    let v6: u64;  // rcx
    let v7: void*;  // rdx
    let v8: u64;  // rax
    let v9: void*;  // rax
    let v10: void*;  // rsi
    let v11: u64;  // rdx
    let v13: u64;  // rsi
    let v14: &&struct_0;  // r13
    let v15: &&struct_0;  // rcx
    let v16: &&struct_0;  // rdx
    let v17: &&struct_0;  // rcx
    let v19: &&struct_0;  // rcx
    let v20: &&struct_0;  // r13
    let v21: &struct_0;  // rsi
    let v22: u64;  // r15
    let v23: &&struct_0;  // r13
    let v24: u64;  // rbp
    let v25: u64;  // rax
    let v26: &u64;  // rax
    let v27: u128;  // xmm0

    v6 = a0->field_18;
    if !v6 {
        v9 = 0;
        v7 = 0;
        v10 = 0;
    } else {
        v7 = a0->field_0;
        v8 = a0->field_10;
        v9 = v8 - v11;
        a4 = v7 - v9;
        v13 = v6;
        v10 = v13 - a4;
        if v13 <= a4 {
            v7 = v6 + v9;
            v10 = 0;
        }
    }
    v14 = a0->field_8;
    v15 = 0x8 * v9 as u64 + v14 as &u8;
    v1 = 0x8 * v7 as u64 + v14 as &u8;
    v16 = 0x8 * v10 as u64 + v14 as &u8;
    v0 = 0;
    loop {
        v17 = v15;
        if v17 == v1 && (!(v14 != v16) || !((v1 = v16, v14))) {
            break;
        }
        v20 = v19;
        v21 = *(v20);
        v22 = *(v20)->field_2000;
        if v22 >= 8193 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        v23 = v20 + 1;
        v24 = a1[2];
        if *(a1) - v24 > v22 {
            memcpy(a1[1] + v24, v21, v22);
            a1[2] = v24 + v22;
        } else {
            v25 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v21, v22, v17, a4, a5);
            if v25 {
                v2 = 0x8000000000000000;
                v4 = v25;
                v26 = __rust_alloc(32, 8);
                v27 = *(&v2 as &i128);
                *(&v26[2] as &i8) = v3;
                v0 = v26;
                *(v26) = v27;
                return v0;
            }
        }
    }
    return v0;
}
