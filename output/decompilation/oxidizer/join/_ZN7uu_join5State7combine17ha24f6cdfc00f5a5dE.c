fn uu_join::State::combine(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u8;  // [bp-0xa9]
    let v1: u64;  // [bp-0xa8]
    let v2: struct8;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: struct16;  // [bp-0x90]
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x78]
    let v7: u64;  // [bp-0x70]
    let v8: struct40;  // [bp-0x68], Other Possible Types: u64
    let v9: u8;  // [bp-0x68]
    let v10: u64;  // [bp-0x68]
    let v11: u64;  // [bp-0x40]
    let v12: u64;  // [bp-0x38]
    let v14: u64;  // r14
    let v15: u64;  // r12
    let v16: u64;  // rdx
    let v17: u64;  // rax
    let v18: struct8;  // r15
    let v19: struct8;  // rcx
    let v20: u64;  // rax
    let v21: i64;  // rcx
    let v22: struct8;  // rcx
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v25: u64;  // rax
    let v26: struct8;  // rax
    let v29: void*;  // rax
    let v30: struct8;  // rax
    let v31: struct8;  // rax
    let v32: u64;  // rax
    let v33: struct8;  // rax

    v14 = a1;
    v15 = uu_join::State::get_current_key(a0);
    v11 = v15;
    v3 = v16;
    v12 = v16;
    v5 = *((a0 + 8) as &i64);
    v6 = *((a0 + 16) as &i64) * 48 + *((a0 + 8) as &i64);
    v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
    if !v17 {
        return 0;
    }
    v18 = v17;
    v19 = *((a2 + 8) as &i64);
    v20 = *((a2 + 16) as &i64) * 48 + v19;
    v0 = *((v21 + 40) as &i8);
    v2 = v19;
    v1 = v20;
    if *((v21 + 16) as &i64) {
        v22 = v19;
        v23 = v20;
        do {
            v4 = struct16 {
                field_0: v22
                field_8: v23
            };
            loop {
                v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v24 {
                    break;
                }
                v8 = struct40 {
                    field_0: &v11
                    field_8: a0
                    field_16: v18
                    field_24: a2
                    field_32: v24
                };
                v25 = uu_join::Repr<Sep>::print_format(v21, v14, &v8);
                if v25 {
                    return v25;
                }
                v9 = v0;
                v10 = v8.field_0 & -0x100 | v10;
                v26 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v26 {
                    return v26;
                }
            }
            v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
            v22 = v2;
            v23 = v1;
        } while (v18);
    } else {
        v7 = *((a2 + 64) as &i64);
        v22 = v19;
        v23 = v20;
        do {
            v4 = struct16 {
                field_0: v22
                field_8: v23
            };
            loop {
                v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v29 {
                    break;
                }
                v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v15);
                if v30 {
                    return v30;
                }
                v31 = uu_join::Repr<Sep>::print_fields(v21, v14, v18, *((a0 + 64) as &i64));
                if v31 {
                    return v31;
                }
                v32 = uu_join::Repr<Sep>::print_fields(v21, v14, v29, v7);
                if v32 {
                    return v32;
                }
                v8 = v0;
                v8 = v9 & -0x100 | v8;
                v33 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v33 {
                    return v33;
                }
            }
            v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
            v22 = v2;
            v23 = v1;
        } while (v18);
    }
    return 0;
}
