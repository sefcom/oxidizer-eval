fn uu_more::Pager::draw_lines(a0: i64, a1: i64) {
    let v0: void*;  // [bp-0xe8]
    let v1: struct16;  // [bp-0xe8]
    let v2: struct16;  // [bp-0xe8]
    let v3: struct16;  // [bp-0xe8]
    let v4: u64;  // [bp-0xe0]
    let v5: void*;  // [bp-0xd8]
    let v6: struct16;  // [bp-0xd0]
    let v7: u64;  // [bp-0xc0]
    let v8: void*;  // [bp-0xc0]
    let v9: u64;  // [bp-0xb0]
    let v10: u128;  // [bp-0xa8]
    let v11: u64;  // [bp-0x98]
    let v12: struct32;  // [bp-0x68]
    let v13: struct24;  // [bp-0x48]
    let v15: core::result::Result<(), std::io::error::Error>;  // rax
    let v16: u64;  // rbp
    let v17: u64;  // r13
    let v18: void*;  // r12
    let v19: u8;  // r15b
    let v20: core::option::Option<&u8>;  // rax
    let v21: core::option::Option<&u8>;  // rax
    let v22: Result<struct40, struct16>;  // rax

    v15 = crossterm::command::write_command_ansi(a1, 4);
    if let Ok(_) = v15 {
        v15 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
    }
    core::result::Result<T,E>::unwrap(v15, "src/uu/more/src/more.rs");
    *((a0 + 56) as &i64) = 0;
    v0 = 0;
    v4 = 8;
    v5 = 0;
    v16 = *((a0 + 24) as &i64);
    v6 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 24
    };
    v17 = *((a0 + 64) as &i16);
    if v17 {
        if *((a0 + 67) as &i8) {
            do {
                if v7 {
                    v8 = 0;
                    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(&v6, v7);
                    v7 = v8;
                    if !(!v20) {
                        continue;
                    }
                } else {
                    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
                    if !v20 {
                        goto LABEL_0x4dd5c1;
                    } else {
                        goto LABEL_4dd533;
                    }
                }
LABEL_4dd533:
                if *((v20 + 16) as &i64) {
                    v3 = alloc::vec::Vec<T,A>::push(v20);
                } else if (v19 & 1) {
                    v18 += 1;
                    *((a0 + 56) as &void*) = v18;
                    v16 += 1;
                    *((a0 + 24) as &u64) = v16;
                } else {
                    v19 = 1;
                    v2 = alloc::vec::Vec<T,A>::push(v20);
                }
            } while (v5 < v17);
        } else {
            do {
                if v7 {
                    v8 = 0;
                    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(&v6, v7);
                    v7 = v8;
                    if !(!v21) {
                        continue;
                    }
                } else {
                    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
                }
            } while ((v1 = alloc::vec::Vec<T,A>::push(v21), v5 < v17));
        }
    }
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12);
    if let Ok(_) = v22 {
        do {
            vvar_376{stack -72} = struct24 OrderedDict({0: 𝜙@128b [((5101235, None), vvar_327{stack -72}), ((5101037, None), None)]})
            v9 = v22;
            format!("\r{}\n", &v9);
            v10 = v13.field_0;
            v11 = v13.field_16;
            core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_all(a1, 2, v13.field_16), "src/uu/more/src/more.rs");
            v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12);
        } while (v22);
    }
    return;
}
