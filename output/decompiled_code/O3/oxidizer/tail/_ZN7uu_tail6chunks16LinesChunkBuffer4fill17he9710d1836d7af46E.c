fn uu_tail::chunks::LinesChunkBuffer::fill(a0: &u64, a1: &struct24) -> u64 {
    let v0: void*;  // [sp-0x4058]
    let v1: u64;  // [sp-0x4050]
    let v2: i8;  // [bp-0x4040]
    let v3: u64;  // [sp-0x4038]
    let v4: void*;  // [sp-0x4030]
    let v5: void*;  // [sp-0x3030]
    let v6: void*;  // [sp-0x2030]
    let v7: void*;  // [sp-0x1030]
    let v10: &struct_2;  // rax
    let v11: &struct_2;  // rbx
    let v12: u256;  // ymm0
    let v13: u64;  // rdi
    let v14: &struct_2;  // rsi
    let v15: u64;  // rdx
    let v16: u64;  // rax
    let v17: void*;  // rcx
    let v18: u64;  // rax
    let v19: u64;  // rax
    let v20: u64;  // rcx
    let v21: &&struct_3;  // rcx
    let v22: void*;  // rdi
    let v23: &&struct_3;  // rdx
    let v24: u64;  // rdi
    let v26: u64;  // rsi
    let v27: u8;  // bpl
    let v28: &struct_2;  // rax
    let v29: &u64;  // rax
    let v30: u64;  // rax
    let v31: u64;  // rcx
    let v32: void*;  // rdx
    let v34: u128;  // xmm0
    let v35: &struct_2;  // rcx
    let v36: u64;  // rdx
    let v37: &&struct_3;  // rcx
    let v38: void*;  // rsi
    let v39: &&struct_3;  // rdi
    let v40: u64;  // cc_ndep
    let v41: &struct_0;  // r15
    let v43: u64;  // r12
    let v44: u64;  // rsi
    let v45: u64;  // rax
    let v46: u64;  // rdx
    let v47: u64;  // rsi
    let v48: void*;  // rsi
    let v49: void*;  // r12
    let v50: u8;  // bpl
    let v51: u64;  // rbp
    let v52: &struct_0;  // r13
    let v53: u8;  // cl
    let v54: &struct_0;  // r13
    let v55: u64;  // rax
    let v56: u8;  // dil
    let v58: u64;  // rax
    let v59: u64;  // rbp
    let v60: void*;  // rax
    let v62: &struct_1;  // rax
    let v63: &struct_1;  // r13
    let v64: u64;  // rax
    let v65: u64;  // rcx
    let v67: u64;  // rcx
    let v71: &&struct_3;  // rdx
    let v72: &&struct_3;  // rsi
    let v74: &&struct_3;  // rsi

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    memset(&v6, 0, 0x2000);
    v10 = __rust_alloc(8216, 8);
    v11 = v10;
    memset(v10, 0, 8208);
    v11->field_2010 = a0[6];
    loop {
        v13 = a1;
        v14 = v11;
        if <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a1, v14, 0x2000) {
            v1 = 0x8000000000000000;
            v3 = v15;
            v29 = __rust_alloc(32, 8);
            v34 = *(&v1 as &i128);
            *(&v29[2] as &i8) = v2;
            *(v29) = v34;
            return v29;
        }
        v14->field_2000 = v15;
        if !v15 {
            break;
        }
        if v15 > 0x2000 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        v16 = _ZN6memchr4arch6x86_646memchr9count_raw2FN17hd7c020a0332f3b7cE();
        v14->padding_2008[0] = v16;
        a0[4] = a0[4] + v16;
        v17 = *(a0);
        v18 = a0[3];
        if v18 == v17 {
            alloc::collections::vec_deque::VecDeque<T,A>::grow(a0);
            v17 = *(a0);
            v18 = a0[3];
        }
        v19 = v18 + a0[2];
        if v17 > v19 {
            v17 = 0;
        }
        *((a0[1] + (v19 - v17) * 8) as &&struct_2) = v14;
        v20 = a0[3];
        a0[3] = v20 + 1;
        if amd64g_calculate_condition(4, 24, v20 + 1, 0, (v19 < v17) as u8 as u64) as char {
            core::option::expect_failed(); /* do not return */
        }
        v21 = a0[2];
        v22 = *(a0);
        v23 = a0[1];
        v26 = a0[4];
        if v26 - *((*((v23 as &u8 + 0x8 * v21 as u64 + -8 * v24) as &i64) + 8200) as &i64) > a0[5] {
            if v22 > (v21 as &char + 1) as &&struct_3 {
                v22 = 0;
            }
            *(&a0[2] as &unsigned long) = v21 + -(v22) + 1;
            a0[3] = v20;
            v11 = *((v23 as &u8 + 0x8 * v21 as u64) as &i64);
            *(&a0[4] as &[u8; 8]) = v26 - v11->padding_2008;
        } else {
            v27 = a0[6];
            v28 = __rust_alloc(8216, 8);
            v11 = v28;
            memcpy(v28, &v6, 0x2000);
            v12 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *(&v11->field_2000 as &i128) = 0;
            v11->field_2010 = v27;
        }
    }
    *(&v14->padding_2008[0] as &i64) = 0;
    v30 = a0[3];
    if !v30 {
        return 0;
    }
    v31 = a0[2] + v30 - 1;
    v32 = *(a0);
    if v32 > v31 {
        v32 = 0;
    }
    v35 = *((a0[1] + (v31 - v32) * 8) as &i64);
    v36 = v35->field_2000;
    if v36 >= 8193 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
    if !(v36 && a0[6] == v35->padding_0[1 + v36] || (v35->padding_2008 = v35->padding_2008 + 1, a0[4] = a0[4] + 1, v30 = a0[3], v30)) {
        core::option::unwrap_failed(); /* do not return */
    }
    do {
        v37 = a0[2];
        v38 = *(a0);
        v39 = a0[1];
        if (v37 as &char + 1) as &&struct_3 < v38 {
            v38 = 0;
        }
        *(&a0[2] as &unsigned long) = v37 + -(v38) + 1;
        v40 = 0 < v38;
        a0[3] = v30 - 1;
        v41 = *((v39 as &u8 + 0x8 * v37 as u64) as &i64);
        v43 = v41->field_2008;
        v45 = v44 - v43;
        v46 = a0[5];
        if v45 <= v46 {
            v47 = a0[4];
            v48 = v47 - v46;
            if v46 > v47 {
                v48 = 0;
            }
            v49 = v43 - v48;
            if v43 < v48 {
                v50 = v41->field_2010;
                v49 = 0;
                memset(&v4, 0, 0x2000);
                v0 = 0;
            } else {
                v51 = v41->field_2000;
                if v51 >= 8193 {
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                }
                v52 = 0;
                if v47 > v46 && v51 {
                    v53 = v41->field_2010;
                    v54 = 0;
                    do {
                        v55 = v48;
                        v56 = *((v41 + v54) as &i8) == v53;
                        v39 = v39 | -0x100 | v56;
                        v40 = *((v41 + v54) as &i8) < v53;
                        v52 = &v54->padding_1 as &struct_0;
                    } while (v51 - 1 != v54 && (v58 = v55 - (-0x100 | v56 as u64), v55 != (-0x100 | v56 as u64)));
                }
                v59 = v51 - v52 as &u8;
                if v51 <= v52 {
                    v0 = 0;
                    memset(&v4, 0, 0x2000);
                } else {
                    v60 = -(v59 - 0x2000);
                    if v59 >= 0x2000 {
                        v60 = 0;
                    }
                    memset((&v4 as &u8 + v59) as &void*, 0, v60);
                    v0 = v59;
                    memcpy(&v4, v52 + v41, v59);
                }
                v50 = v41->field_2010;
            }
            v62 = __rust_alloc(8216, 8);
            v63 = v62;
            memcpy(v62, &v4, 0x2000);
            v63->field_2000 = v0;
            v63->field_2008 = v49;
            v63->field_2010 = v50;
            v64 = *(a0);
            v65 = a0[3];
            if v65 == v64 {
                alloc::collections::vec_deque::VecDeque<T,A>::grow(a0);
            }
            v71 = a0[1];
            v72 = a0[2] - 1;
            a0[2] = v74;
            a0[3] = v67 + 1;
            *((v71 as &u8 + 0x8 * v74 as u64) as &&struct_1) = v63;
            return 0;
        }
        a0[4] = v45;
        v30 = a0[3];
    } while (v30);
}
