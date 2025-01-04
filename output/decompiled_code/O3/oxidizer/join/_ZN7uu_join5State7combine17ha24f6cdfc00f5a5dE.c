fn uu_join::State::combine(a0: &u64, a1: &u64, a2: &u64, a3: void*) -> u64 {
    let v0: u8;  // [sp-0xa9]
    let v1: u64;  // [sp-0xa8]
    let v2: u64;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: u64;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: u64;  // [sp-0x78]
    let v8: u64;  // [sp-0x70]
    let v9: u8;  // [bp-0x68], Other Possible Types: struct40
    let v10: u64;  // [sp-0x40]
    let v11: u64;  // [sp-0x38]
    let v13: u64;  // r12
    let v14: u64;  // rdx
    let v15: struct8;  // rax
    let v16: u64;  // rcx
    let v17: u64;  // rax
    let v18: u64;  // 4111
    let v19: u64;  // rcx
    let v20: u64;  // rax
    let v23: void*;  // rax
    let v25: u64;  // rcx
    let v26: u64;  // rax
    let v27: struct8;  // rax

    v13 = uu_join::State::get_current_key(a0);
    v10 = v13;
    v3 = v14;
    v11 = v14;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v15 {
        return 0;
    }
    v16 = a2[1];
    v17 = a2[2] * 48 + v16;
    v18 = a3->field_10;
    v0 = a3->field_28;
    v2 = v16;
    v1 = v17;
    if !v18 {
        if !v10 {
            v13 = a3->field_18;
            v3 = a3->field_20;
        }
        v8 = a2[8];
        v25 = v16;
        v26 = v17;
        do {
            v4 = v25;
            v5 = v26;
            loop {
                v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v27 {
                    break;
                }
                v23 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v13, v3);
                if v23 {
                    return v23;
                }
                v23 = uu_join::Repr<Sep>::print_fields(a3, a1, v15, a0[8]);
                if v23 {
                    return v23;
                }
                v23 = uu_join::Repr<Sep>::print_fields(a3, a1, v27, v8);
                if v23 {
                    return v23;
                }
                v9 = v0;
                v23 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v9, 1);
                if v23 {
                    return v23;
                }
            }
            v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v25 = v2;
            v26 = v1;
        } while (v15);
    } else {
        v19 = v16;
        v20 = v17;
        do {
            v4 = v19;
            v5 = v20;
            while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next()) {
                v9 = struct40 {
                    field_0: &v10
                    field_8: a0
                    field_16: v21
                    field_24: a2
                    field_32: v22
                };
                v23 = uu_join::Repr<Sep>::print_format(a3, a1, &v9);
                if v23 {
                    return v23;
                }
                v9 = v0;
                v23 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v9, 1);
                if v23 {
                    return v23;
                }
            }
            v19 = v2;
            v20 = v1;
        } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next());
    }
}
