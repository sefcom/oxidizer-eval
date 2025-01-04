fn uu_more::Pager::draw_lines(a0: &struct8, a1: u32, a2: u32) -> u64 {
    let v0: struct16;  // [sp-0xe8], Other Possible Types: i64
    let v1: i64;  // [sp-0xe0]
    let v2: i64;  // [sp-0xd8]
    let v3: i64;  // [sp-0xd0]
    let v4: i64;  // [sp-0xc8]
    let v5: i64;  // [sp-0xc0]
    let v6: i64;  // [sp-0xb0]
    let v7: i128;  // [bp-0xa8], Other Possible Types: struct40
    let v8: i64;  // [sp-0xa0]
    let v9: i64;  // [sp-0x98]
    let v10: i64;  // [sp-0x78]
    let v11: i64;  // [sp-0x70]
    let v12: struct32;  // [sp-0x68]
    let v13: i192;  // [sp-0x48], Other Possible Types: struct24
    let v15: i64;  // rax
    let v16: i64;  // rsi
    let v17: i64;  // rdx
    let v18: i64;  // rbp
    let v19: i64;  // r13
    let v20: i64;  // r15
    let v21: i64;  // r12
    let v22: struct8;  // rax
    let v23: struct8;  // rax
    let v24: struct8;  // rax
    let v25: i256;  // ymm0
    let v26: i128;  // xmm0

    v15 = crossterm::command::write_command_ansi(a1, 4);
    if !v15 {
        v15 = <std::io::stdio::Stdout as std::io::Write>::flush(a1, v16, v17);
    }
    core::result::Result<T,E>::unwrap(v15, "src/uu/more/src/more.rs");
    *((a0 + 56) as &i64) = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v18 = *((a0 + 24) as &i64);
    v3 = *((a0 + 8) as &i64);
    v4 = v3 + *((a0 + 16) as &i64) * 24;
    v5 = v18;
    v19 = *((a0 + 64) as &i16);
    if v19 {
        if !*((a0 + 67) as &i8) {
            do {
                if !v5 {
                    v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v5 = v5;
                } else {
                    v5 = 0;
                    v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v5);
                    v5 = v5;
                    if (v0 = alloc::vec::Vec<T,A>::push(v23, v17), v2 < v19) {
                        continue;
                    }
                }
            } while ((v0 = alloc::vec::Vec<T,A>::push(v23, v17), v2 < v19));
        } else {
            v20 = 0;
            v21 = 0;
            do {
                if !v5 {
                    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v5 = v5;
                    if !v22 {
                        goto LABEL_0x4dd5c1;
                    } else {
                        goto LABEL_4dd533;
                    }
                } else {
                    v5 = 0;
                    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v5);
                    v5 = v5;
                    if (v0 = alloc::vec::Vec<T,A>::push(v23, v17), v2 < v19) {
                        continue;
                    }
                }
LABEL_4dd533:
                if *((v22 + 16) as &i64) {
                    v20 = ((v20 & 1) ? v20 & 4294967295 & 4294967295 : 0);
                    v0 = alloc::vec::Vec<T,A>::push(v22, v17);
                } else if (v20 & 1) {
                    v21 += 1;
                    *((a0 + 56) as &i64) = v21;
                    v18 += 1;
                    *((a0 + 24) as &i64) = v18;
                } else {
                    v20 = v20 | -0x100 | 1;
                    v0 = alloc::vec::Vec<T,A>::push(v22, v17);
                }
            } while (v2 < v19);
        }
    }
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v24 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if !v24 {
        return;
    }
    do {
        v6 = v24;
        v10 = &v6;
        v11 = <&T as core::fmt::Display>::fmt;
        v7 = struct40 {
            field_0: "\r"
            field_8: 2
            field_16: &v10
            field_24: 1
            field_32: 0
        };
        v13 = core::option::Option<T>::map_or_else(&v7);
        v26 = v13;
        v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
        v7 = v26;
        v9 = *((&v13 as &char + 16) as &i64);
        core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_all(a1, v8, *((&v13 as &char + 16) as &i64)), "src/uu/more/src/more.rs");
        v24 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    } while (v24);
}
