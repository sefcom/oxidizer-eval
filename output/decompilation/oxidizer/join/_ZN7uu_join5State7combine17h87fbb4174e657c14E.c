fn uu_join::State::combine(a0: &u64, a1: u32, a2: &u64) -> u64 {
    let v0: &u8;  // [sp-0xa1]
    let v1: u64;  // [sp-0xa0]
    let v2: u64;  // [sp-0x98]
    let v3: u64;  // [sp-0x90]
    let v4: u64;  // [sp-0x88]
    let v5: u64;  // [sp-0x80]
    let v6: u64;  // [sp-0x78]
    let v7: u64;  // [sp-0x70]
    let v8: &u8;  // [bp-0x68]
    let v9: &u64;  // [sp-0x60]
    let v10: struct8;  // [sp-0x58]
    let v11: &u64;  // [sp-0x50]
    let v12: struct8;  // [sp-0x48]
    let v13: u64;  // [sp-0x40]
    let v14: u64;  // [sp-0x38]
    let v16: u64;  // r15
    let v17: u64;  // rdx
    let v18: struct8;  // rax
    let v19: struct8;  // r14
    let v20: u64;  // rcx
    let v21: u64;  // rax
    let v22: &struct_0;  // rcx
    let v23: u64;  // 4111
    let v24: struct8;  // rax
    let v25: void*;  // rax
    let v28: struct8;  // rax

    v16 = uu_join::State::get_current_key(a0);
    v13 = v16;
    v3 = v17;
    v14 = v17;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v18 {
        return 0;
    }
    v19 = v18;
    v20 = a2[1];
    v21 = a2[2] * 48 + v20;
    v23 = v22->field_10;
    v0 = v22->field_28 as i8;
    v2 = v20;
    v1 = v21;
    if !v23 {
        if !v13 {
            v16 = v22->field_18;
            v3 = v22->field_20;
        }
        do {
            v4 = v20;
            v5 = v21;
            loop {
                v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v28 {
                    break;
                }
                v25 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v16, v3);
                if v25 {
                    return v25;
                }
                v25 = uu_join::Repr<Sep>::print_fields(a1, v19, a0[8]);
                if v25 {
                    return v25;
                }
                v25 = uu_join::Repr<Sep>::print_fields(a1, v28, a2[8]);
                if v25 {
                    return v25;
                }
                v8 = v0;
                v25 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v8, 1);
                if v25 {
                    return v25;
                }
            }
            v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            v20 = v2;
            v21 = v1;
        } while (v19);
    } else {
        do {
            v4 = v20;
            v5 = v21;
            loop {
                v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v24 {
                    break;
                }
                v8 = &v13;
                v9 = a0;
                v10 = v19;
                v11 = a2;
                v12 = v24;
                v25 = uu_join::Repr<Sep>::print_format(v22, a1, &v8);
                if v25 {
                    return v25;
                }
                v8 = v0;
                v25 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v8, 1);
                if v25 {
                    return v25;
                }
            }
            v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            v20 = v2;
            v21 = v1;
        } while (v19);
    }
}
