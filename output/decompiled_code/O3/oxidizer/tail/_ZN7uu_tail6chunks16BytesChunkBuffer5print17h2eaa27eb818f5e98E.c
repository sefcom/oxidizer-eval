fn uu_tail::chunks::BytesChunkBuffer::print(a0: void*, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: &u64;  // [sp-0x60]
    let v1: &&struct_0;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v3: i8;  // [bp-0x40]
    let v4: u64;  // [sp-0x38]
    let v6: u64;  // rdx
    let v7: void*;  // rcx
    let v8: u64;  // rax
    let v9: void*;  // rax
    let v10: void*;  // rsi
    let v11: u64;  // rcx
    let v13: u64;  // rsi
    let v14: &&struct_0;  // r12
    let v15: &&struct_0;  // rdx
    let v16: &&struct_0;  // rcx
    let v17: &&struct_0;  // r13
    let v18: &&struct_0;  // r12
    let v19: &&struct_0;  // rcx
    let v21: &&struct_0;  // rcx
    let v22: &&struct_0;  // rdx
    let v25: &struct_0;  // rsi
    let v26: u64;  // r15
    let v27: u64;  // rbx
    let v28: void*;  // rax
    let v29: &u64;  // rax
    let v30: u128;  // xmm0

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
    v15 = v14 as &u8 + 0x8 * v9 as u64;
    v16 = v14 as &u8 + 0x8 * v7 as u64;
    v17 = v14 as &u8 + 0x8 * v10 as u64;
    v0 = 0;
    loop {
        v18 = v14;
        v19 = v16;
        if v15 != v19 {
            v1 = v17;
            v1 = v1;
        } else if !(v18 != v1) || !((v1 = v19, v1 = v1, v21 = v1, v18)) {
            break;
        }
        v17 = v1;
        v25 = *(v22);
        v26 = *(v22)->field_2000;
        if v26 >= 8193 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        v27 = a1[2];
        if *(a1) - v27 <= v26 {
            v28 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v25, v26, v19, a4, a5);
        } else {
            memcpy(a1[1] + v27, v25, v26);
            a1[2] = v27 + v26;
            v28 = 0;
        }
        v15 = v22 + 1;
        if v4 {
            v2 = 0x8000000000000000;
            v4 = v28;
            v29 = __rust_alloc(32, 8);
            v30 = *(&v2 as &i128);
            *(&v29[2] as &i8) = v3;
            v0 = v29;
            *(v29) = v30;
            return v0;
        }
    }
    return v0;
}
