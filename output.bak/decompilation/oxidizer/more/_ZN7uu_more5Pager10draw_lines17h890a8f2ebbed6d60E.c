fn uu_more::Pager::draw_lines(a0: &struct8, a1: u32) -> u64 {
    let v0: struct16;  // [sp-0xe8], Other Possible Types: u64, void*
    let v1: u64;  // [sp-0xe0]
    let v2: void*;  // [sp-0xd8]
    let v3: u64;  // [sp-0xd0]
    let v4: u64;  // [sp-0xc8]
    let v5: u64;  // [sp-0xc0], Other Possible Types: void*
    let v6: u64;  // [sp-0xb0], Other Possible Types: struct8
    let v7: u128;  // [sp-0xa8]
    let v8: u64;  // [sp-0xa0]
    let v9: u64;  // [sp-0x98], Other Possible Types: &&struct_0
    let v10: u64;  // [sp-0x90]
    let v11: void*;  // [sp-0x88]
    let v12: &u8;  // [sp-0x78]
    let v13: u64;  // [sp-0x70]
    let v14: struct32;  // [sp-0x68]
    let v15: i8;  // [bp-0x48]
    let v16: u8;  // [bp-0x38]
    let v18: u64;  // rax
    let v19: u64;  // rbp
    let v20: u64;  // r13
    let v21: u64;  // r15
    let v22: void*;  // r12
    let v23: struct8;  // rax
    let v24: struct8;  // rax
    let v25: struct8;  // rax
    let v26: u256;  // ymm0
    let v27: u128;  // xmm0

    v18 = crossterm::command::write_command_ansi(a1, 4);
    if !v18 {
        v18 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
    }
    core::result::Result<T,E>::unwrap(v18, "src/uu/more/src/more.rs");
    a0->field_38 = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v19 = a0->field_18;
    v3 = a0->field_8;
    v4 = v3 + a0->field_10 * 24;
    v5 = v19;
    v20 = a0->field_40;
    if v20 {
        if !a0->field_43 {
            do {
                if !v5 {
                    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v5 = v5;
                } else {
                    v5 = 0;
                    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v5);
                    v5 = v5;
                    if (v0 = alloc::vec::Vec<T,A>::push(v24), v2 < v20) {
                        continue;
                    }
                }
            } while ((v0 = alloc::vec::Vec<T,A>::push(v24), v2 < v20));
        } else {
            v21 = 0;
            v22 = 0;
            do {
                if !v5 {
                    v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v5 = v5;
                    if !v23 {
                        goto LABEL_0x4dd5c1;
                    } else {
                        goto LABEL_4dd533;
                    }
                } else {
                    v5 = 0;
                    v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v5);
                    v5 = v5;
                    if (v0 = alloc::vec::Vec<T,A>::push(v24), v2 < v20) {
                        continue;
                    }
                }
LABEL_4dd533:
                if *((v23 + 16) as &i64) {
                    v21 = ((v21 & 1) ? v21 & 4294967295 & 4294967295 : 0);
                    v0 = alloc::vec::Vec<T,A>::push(v23);
                } else if (v21 & 1) {
                    v22 += 1;
                    a0->field_38 = v22;
                    v19 += 1;
                    a0->field_18 = v19;
                } else {
                    v21 = v21 | -0x100 | 1;
                    v0 = alloc::vec::Vec<T,A>::push(v23);
                }
            } while (v2 < v20);
        }
    }
    v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v25 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if !v25 {
        return;
    }
    do {
        v6 = v25;
        v12 = &v6;
        v13 = <&T as core::fmt::Display>::fmt;
        v7 = "\r";
        v8 = 2;
        v11 = 0;
        v9 = &v12;
        v10 = 1;
        core::option::Option<T>::map_or_else();
        v27 = v15;
        v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
        v7 = v27;
        v9 = *(&v16 as &i64);
        core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_all(a1, v8, *(&v16 as &i64)), "src/uu/more/src/more.rs");
        v25 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    } while (v25);
}
