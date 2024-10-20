fn uu_base32::base_common::fast_encode::write_to_output(a0: u32, a1: void*, a2: u32, a3: void*, a4: u8) -> u64 {
    let v0: u32;  // [sp-0x4c]
    let v1: &&struct_0;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: &&struct_0;  // r14
    let v5: u64;  // r13
    let v6: u64;  // rax
    let v7: void*;  // rax
    let v8: u64;  // rdx
    let v10: u64;  // rbx
    let v11: void*;  // r12
    let v12: u64;  // r14
    let v13: void*;  // r12
    let v14: &u8;  // r14
    let v15: u8;  // r8b
    let v16: u64;  // rax
    let v17: u64;  // rax
    let v18: u64;  // r12
    let v19: void*;  // rcx

    v4 = a3->field_38;
    if *(a1) != 0x8000000000000000 {
        v0 = a4;
        v2 = a2;
        v5 = a1[3];
        v6 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a1);
        v1 = v4;
        v10 = v8 - (!(v8 | v5) >> 32 ? (0 CONCAT v8) /m v5 >> 32 & 4294967295 : (0 CONCAT v8) /m v5 >> 64);
        if v10 < v5 {
            v11 = 0;
        } else {
            v12 = a1[2];
            v13 = 0;
            do {
                if *(a1) - v12 < v5 {
                    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v12, v5);
                    v12 = a1[2];
                }
                memcpy(v12 + a1[1], v6, v5);
                v14 = a1[2] + v5;
                a1[2] = v14;
                if v14 == *(a1) {
                    alloc::raw_vec::RawVec<T,A>::grow_one(a1);
                }
                v6 += v5;
                v14[a1[1]] = 10;
                v12 = v14 + 1;
                a1[2] = v12;
                v13 -= v5;
            } while (v10 + v13 >= v5);
            v11 = -(v13);
        }
        v4 = v1;
        v7 = v4();
        v15 = v0;
        if v7 {
            return v7;
        }
        v16 = a1[3];
        v17 = v16 - v11;
        if v16 < v11 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        if v16 == v11 {
            a1[2] = 0;
            a1[3] = v17;
            if v15 {
                return 0;
            }
        } else {
            v18 = v11 + a1[2];
            v19 = *(a1);
            if v19 > v18 {
                v19 = 0;
            }
            a1[2] = v18 - v19;
            a1[3] = v17;
            if v15 {
                alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a1);
                v7 = v4();
                if v7 {
                    return v7;
                }
                goto LABEL_48fbbd;
            }
        }
        a1[2] = 0;
        return 0;
    } else {
        alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a1);
        v7 = v4();
        if v7 {
            return v7;
        } else if !v0 {
            if a1[3] {
                a1[3] = 0;
            }
            a1[2] = 0;
            return 0;
        }
LABEL_48fbbd:
        v7 = v4();
        if !v7 {
            return 0;
        }
        return v7;
    }
}
