fn uu_join::State::combine(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: u64;  // [bp-0x98]
    let v5: u64;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: u64;  // [bp-0x78]
    let v9: u64;  // [bp-0x70]
    let v10: u64;  // [bp-0x68], Other Possible Types: struct_1 *
    let v11: u64;  // [bp-0x68]
    let v12: i64;  // [bp-0x60]
    let v13: u64;  // [bp-0x58]
    let v14: i64;  // [bp-0x50]
    let v15: u64;  // [bp-0x48]
    let v16: u64;  // [bp-0x40]
    let v17: u64;  // [bp-0x38]
    let v19: u64;  // rbx
    let v20: core::result::Result<(), std::io::error::Error>;  // r15
    let v21: u64;  // rdx
    let v22: struct8;  // rax
    let v23: struct8;  // r14
    let v24: u64;  // rcx
    let v25: u64;  // rax
    let v26: i64;  // rcx
    let v27: u64;  // rcx
    let v28: u64;  // rax
    let v29: u64;  // rax
    let v30: u64;  // rax
    let v31: struct8;  // rax
    let v34: void*;  // rax
    let v35: struct8;  // rax
    let v36: u64;  // rax
    let v37: u64;  // rax
    let v38: struct8;  // rax

    v19 = a1;
    v20 = uu_join::State::get_current_key(a0);
    v16 = v20;
    v3 = v21;
    v17 = v21;
    v6 = *((a0 + 8) as &i64);
    v7 = *((a0 + 16) as &i64) * 48 + *((a0 + 8) as &i64);
    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
    if !v22 {
        return 0;
    }
    v23 = v22;
    v24 = *((a2 + 8) as &i64);
    v25 = *((a2 + 16) as &i64) * 48 + v24;
    v0 = *((v26 + 328) as &i8);
    v2 = v24;
    v1 = v25;
    if *((v26 + 320) as &i64) {
        v27 = v24;
        v28 = v25;
        do {
            v4 = v27;
            v5 = v28;
            loop {
                v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v29 {
                    break;
                }
                v10 = &v16;
                v12 = a0;
                v13 = v23;
                v14 = a2;
                v15 = v29;
                v30 = uu_join::Repr<Sep>::print_format(v26, v19, &v10);
                if v30 {
                    return v30;
                }
                v10 = v0;
                v10 = v11 & -0x100 | v10;
                v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v31 {
                    return v31;
                }
            }
            v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            v27 = v2;
            v28 = v1;
        } while (v23);
    } else {
        v9 = *((a0 + 64) as &i64);
        v8 = *((a2 + 64) as &i64);
        v27 = v24;
        v28 = v25;
        do {
            v4 = v27;
            v5 = v28;
            loop {
                v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v34 {
                    break;
                }
                v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v20);
                if v35 {
                    return v35;
                }
                v36 = uu_join::Repr<Sep>::print_fields(*((v26 + 264) as &i64), *((v26 + 272) as &i64), v19, v23, v9);
                if v36 {
                    return v36;
                }
                v37 = uu_join::Repr<Sep>::print_fields(*((v26 + 264) as &i64), *((v26 + 272) as &i64), v19, v34, v8);
                if v37 {
                    return v37;
                }
                v10 = v0;
                v10 = v11 & -0x100 | v10;
                v38 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v38 {
                    return v38;
                }
            }
            v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            v27 = v2;
            v28 = v1;
        } while (v23);
    }
    return 0;
}
