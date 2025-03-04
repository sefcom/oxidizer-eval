fn uu_more::Pager::draw_lines(a0: &struct8, a1: u32) -> u64 {
    let v0: struct16;  // [sp-0xe8], Other Possible Types: unsigned long, int
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xc0]
    let v6: struct8;  // [sp-0xb0]
    let v7: struct40;  // [bp-0xa8], Other Possible Types: int
    let v8: i64;  // [sp-0xa0]
    let v9: i64;  // [sp-0x98]
    let v10: i64;  // [sp-0x78]
    let v11: i64;  // [sp-0x70]
    let v12: struct32;  // [sp-0x68]
    let v13: struct24;  // [sp-0x48]
    let v15: i64;  // rax
    let v16: i64;  // rbp
    let v17: i64;  // r13
    let v18: i64;  // r15
    let v19: i64;  // r12
    let v20: struct8;  // rax
    let v21: struct8;  // rax
    let v22: struct8;  // rax
    let v23: iNone;  // ymm0
    let v24: iNone;  // xmm0

    v15 = crossterm::command::write_command_ansi(a1, 4);
    if !v15 {
        v15 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
    }
    core::result::Result<T,E>::unwrap(v15, "src/uu/more/src/more.rs");
    *((a0 + 56) as &i64) = 0;
    v0 = 0;
    v0 = 8;
    v1 = 0;
    v16 = *((a0 + 24) as &i64);
    v2 = *((a0 + 8) as &i64);
    v3 = v2 + *((a0 + 16) as &i64) * 24;
    v5 = v16;
    v17 = *((a0 + 64) as &i16);
    if v17 {
        if !*((a0 + 67) as &i8) {
            do {
                if !v5 {
                    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v5 = v5;
                } else {
                    v4 = 0;
                    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v5);
                    v5 = v4;
                    if !(!v21) {
                        continue;
                    }
                }
            } while ((v0 = alloc::vec::Vec<T,A>::push(v21), v1 < v17));
        } else {
            v18 = 0;
            v19 = 0;
            do {
                if !v5 {
                    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v20 {
                        goto LABEL_0x4dd5c1;
                    } else {
                        goto LABEL_4dd533;
                    }
                } else {
                    v4 = 0;
                    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v5);
                    v5 = v4;
                    if !(!v20) {
                        continue;
                    }
                }
LABEL_4dd533:
                if *((v20 + 16) as &i64) {
                    v18 = ((v18 as u8 & 1) ? v18 & 4294967295 & 4294967295 : 0);
                    v0 = alloc::vec::Vec<T,A>::push(v20);
                } else if !(v18 as u8 & 1) {
                    v18 = v18 & -0x100 | 1;
                    v0 = alloc::vec::Vec<T,A>::push(v20);
                } else {
                    v19 += 1;
                    *((a0 + 56) as &unsigned long) = v19;
                    v16 += 1;
                    *((a0 + 24) as &unsigned long) = v16;
                }
            } while (v1 < v17);
        }
    }
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if !v22 {
        return;
    }
    do {
        v6 = v22;
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
        v24 = v13.field_0;
        v23 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u256;
        v7 = v24;
        v9 = v13.field_16;
        core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_all(a1, v8, v13.field_16), "src/uu/more/src/more.rs");
    } while ((v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v22));
}
