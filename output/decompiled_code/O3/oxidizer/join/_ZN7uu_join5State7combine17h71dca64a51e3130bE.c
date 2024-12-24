fn uu_join::State::combine(a0: &u64, a1: u32, a2: &u64, a3: void*) -> u64 {
    let v0: u8;  // [sp-0xb1]
    let v1: u64;  // [sp-0xb0]
    let v2: u64;  // [sp-0xa8]
    let v3: u64;  // [sp-0xa0]
    let v4: u64;  // [sp-0x98]
    let v5: u64;  // [sp-0x90]
    let v6: u64;  // [sp-0x88]
    let v7: u64;  // [sp-0x80]
    let v8: u64;  // [sp-0x78]
    let v9: u64;  // [sp-0x70]
    let v10: u8;  // [bp-0x68], Other Possible Types: struct40
    let v11: u64;  // [sp-0x40]
    let v12: u64;  // [sp-0x38]
    let v14: u64;  // r15
    let v15: u64;  // rdx
    let v16: struct8;  // rax
    let v17: u64;  // rcx
    let v18: u64;  // rax
    let v19: u64;  // 4111
    let v20: u64;  // rcx
    let v21: u64;  // rax
    let v24: void*;  // rax
    let v25: u64;  // r12
    let v26: u64;  // rbp
    let v27: u64;  // rcx
    let v28: u64;  // rax
    let v29: struct8;  // rax

    v14 = uu_join::State::get_current_key(a0);
    v11 = v14;
    v3 = v15;
    v12 = v15;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v16 {
        return 0;
    }
    v17 = a2[1];
    v18 = a2[2] * 48 + v17;
    v19 = a3->field_140;
    v0 = a3->field_148;
    v2 = v17;
    v1 = v18;
    if !v19 {
        if !v11 {
            v14 = a3->field_120;
            v3 = a3->field_128;
        }
        v9 = a0[8];
        v25 = a3->field_108;
        v26 = a3->field_110;
        v8 = a2[8];
        do {
            v4 = v27;
            v5 = v28;
            loop {
                v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v29 {
                    break;
                }
                v24 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v14, v3);
                if v24 {
                    return v24;
                }
                v24 = uu_join::Repr<Sep>::print_fields(v25, v26, a1, v16, v9);
                if v24 {
                    return v24;
                }
                v24 = uu_join::Repr<Sep>::print_fields(v25, v26, a1, v29, v8);
                if v24 {
                    return v24;
                }
                v10 = v0;
                v24 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v10, 1);
                if v24 {
                    return v24;
                }
            }
            v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v27 = v2;
            v28 = v1;
        } while (v16);
    } else {
        do {
            v4 = v20;
            v5 = v21;
            while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next()) {
                v10 = struct40 {
                    field_0: &v11
                    field_8: a0
                    field_16: v22
                    field_24: a2
                    field_32: v23
                };
                v24 = uu_join::Repr<Sep>::print_format(a3, a1, &v10);
                if v24 {
                    return v24;
                }
                v10 = v0;
                v24 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v10, 1);
                if v24 {
                    return v24;
                }
            }
            v20 = v2;
            v21 = v1;
        } while (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next());
    }
}
