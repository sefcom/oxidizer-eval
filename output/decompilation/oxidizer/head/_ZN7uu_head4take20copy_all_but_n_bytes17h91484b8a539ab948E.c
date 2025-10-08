fn uu_head::take::copy_all_but_n_bytes(a0: u32, a1: u64, a2: u64) -> long long {
    let v0: void*;  // [bp-0xd0], Other Possible Types: struct8
    let v1: u64;  // [bp-0xc8]
    let v2: void*;  // [bp-0xc0]
    let v3: struct16;  // [bp-0xb8], Other Possible Types: u64
    let v4: struct32;  // [bp-0xb8], Other Possible Types: u64
    let v5: struct32;  // [bp-0xb8]
    let v6: u64;  // [bp-0xb0]
    let v7: u64;  // [bp-0xb0]
    let v8: u128;  // [bp-0xb0]
    let v9: u64;  // [bp-0xb0]
    let v10: u128;  // [bp-0xa8]
    let v11: u64;  // [bp-0xa0]
    let v12: void*;  // [bp-0x98]
    let v13: iNone;  // [bp-0x88]
    let v14: Option<struct32>;  // [bp-0x88], Other Possible Types: struct32
    let v15: iNone;  // [bp-0x88], Other Possible Types: struct32
    let v16: iNone;  // [bp-0x88]
    let v17: iNone;  // [bp-0x78], Other Possible Types: u64
    let v18: iNone;  // [bp-0x78]
    let v19: iNone;  // [bp-0x78]
    let v20: void*;  // [bp-0x50]
    let v21: struct8;  // [bp-0x50]
    let v22: u64;  // [bp-0x48]
    let v23: u128;  // [bp-0x40]
    let v25: core::result::Result<(), std::io::error::Error>;  // r15
    let v26: Result<struct32, struct24>;  // r12
    let v27: u64;  // rax
    let v28: u64;  // rcx
    let v29: u64;  // rax
    let v30: u64;  // rdx
    let v31: u64;  // r14
    let v32: i64;  // rax
    let v33: u64;  // rbx

    v20 = 0;
    v23 = 0;
    v22 = 8;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v12 = 0;
    loop {
        do {
            v3 = v4;
            v6 = v7;
            v13 = v16;
            v17 = v19;
            v27 = alloc::collections::vec_deque::VecDeque<T,A>::get(&v20);
            if !v27 || v26 < uu_head::take::TakeAllBuffer::remaining_bytes(v27) + a2 {
                match v25 {
                    Err(_) => {
                        v28 = (v25 - 1) * 32;
                        v17 = *((8 + v28 + 24) as &i64);
                        v13 = *((8 + v28 + 8) as &i128);
                        v11 = *((8 + v28 + 24) as &i64);
                        v8 = *((8 + v28 + 8) as &i128) as u128;
                        v17 = v18;
                    },
                    Ok(_) => {
                        v9 = 1;
                        v10 = 0 as u128;
                    },
                }
                vvar_354{stack -184} = struct16 OrderedDict([(0, vvar_35{reg 16}), (8, 𝜙@64b [((4611456, None), vvar_321{stack -176}), ((4611400, None), vvar_273{stack -176})])])
                if (uu_head::take::TakeAllBuffer::fill_buffer(&v3, a0) & 1) {
                    return v33;
                }
                v6 = v7;
                v3 = v4;
                if v30 {
                    v14 = v4;
                    v21 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(&v14);
                    v19 = v18;
                    v16 = v15;
                    v6 = v7;
                    v3 = v4;
                    continue;
                }
            }
            v3 = v4;
            v6 = v7;
            v31 = v26;
            if v31 <= a2 {
                return v33;
            }
            v32 = alloc::collections::vec_deque::VecDeque<T,A>::get(&v20);
            if !v32 {
                core::option::unwrap_failed(); /* do not return */
            }
            if (uu_head::take::TakeAllBuffer::write_bytes_limit(v32, a1, v31 - a2) & 1) {
                return v33;
            }
            v12 += v30;
            v19 = v17;
            v16 = v13;
        } while (!uu_head::take::TakeAllBuffer::is_empty(*((v32 + 16) as &i64), *((v32 + 24) as &i64)));
        v14 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v20);
        if (((0 ^ v14 as i64) & (0 ^ -(v13 as i64))) >> 63) as char {
            break;
        }
        v5 = v15;
        v0 = alloc::vec::Vec<T,A>::push(&v5);
        v19 = v17;
        v16 = v13;
    }
    core::option::unwrap_failed(); /* do not return */
}
