fn uu_join::State::combine(a0: &u64, a1: u32, a2: &u64) -> u64 {
    let v0: &u8;  // [sp-0xb1]
    let v1: u64;  // [sp-0xb0]
    let v2: u64;  // [sp-0xa8]
    let v3: u64;  // [sp-0xa0]
    let v4: u64;  // [sp-0x98]
    let v5: u64;  // [sp-0x90]
    let v6: u64;  // [sp-0x88]
    let v7: u64;  // [sp-0x80]
    let v8: u64;  // [sp-0x78]
    let v9: u64;  // [sp-0x70]
    let v10: &u8;  // [bp-0x68]
    let v11: &u64;  // [sp-0x60]
    let v12: struct8;  // [sp-0x58]
    let v13: &u64;  // [sp-0x50]
    let v14: struct8;  // [sp-0x48]
    let v15: u64;  // [sp-0x40]
    let v16: u64;  // [sp-0x38]
    let v18: u64;  // r15
    let v19: u64;  // rdx
    let v20: struct8;  // rax
    let v21: struct8;  // r14
    let v22: u64;  // rcx
    let v23: u64;  // rax
    let v24: &struct_0;  // rcx
    let v25: u64;  // 4111
    let v26: struct8;  // rax
    let v27: void*;  // rax
    let v28: u64;  // r12
    let v29: u64;  // rbp
    let v30: struct8;  // rax

    v18 = uu_join::State::get_current_key(a0);
    v15 = v18;
    v3 = v19;
    v16 = v19;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v20 {
        return 0;
    }
    v21 = v20;
    v22 = a2[1];
    v23 = a2[2] * 48 + v22;
    v25 = v24->field_140;
    v0 = v24->field_148 as i8;
    v2 = v22;
    v1 = v23;
    if !v25 {
        if !v15 {
            v18 = v24->field_120;
            v3 = v24->field_128;
        }
        v9 = a0[8];
        v28 = v24->field_108;
        v29 = v24->field_110;
        v8 = a2[8];
        do {
            v4 = v22;
            v5 = v23;
            loop {
                v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v30 {
                    break;
                }
                v27 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v18, v3);
                if v27 {
                    return v27;
                }
                v27 = uu_join::Repr<Sep>::print_fields(v28, v29, a1, v21, v9);
                if v27 {
                    return v27;
                }
                v27 = uu_join::Repr<Sep>::print_fields(v28, v29, a1, v30, v8);
                if v27 {
                    return v27;
                }
                v10 = v0;
                v27 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v10, 1);
                if v27 {
                    return v27;
                }
            }
            v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v22 = v2;
            v23 = v1;
        } while (v21);
    } else {
        do {
            v4 = v22;
            v5 = v23;
            loop {
                v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v26 {
                    break;
                }
                v10 = &v15;
                v11 = a0;
                v12 = v21;
                v13 = a2;
                v14 = v26;
                v27 = uu_join::Repr<Sep>::print_format(v24, a1, &v10);
                if v27 {
                    return v27;
                }
                v10 = v0;
                v27 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v10, 1);
                if v27 {
                    return v27;
                }
            }
            v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v22 = v2;
            v23 = v1;
        } while (v21);
    }
}
