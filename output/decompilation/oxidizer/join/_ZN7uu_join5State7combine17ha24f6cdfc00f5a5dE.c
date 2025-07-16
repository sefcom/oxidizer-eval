fn uu_join::State::combine(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u8;  // [bp-0xa9]
    let v1: u64;  // [bp-0xa8]
    let v2: struct8;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: struct8;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u64;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: u8;  // [bp-0x68], Other Possible Types: struct_4 *
    let v10: u64;  // [bp-0x68]
    let v11: i64;  // [bp-0x60]
    let v12: struct8;  // [bp-0x58]
    let v13: i64;  // [bp-0x50]
    let v14: u64;  // [bp-0x48]
    let v15: u64;  // [bp-0x40]
    let v16: u64;  // [bp-0x38]
    let v18: u64;  // r14
    let v19: u64;  // r12
    let v20: u64;  // rdx
    let v21: u64;  // rax
    let v22: struct8;  // r15
    let v23: struct8;  // rcx
    let v24: u64;  // rax
    let v25: i64;  // rcx
    let v26: struct8;  // rcx
    let v27: u64;  // rax
    let v28: u64;  // rax
    let v29: u64;  // rax
    let v30: struct8;  // rax
    let v33: void*;  // rax
    let v34: struct8;  // rax
    let v35: struct8;  // rax
    let v36: u64;  // rax
    let v37: struct8;  // rax

    v18 = a1;
    v19 = uu_join::State::get_current_key(a0);
    v15 = v19;
    v3 = v20;
    v16 = v20;
    v6 = *((a0 + 8) as &i64);
    v7 = *((a0 + 16) as &i64) * 48 + *((a0 + 8) as &i64);
    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
    if !v21 {
        return 0;
    }
    v22 = v21;
    v23 = *((a2 + 8) as &i64);
    v24 = *((a2 + 16) as &i64) * 48 + v23;
    v0 = *((v25 + 40) as &i8);
    v2 = v23;
    v1 = v24;
    if *((v25 + 16) as &i64) {
        v26 = v23;
        v27 = v24;
        do {
            v4 = v26;
            v5 = v27;
            loop {
                v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v28 {
                    break;
                }
                v9 = &v15;
                v11 = a0;
                v12 = v22;
                v13 = a2;
                v14 = v28;
                v29 = uu_join::Repr<Sep>::print_format(v25, v18, &v9);
                if v29 {
                    return v29;
                }
                v9 = v0;
                v9 = v10 & -0x100 | v9;
                v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v30 {
                    return v30;
                }
            }
            v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            v26 = v2;
            v27 = v1;
        } while (v22);
    } else {
        v8 = *((a2 + 64) as &i64);
        v26 = v23;
        v27 = v24;
        do {
            v4 = v26;
            v5 = v27;
            loop {
                v33 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v33 {
                    break;
                }
                v34 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v19);
                if v34 {
                    return v34;
                }
                v35 = uu_join::Repr<Sep>::print_fields(v25, v18, v22, *((a0 + 64) as &i64));
                if v35 {
                    return v35;
                }
                v36 = uu_join::Repr<Sep>::print_fields(v25, v18, v33, v8);
                if v36 {
                    return v36;
                }
                v9 = v0;
                v9 = v10 & -0x100 | v9;
                v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v37 {
                    return v37;
                }
            }
            v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            v26 = v2;
            v27 = v1;
        } while (v22);
    }
    return 0;
}
