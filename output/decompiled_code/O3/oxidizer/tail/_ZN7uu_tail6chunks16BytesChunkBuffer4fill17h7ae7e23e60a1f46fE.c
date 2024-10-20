fn uu_tail::chunks::BytesChunkBuffer::fill(a0: &u64, a1: &struct24) -> u64 {
    let v0: u64;  // [sp-0x6038], Other Possible Types: &struct_0
    let v1: void*;  // [sp-0x6030], Other Possible Types: u64
    let v2: i8;  // [bp-0x6020]
    let v3: u64;  // [sp-0x6018]
    let v4: void*;  // [sp-0x5030]
    let v5: void*;  // [sp-0x4030]
    let v6: void*;  // [sp-0x3030]
    let v7: void*;  // [sp-0x2030]
    let v8: void*;  // [sp-0x1030]
    let v10: u64;  // rax
    let v11: &struct_0;  // rax
    let v12: u64;  // rdx
    let v13: void*;  // rcx
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: u64;  // rcx
    let v17: &&struct_0;  // rcx
    let v18: void*;  // rdi
    let v19: &&struct_0;  // rdx
    let v20: u64;  // rdi
    let v22: u64;  // rsi
    let v23: &struct_0;  // rax
    let v24: &u64;  // rax
    let v25: u64;  // rax
    let v26: &&struct_0;  // rcx
    let v27: void*;  // rsi
    let v28: &&struct_0;  // rdi
    let v29: u128;  // xmm0
    let v30: u64;  // r13
    let v31: void*;  // r13
    let v32: u64;  // r12
    let v33: void*;  // r12
    let v34: &struct_0;  // rax
    let v35: &struct_0;  // r13
    let v36: u64;  // rax
    let v37: u64;  // rcx
    let v39: u64;  // rcx
    let v43: &&struct_0;  // rdx
    let v44: &&struct_0;  // rsi
    let v46: &&struct_0;  // rsi

    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v1 = 0;
    v0 = v10;
    memset(&v7, 0, 0x2000);
    v11 = __rust_alloc(8200, 8);
    memset(v11, 0, 8200);
    loop {
        if <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a1, v11, 0x2000) {
            v1 = 0x8000000000000000;
            v3 = v12;
            v24 = __rust_alloc(32, 8);
            v29 = *(&v1 as &i128);
            *(&v24[2] as &i8) = v2;
            *(v24) = v29;
            return v24;
        }
        v11->field_2000 = v12;
        if !v12 {
            break;
        }
        a0[5] = a0[5] + v12;
        v13 = *(a0);
        v14 = a0[3];
        if v14 == v13 {
            alloc::collections::vec_deque::VecDeque<T,A>::grow(a0);
            v13 = *(a0);
            v14 = a0[3];
        }
        v15 = v14 + a0[2];
        if v13 > v15 {
            v13 = 0;
        }
        *((a0[1] + (v15 - v13) * 8) as &&struct_0) = v11;
        v16 = a0[3];
        a0[3] = v16 + 1;
        if amd64g_calculate_condition(4, 24, v16 + 1, 0, (v15 < v13) as u8 as u64) as char {
            core::option::expect_failed(); /* do not return */
        }
        v17 = a0[2];
        v18 = *(a0);
        v19 = a0[1];
        v22 = a0[5];
        if v22 - *((*((v19 as &u8 + 0x8 * v17 as u64 + -8 * v20) as &i64) + 0x2000) as &i64) > a0[4] {
            if v18 > (v17 as &char + 1) as &&struct_0 {
                v18 = 0;
            }
            *(&a0[2] as &unsigned long) = v17 + -(v18) + 1;
            a0[3] = v16;
            v11 = *((v19 as &u8 + 0x8 * v17 as u64) as &i64);
            a0[5] = v22 - v11->field_2000;
        } else {
            v23 = __rust_alloc(8200, 8);
            v11 = v23;
            memcpy(v23, &v7, 0x2000);
            v11->field_2000 = 0;
        }
    }
    v25 = a0[3];
    if !v25 {
        return 0;
    }
    v26 = a0[2];
    v27 = *(a0);
    v28 = a0[1];
    if (v26 as &char + 1) as &&struct_0 < v27 {
        v27 = 0;
    }
    *(&a0[2] as &unsigned long) = v26 + -(v27) + 1;
    a0[3] = v25 - 1;
    v30 = a0[5];
    v31 = v30 - a0[4];
    if v30 < a0[4] {
        v31 = 0;
    }
    v0 = *((v28 as &u8 + 0x8 * v26 as u64) as &i64);
    v32 = v0->field_2000;
    v33 = v32 - v31;
    if v32 <= v31 {
        v33 = 0;
        memset(&v5, 0, 0x2000);
    } else {
        memset(&v1, 0, 0x2000);
        if v32 >= 8193 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        memcpy(&v1, v31 + v0, v33);
        memcpy(&v5, &v1, 0x2000);
    }
    v34 = __rust_alloc(8200, 8);
    v35 = v34;
    memcpy(v34, &v5, 0x2000);
    v35->field_2000 = v33;
    v36 = *(a0);
    v37 = a0[3];
    if v37 == v36 {
        alloc::collections::vec_deque::VecDeque<T,A>::grow(a0);
    }
    v43 = a0[1];
    v44 = a0[2] - 1;
    a0[2] = v46;
    a0[3] = v39 + 1;
    *((v43 as &u8 + 0x8 * v46 as u64) as &&struct_0) = v35;
}
