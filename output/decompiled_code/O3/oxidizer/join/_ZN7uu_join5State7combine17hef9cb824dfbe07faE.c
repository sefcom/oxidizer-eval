fn uu_join::State::combine(a0: &u64, a1: &u64, a2: &u64, a3: void*) -> u64 {
    let v0: u8;  // [sp-0xa1]
    let v1: u64;  // [sp-0xa0]
    let v2: u64;  // [sp-0x98]
    let v3: u64;  // [sp-0x90]
    let v4: u64;  // [sp-0x88]
    let v5: u64;  // [sp-0x80]
    let v6: u64;  // [sp-0x78]
    let v7: u64;  // [sp-0x70]
    let v8: u8;  // [bp-0x68], Other Possible Types: struct40
    let v9: u64;  // [sp-0x40]
    let v10: u64;  // [sp-0x38]
    let v12: u64;  // r15
    let v13: u64;  // rdx
    let v14: struct8;  // rax
    let v15: u64;  // rcx
    let v16: u64;  // rax
    let v17: u64;  // 4111
    let v18: u64;  // rcx
    let v19: u64;  // rax
    let v22: void*;  // rax
    let v25: u64;  // rcx
    let v26: u64;  // rax
    let v27: struct8;  // rax

    v12 = uu_join::State::get_current_key(a0);
    v9 = v12;
    v3 = v13;
    v10 = v13;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v14 {
        return 0;
    }
    v15 = a2[1];
    v16 = a2[2] * 48 + v15;
    v17 = a3->field_10;
    v0 = a3->field_28;
    v2 = v15;
    v1 = v16;
    if !v17 {
        if !v9 {
            v12 = a3->field_18;
            v3 = a3->field_20;
        }
        v25 = v15;
        v26 = v16;
        do {
            v4 = v25;
            v5 = v26;
            loop {
                v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v27 {
                    break;
                }
                v22 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v12, v3);
                if v22 {
                    return v22;
                }
                v22 = uu_join::Repr<Sep>::print_fields(a1, v14, a0[8]);
                if v22 {
                    return v22;
                }
                v22 = uu_join::Repr<Sep>::print_fields(a1, v27, a2[8]);
                if v22 {
                    return v22;
                }
                v8 = v0;
                v22 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v8, 1);
                if v22 {
                    return v22;
                }
            }
            v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v25 = v2;
            v26 = v1;
        } while (v14);
    } else {
        v18 = v15;
        v19 = v16;
        do {
            v4 = v18;
            v5 = v19;
            while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next()) {
                v8 = struct40 {
                    field_0: &v9
                    field_8: a0
                    field_16: v20
                    field_24: a2
                    field_32: v21
                };
                v22 = uu_join::Repr<Sep>::print_format(a3, a1, &v8);
                if v22 {
                    return v22;
                }
                v8 = v0;
                v22 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v8, 1);
                if v22 {
                    return v22;
                }
            }
            v18 = v2;
            v19 = v1;
        } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next());
    }
}
