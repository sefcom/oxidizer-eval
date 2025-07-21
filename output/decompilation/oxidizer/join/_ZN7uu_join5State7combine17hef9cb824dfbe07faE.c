fn uu_join::State::combine(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u8;  // [bp-0xa1]
    let v1: u64;  // [bp-0xa0]
    let v2: struct16;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: struct16;  // [bp-0x88]
    let v5: u64;  // [bp-0x78]
    let v6: u64;  // [bp-0x70]
    let v7: struct40;  // [bp-0x68], Other Possible Types: u64
    let v8: u8;  // [bp-0x68]
    let v9: u64;  // [bp-0x68]
    let v10: core::fmt::Arguments;  // [bp-0x40]
    let v11: u64;  // [bp-0x38]
    let v13: core::fmt::Arguments;  // r15
    let v14: u64;  // rdx
    let v15: u64;  // rax
    let v16: struct8;  // r14
    let v17: struct16;  // rcx
    let v18: u64;  // rax
    let v19: i64;  // rcx
    let v20: struct16;  // rcx
    let v21: struct16;  // rax
    let v22: u64;  // rax
    let v23: u64;  // rax
    let v24: struct8;  // rax
    let v27: u64;  // rax
    let v28: struct8;  // rax
    let v29: struct8;  // rax
    let v30: struct8;  // rax
    let v31: struct8;  // rax

    v13 = uu_join::State::get_current_key(a0);
    v10 = v13;
    v3 = v14;
    v11 = v14;
    v5 = *((a0 + 8) as &i64);
    v6 = *((a0 + 16) as &i64) * 48 + *((a0 + 8) as &i64);
    v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
    if !v15 {
        return 0;
    }
    v16 = v15;
    v17 = *((a2 + 8) as &i64);
    v18 = *((a2 + 16) as &i64) * 48 + v17;
    v0 = *((v19 + 40) as &i8);
    v2 = v17;
    v1 = v18;
    if *((v19 + 16) as &i64) {
        v20 = v17;
        v21 = v18;
        do {
            v4 = struct16 {
                field_0: v20
                field_8: v21
            };
            loop {
                v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v22 {
                    break;
                }
                v7 = struct40 {
                    field_0: &v10
                    field_8: a0
                    field_16: v16
                    field_24: a2
                    field_32: v22
                };
                v23 = uu_join::Repr<Sep>::print_format(v19, a1, &v7);
                if v23 {
                    return v23;
                }
                v8 = v0;
                v9 = v7.field_0 & -0x100 | v9;
                v24 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v24 {
                    return v24;
                }
            }
            v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
            v20 = v2;
            v21 = v1;
        } while (v16);
    } else {
        v20 = v17;
        v21 = v18;
        do {
            v4 = struct16 {
                field_0: v20
                field_8: v21
            };
            loop {
                v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v27 {
                    break;
                }
                v28 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v13);
                if v28 {
                    return v28;
                }
                v29 = uu_join::Repr<Sep>::print_fields(v16, *((a0 + 64) as &i64), v19);
                if v29 {
                    return v29;
                }
                v30 = uu_join::Repr<Sep>::print_fields(v27, *((a2 + 64) as &i64), v19);
                if v30 {
                    return v30;
                }
                v7 = v0;
                v7 = v8 & -0x100 | v7;
                v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v31 {
                    return v31;
                }
            }
            v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
            v20 = v2;
            v21 = v1;
        } while (v16);
    }
    return 0;
}
