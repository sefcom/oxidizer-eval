fn uu_more::Pager::draw_lines(a0: i64, a1: i64) {
    let v0: void*;  // [bp-0xe8]
    let v1: struct16;  // [bp-0xe8]
    let v2: struct16;  // [bp-0xe8]
    let v3: struct16;  // [bp-0xe8]
    let v4: u64;  // [bp-0xe0]
    let v5: void*;  // [bp-0xd8]
    let v6: u64;  // [bp-0xd0]
    let v7: u64;  // [bp-0xc8]
    let v8: void*;  // [bp-0xc0]
    let v9: u64;  // [bp-0xc0]
    let v10: u64;  // [bp-0xb0]
    let v11: u128;  // [bp-0xa8]
    let v12: u64;  // [bp-0x98]
    let v13: struct32;  // [bp-0x68]
    let v14: iNone;  // [bp-0x48]
    let v16: core::result::Result<(), std::io::error::Error>;  // rax
    let v17: u64;  // rbp
    let v18: u64;  // r13
    let v19: void*;  // r12
    let v20: u8;  // r15b
    let v21: core::option::Option<&u8>;  // rax
    let v22: core::option::Option<&u8>;  // rax
    let v23: Result<struct40, struct16>;  // rax

    v16 = crossterm::command::write_command_ansi(a1, 4);
    if let Ok(_) = v16 {
        v16 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
    }
    core::result::Result<T,E>::unwrap(v16, "src/uu/more/src/more.rs");
    *((a0 + 56) as &i64) = 0;
    v0 = 0;
    v4 = 8;
    v5 = 0;
    v17 = *((a0 + 24) as &i64);
    v6 = *((a0 + 8) as &i64);
    v7 = *((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 24;
    v18 = *((a0 + 64) as &i16);
    if v18 {
        if *((a0 + 67) as &i8) {
            do {
                if v9 {
                    v8 = 0;
                    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(&v6, v9);
                    v9 = v8;
                    if !(!v21) {
                        continue;
                    }
                } else {
                    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
                    if !v21 {
                        goto LABEL_0x4dd5c1;
                    } else {
                        goto LABEL_4dd533;
                    }
                }
LABEL_4dd533:
                if *((v21 + 16) as &i64) {
                    v3 = alloc::vec::Vec<T,A>::push(v21);
                } else if (v20 & 1) {
                    v19 += 1;
                    *((a0 + 56) as &void*) = v19;
                    v17 += 1;
                    *((a0 + 24) as &u64) = v17;
                } else {
                    v20 = 1;
                    v2 = alloc::vec::Vec<T,A>::push(v21);
                }
            } while (v5 < v18);
        } else {
            do {
                if v9 {
                    v8 = 0;
                    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(&v6, v9);
                    v9 = v8;
                    if !(!v22) {
                        continue;
                    }
                } else {
                    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
                }
            } while ((v1 = alloc::vec::Vec<T,A>::push(v22), v5 < v18));
        }
    }
    v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v13);
    if let Ok(_) = v23 {
        do {
            vvar_376{stack -72} = struct24 OrderedDict({0: 𝜙@128b [((5101235, None), vvar_327{stack -72}), ((5101037, None), None)]})
            v10 = v23;
            format!("\r{}\n", &v10);
            v11 = v14 as i128 as u128;
            v12 = (&v14)[16] as i64;
            core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_all(a1, 2, (&v14)[16] as i64), "src/uu/more/src/more.rs");
            v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v13);
        } while (v23);
    }
    return;
}
