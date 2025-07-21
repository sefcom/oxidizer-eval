fn uu_join::State::combine(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: u8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: struct16;  // [bp-0x98]
    let v5: u64;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u64;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: struct16;  // [bp-0x68], Other Possible Types: struct40, u8
    let v10: u64;  // [bp-0x68]
    let v11: u64;  // [bp-0x68]
    let v12: u64;  // [bp-0x40]
    let v13: u64;  // [bp-0x38]
    let v15: u64;  // rbx
    let v16: core::result::Result<(), std::io::error::Error>;  // r15
    let v17: u64;  // rdx
    let v18: struct16;  // rax
    let v19: core::fmt::rt::Argument;  // r14
    let v20: u64;  // rcx
    let v21: u64;  // rax
    let v22: i64;  // rcx
    let v23: u64;  // rcx
    let v24: u64;  // rax
    let v25: u64;  // rax
    let v26: u64;  // rax
    let v27: struct8;  // rax
    let v30: void*;  // rax
    let v31: struct8;  // rax
    let v32: u64;  // rax
    let v33: u64;  // rax
    let v34: struct8;  // rax

    v15 = a1;
    v16 = uu_join::State::get_current_key(a0);
    v12 = v16;
    v3 = v17;
    v13 = v17;
    v5 = *((a0 + 8) as &i64);
    v6 = *((a0 + 16) as &i64) * 48 + *((a0 + 8) as &i64);
    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
    if !v18 {
        return 0;
    }
    v19 = v18;
    v20 = *((a2 + 8) as &i64);
    v21 = *((a2 + 16) as &i64) * 48 + v20;
    v0 = *((v22 + 328) as &i8);
    v2 = v20;
    v1 = v21;
    if *((v22 + 320) as &i64) {
        v23 = v20;
        v24 = v21;
        do {
            v4 = struct16 {
                field_0: v23
                field_8: v24
            };
            loop {
                v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v25 {
                    break;
                }
                v9 = struct40 {
                    field_0: &v12
                    field_8: a0
                    field_16: v19
                    field_24: a2
                    field_32: v25
                };
                v26 = uu_join::Repr<Sep>::print_format(v22, v15, &v9);
                if v26 {
                    return v26;
                }
                v10 = v0;
                v11 = v9.field_0 & -0x100 | v11;
                v27 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v27 {
                    return v27;
                }
            }
            v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
            v23 = v2;
            v24 = v1;
        } while (v19);
    } else {
        v8 = *((a0 + 64) as &i64);
        v7 = *((a2 + 64) as &i64);
        v23 = v20;
        v24 = v21;
        do {
            v4 = struct16 {
                field_0: v23
                field_8: v24
            };
            loop {
                v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
                if !v30 {
                    break;
                }
                v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v16);
                if v31 {
                    return v31;
                }
                v32 = uu_join::Repr<Sep>::print_fields(*((v22 + 264) as &i64), *((v22 + 272) as &i64), v15, v19, v8);
                if v32 {
                    return v32;
                }
                v33 = uu_join::Repr<Sep>::print_fields(*((v22 + 264) as &i64), *((v22 + 272) as &i64), v15, v30, v7);
                if v33 {
                    return v33;
                }
                v9 = v0;
                v9 = v10 & -0x100 | v9;
                v34 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all();
                if v34 {
                    return v34;
                }
            }
            v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
            v23 = v2;
            v24 = v1;
        } while (v19);
    }
    return 0;
}
