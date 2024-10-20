fn uu_tail::chunks::BytesChunkBuffer::fill(a0: void*, a1: void*) -> u64 {
    let v0: u64;  // [sp-0x6038]
    let v1: u64;  // [sp-0x6030], Other Possible Types: void*
    let v2: i8;  // [bp-0x6020]
    let v3: u64;  // [sp-0x6018]
    let v4: void*;  // [sp-0x5030]
    let v5: void*;  // [sp-0x4030]
    let v6: void*;  // [sp-0x3030]
    let v7: void*;  // [sp-0x2030]
    let v8: void*;  // [sp-0x1030]
    let v10: u64;  // rax
    let v11: &struct_0;  // rax
    let v12: &&struct_1;  // r13
    let v13: u64;  // rdx
    let v14: void*;  // rcx
    let v15: u64;  // rax
    let v16: u64;  // rax
    let v17: u64;  // rcx
    let v18: &&struct_0;  // rcx
    let v19: void*;  // rdi
    let v20: &&struct_0;  // rdx
    let v21: u64;  // rdi
    let v23: u64;  // rsi
    let v24: &struct_0;  // rax
    let v25: &u64;  // rax
    let v26: u64;  // rax
    let v27: &&struct_0;  // rcx
    let v28: void*;  // rsi
    let v29: &&struct_0;  // rdi
    let v30: u128;  // xmm0
    let v31: u64;  // r13
    let v32: void*;  // r13
    let v33: &struct_0;  // rbp
    let v34: u64;  // r12
    let v35: void*;  // r12
    let v36: &struct_0;  // rax
    let v37: &struct_0;  // r13
    let v38: u64;  // rax
    let v39: u64;  // rcx
    let v41: u64;  // rcx
    let v45: &&struct_0;  // rdx
    let v46: &&struct_0;  // rsi
    let v48: &&struct_0;  // rsi

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
    v12 = a1->field_8->field_18;
    loop {
        if v12() {
            v1 = 0x8000000000000000;
            v3 = v13;
            v25 = __rust_alloc(32, 8);
            v30 = *(&v1 as &i128);
            *(&v25[2] as &i8) = v2;
            *(v25) = v30;
            return v25;
        }
        v11->field_2000 = v13;
        if !v13 {
            break;
        }
        a0[5] = a0[5] + v13;
        v14 = *(a0);
        v15 = a0[3];
        if v15 == v14 {
            alloc::collections::vec_deque::VecDeque<T,A>::grow(a0);
            v14 = *(a0);
            v15 = a0[3];
        }
        v16 = v15 + a0[2];
        if v14 > v16 {
            v14 = 0;
        }
        *((a0[1] + (v16 - v14) * 8) as &&struct_0) = v11;
        v17 = a0[3];
        a0[3] = v17 + 1;
        if amd64g_calculate_condition(4, 24, v17 + 1, 0, (v16 < v14) as u8 as u64) as char {
            core::option::expect_failed(); /* do not return */
        }
        v18 = a0[2];
        v19 = *(a0);
        v20 = a0[1];
        v23 = a0[5];
        if v23 - *((*((v20 as &u8 + 0x8 * v18 as u64 + -8 * v21) as &i64) + 0x2000) as &i64) > a0[4] {
            if v19 > (v18 as &char + 1) as &&struct_0 {
                v19 = 0;
            }
            *(&a0[2] as &unsigned long) = v18 + -(v19) + 1;
            a0[3] = v17;
            v11 = *((v20 as &u8 + 0x8 * v18 as u64) as &i64);
            a0[5] = v23 - v11->field_2000;
        } else {
            v24 = __rust_alloc(8200, 8);
            v11 = v24;
            memcpy(v24, &v7, 0x2000);
            v11->field_2000 = 0;
        }
    }
    v26 = a0[3];
    if !v26 {
        return 0;
    }
    v27 = a0[2];
    v28 = *(a0);
    v29 = a0[1];
    if (v27 as &char + 1) as &&struct_0 < v28 {
        v28 = 0;
    }
    *(&a0[2] as &unsigned long) = v27 + -(v28) + 1;
    a0[3] = v26 - 1;
    v31 = a0[5];
    v32 = v31 - a0[4];
    if v31 < a0[4] {
        v32 = 0;
    }
    v33 = *((v29 as &u8 + 0x8 * v27 as u64) as &i64);
    v34 = v33->field_2000;
    v35 = v34 - v32;
    if v34 <= v32 {
        v35 = 0;
        memset(&v5, 0, 0x2000);
    } else {
        memset(&v1, 0, 0x2000);
        if v34 >= 8193 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        memcpy(&v1, v32 + v33, v35);
        memcpy(&v5, &v1, 0x2000);
    }
    v36 = __rust_alloc(8200, 8);
    v37 = v36;
    memcpy(v36, &v5, 0x2000);
    v37->field_2000 = v35;
    v38 = *(a0);
    v39 = a0[3];
    if v39 == v38 {
        alloc::collections::vec_deque::VecDeque<T,A>::grow(a0);
    }
    v45 = a0[1];
    v46 = a0[2] - 1;
    a0[2] = v48;
    a0[3] = v41 + 1;
    *((v45 as &u8 + 0x8 * v48 as u64) as &&struct_0) = v37;
}
