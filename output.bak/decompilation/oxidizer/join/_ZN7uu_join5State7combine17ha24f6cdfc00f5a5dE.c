fn uu_join::State::combine(a0: &u64, a1: u32, a2: &u64) -> u64 {
    let v0: &u8;  // [sp-0xa9]
    let v1: u64;  // [sp-0xa8]
    let v2: u64;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: u64;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: u64;  // [sp-0x78]
    let v8: u64;  // [sp-0x70]
    let v9: &u8;  // [bp-0x68]
    let v10: &u64;  // [sp-0x60]
    let v11: struct8;  // [sp-0x58]
    let v12: &u64;  // [sp-0x50]
    let v13: struct8;  // [sp-0x48]
    let v14: u64;  // [sp-0x40]
    let v15: u64;  // [sp-0x38]
    let v17: u64;  // r12
    let v18: u64;  // rdx
    let v19: struct8;  // rax
    let v20: struct8;  // r15
    let v21: u64;  // rcx
    let v22: u64;  // rax
    let v23: &struct_0;  // rcx
    let v24: u64;  // 4111
    let v25: u64;  // rcx
    let v26: u64;  // rax
    let v27: struct8;  // rax
    let v28: void*;  // rax
    let v30: u64;  // rcx
    let v31: u64;  // rax
    let v32: struct8;  // rax

    v17 = uu_join::State::get_current_key(a0);
    v14 = v17;
    v3 = v18;
    v15 = v18;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v19 {
        return 0;
    }
    v20 = v19;
    v21 = a2[1];
    v22 = a2[2] * 48 + v21;
    v24 = v23->field_10;
    v0 = v23->field_28 as i8;
    v2 = v21;
    v1 = v22;
    if !v24 {
        if !v14 {
            v17 = v23->field_18;
            v3 = v23->field_20;
        }
        v8 = a2[8];
        v30 = v21;
        v31 = v22;
        do {
            v4 = v30;
            v5 = v31;
            loop {
                v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v32 {
                    break;
                }
                v28 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v17, v3);
                if v28 {
                    return v28;
                }
                v28 = uu_join::Repr<Sep>::print_fields(v23, a1, v20, a0[8]);
                if v28 {
                    return v28;
                }
                v28 = uu_join::Repr<Sep>::print_fields(v23, a1, v32, v8);
                if v28 {
                    return v28;
                }
                v9 = v0;
                v28 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v9, 1);
                if v28 {
                    return v28;
                }
            }
            v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v30 = v2;
            v31 = v1;
        } while (v20);
    } else {
        v25 = v21;
        v26 = v22;
        do {
            v4 = v25;
            v5 = v26;
            loop {
                v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v27 {
                    break;
                }
                v9 = &v14;
                v10 = a0;
                v11 = v20;
                v12 = a2;
                v13 = v27;
                v28 = uu_join::Repr<Sep>::print_format(v23, a1, &v9);
                if v28 {
                    return v28;
                }
                v9 = v0;
                v28 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v9, 1);
                if v28 {
                    return v28;
                }
            }
            v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v25 = v2;
            v26 = v1;
        } while (v20);
    }
}
