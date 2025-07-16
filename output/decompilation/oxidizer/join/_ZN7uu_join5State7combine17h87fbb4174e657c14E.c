fn uu_join::State::combine(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u8;  // [bp-0xa1]
    let v1: u64;  // [bp-0xa0]
    let v2: struct8;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: struct8;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x78]
    let v7: u64;  // [bp-0x70]
    let v8: u8;  // [bp-0x68], Other Possible Types: struct_0 *
    let v9: u64;  // [bp-0x68]
    let v10: i64;  // [bp-0x60]
    let v11: struct8;  // [bp-0x58]
    let v12: i64;  // [bp-0x50]
    let v13: u64;  // [bp-0x48]
    let v14: u64;  // [bp-0x40]
    let v15: u64;  // [bp-0x38]
    let v17: u64;  // r15
    let v18: u64;  // rdx
    let v19: u64;  // rax
    let v20: struct8;  // r14
    let v21: struct8;  // rcx
    let v22: u64;  // rax
    let v23: i64;  // rcx
    let v24: struct8;  // rcx
    let v25: u64;  // rax
    let v26: u64;  // rax
    let v27: u64;  // rax
    let v28: struct8;  // rax
    let v31: u64;  // rax
    let v32: struct8;  // rax
    let v33: struct8;  // rax
    let v34: struct8;  // rax
    let v35: struct8;  // rax

    v17 = uu_join::State::get_current_key(a0);
    v14 = v17;
    v3 = v18;
    v15 = v18;
    v6 = *((a0 + 8) as &i64);
    v7 = *((a0 + 16) as &i64) * 48 + *((a0 + 8) as &i64);
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
    if !v19 {
        return 0;
    }
    v20 = v19;
    v21 = *((a2 + 8) as &i64);
    v22 = *((a2 + 16) as &i64) * 48 + v21;
    v0 = *((v23 + 40) as &i8);
    v2 = v21;
    v1 = v22;
    if *((v23 + 16) as &i64) {
        v24 = v21;
        v25 = v22;
        do {
            v4 = v24;
            v5 = v25;
            loop {
                v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v26 {
                    break;
                }
                v8 = &v14;
                v10 = a0;
                v11 = v20;
                v12 = a2;
                v13 = v26;
                v27 = uu_join::Repr<Sep>::print_format(v23, a1, &v8);
                if v27 {
                    return v27;
                }
                v8 = v0;
                v8 = v9 & -0x100 | v8;
                v28 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v28 {
                    return v28;
                }
            }
            v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            v24 = v2;
            v25 = v1;
        } while (v20);
    } else {
        v24 = v21;
        v25 = v22;
        do {
            v4 = v24;
            v5 = v25;
            loop {
                v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v31 {
                    break;
                }
                v32 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v17);
                if v32 {
                    return v32;
                }
                v33 = uu_join::Repr<Sep>::print_fields(v20, *((a0 + 64) as &i64), v23);
                if v33 {
                    return v33;
                }
                v34 = uu_join::Repr<Sep>::print_fields(v31, *((a2 + 64) as &i64), v23);
                if v34 {
                    return v34;
                }
                v8 = v0;
                v8 = v9 & -0x100 | v8;
                v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v35 {
                    return v35;
                }
            }
            v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            v24 = v2;
            v25 = v1;
        } while (v20);
    }
    return 0;
}
