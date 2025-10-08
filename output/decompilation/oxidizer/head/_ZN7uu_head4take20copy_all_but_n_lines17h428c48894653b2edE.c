fn uu_head::take::copy_all_but_n_lines(a0: i128, a1: u64, a2: i384, a3: u8) -> long long {
    let v0: u32;  // [bp-0xf4]
    let v1: void*;  // [bp-0xf0], Other Possible Types: struct8
    let v2: u64;  // [bp-0xe8]
    let v3: void*;  // [bp-0xe0]
    let v4: iNone;  // [bp-0xd8]
    let v5: Result<struct16, struct8>;  // [bp-0xd8]
    let v6: struct48;  // [bp-0xd8]
    let v7: Option<struct48>;  // [bp-0xd8]
    let v8: u64;  // [bp-0xd0]
    let v9: core::fmt::rt::Argument;  // [bp-0xc8]
    let v10: core::fmt::rt::Argument;  // [bp-0xc8]
    let v11: core::fmt::rt::Argument;  // [bp-0xc8]
    let v12: iNone;  // [bp-0xb8], Other Possible Types: struct16, struct24, u64
    let v13: struct24;  // [bp-0xb8]
    let v14: iNone;  // [bp-0xb8], Other Possible Types: struct24, u64
    let v15: void*;  // [bp-0xa8]
    let v16: struct8;  // [bp-0xa8]
    let v17: u64;  // [bp-0xa0]
    let v18: u128;  // [bp-0x98]
    let v19: u64;  // [bp-0x90]
    let v20: void*;  // [bp-0x88], Other Possible Types: struct16, u64
    let v21: struct16;  // [bp-0x88], Other Possible Types: u384
    let v22: struct16;  // [bp-0x88]
    let v23: struct48;  // [bp-0x88]
    let v24: struct24;  // [bp-0x80], Other Possible Types: u64
    let v25: struct24;  // [bp-0x80], Other Possible Types: u64
    let v26: iNone;  // [bp-0x80]
    let v27: u128;  // [bp-0x78]
    let v28: core::fmt::rt::Argument;  // [bp-0x70]
    let v29: u128;  // [bp-0x6f]
    let v30: u64;  // [bp-0x60]
    let v31: void*;  // [bp-0x50]
    let v32: u64;  // [bp-0x20]
    let v34: u64;  // r13
    let v35: core::fmt::rt::Argument;  // rbp
    let v36: i64;  // rdi
    let v37: void*;  // r12
    let v38: core::fmt::Arguments;  // 4096
    let v39: core::fmt::rt::Argument;  // 4096
    let v40: i64;  // rax
    let v41: core::fmt::rt::Argument;  // rcx
    let v42: u64;  // rax
    let v43: iNone;  // xmm0
    let v45: u64;  // rbx
    let v46: void*;  // r13
    let v47: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v50: i64;  // rbx
    let v51: u8;  // al

    v32 = v34;
    v15 = 0;
    v18 = 0;
    v17 = 8;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v0 = a3;
    v31 = 0;
    v38 = a2;
    v39 = a0;
    loop {
        do {
            v13 = v12;
            v20 = v21;
            v24 = v25;
            v40 = alloc::collections::vec_deque::VecDeque<T,A>::get(v36, 0);
            if v40 && v37 > *((v40 + 32) as &i64) + v38 {
                continue;
            }
            if v35 {
                v41 = (v35 - 1) * 48;
                v42 = *((8 + v41) as &i64);
                v12 = *((8 + v41 + 40) as &i64);
                v10 = *((8 + v41 + 24) as &i128);
                *(&v4 as &i128) = *((8 + v41 + 8) as &i128);
                v12 = v14;
                if v42 != 0x8000000000000000 {
                    v30 = v14;
                    v43 = v4 as i128;
                    v28 = v10;
                    v26 = v43;
                    v20 = v42;
                    v12 = v14;
                    goto LABEL_4662b4;
                }
            } else {
                v12 = v13;
            }
            v20 = 0;
            v24 = 1;
            v29 = 0;
            v27 = 0;
LABEL_4662b4:
            v13 = v12;
            vvar_515{stack -136} = struct16 OrderedDict([(0, 𝜙@64b [((4612754, None), vvar_470{stack -136}), ((4612710, None), vvar_469{stack -136})]), (8, 𝜙@64b [((4612754, None), vvar_471{stack -128}), ((4612710, None), vvar_399{stack -128})])])
            v5 = uu_head::take::TakeAllLinesBuffer::fill_buffer(&v22, v39, v0);
            if let Err(_) = v5 {
                return 1;
            }
            v24 = v25;
            v20 = v21;
            if v8 {
                v6 = v21;
                v16 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(&v6);
                v24 = v25;
                v20 = v21;
                v12 = v14;
                v9 = v11;
                continue;
            }
            v20 = v21;
            v24 = v25;
            if v37 < v38 {
                return 0;
            }
            v45 = v19 - 1;
            v46 = v37;
            if v46 == v38 {
                v47 = alloc::collections::vec_deque::VecDeque<T,A>::get(&v15, v45);
                if !v47 {
                    core::option::unwrap_failed(); /* do not return */
                } else if !*((v47 + 40) as &i8) {
                    return 0;
                }
            }
            v48 = alloc::collections::vec_deque::VecDeque<T,A>::get(&v15, v45);
            if !v48 {
                core::option::unwrap_failed(); /* do not return */
            }
            v49 = alloc::collections::vec_deque::VecDeque<T,A>::get_mut(&v15);
            if !v49 {
                core::option::unwrap_failed(); /* do not return */
            }
            v50 = v49;
            v5 = uu_head::take::TakeAllLinesBuffer::write_lines(v50, a1, v46 - v38 + *((v48 + 40) as &i8), v0);
            if let Err(_) = v5 {
                return 1;
            }
            v51 = uu_head::take::TakeAllLinesBuffer::is_empty(*((v50 + 16) as &i64), *((v50 + 24) as &i64));
            v31 += v8;
            v12 = v13;
            v9 = v10;
            v38 = a2;
            v39 = a0;
        } while (!v51);
        v7 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v15);
        if let None = v7 {
            break;
        }
        v23 = struct48 {
            field_0: v7 as i128
            field_16: v10
            field_32: v13
        };
        v1 = alloc::vec::Vec<T,A>::push(&v23);
        v12 = v13;
        v9 = v10;
        v38 = a2;
        v39 = a0;
    }
    core::option::unwrap_failed(); /* do not return */
}
