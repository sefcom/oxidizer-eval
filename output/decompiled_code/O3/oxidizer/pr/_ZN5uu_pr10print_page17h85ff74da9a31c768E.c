fn uu_pr::print_page(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xf8]
    let v1: i64;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: i256;  // [sp-0xe0], Other Possible Types: struct32
    let v4: i192;  // [sp-0xc0], Other Possible Types: struct24
    let v5: i128;  // [sp-0xa8]
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x88]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x68]
    let v10: Option<struct24>;  // [sp-0x60], Other Possible Types: i192
    let v11: struct24;  // [sp-0x48], Other Possible Types: i192
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: i256;  // ymm0
    let v18: i128;  // xmm0
    let v19: struct8;  // rax
    let v21: i64;  // rdx

    v2 = *((a2 + 80) as &i64);
    v1 = *((a2 + 88) as &i64);
    v11 = uu_pr::header_content(a2, a3);
    v4 = uu_pr::trailer_content(*((a2 + 321) as &i8), *((a2 + 322) as &i8));
    v7 = *((a2 + 160) as &i64);
    v8 = *((a2 + 152) as &i64);
    v9 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v9, v15, v16);
    v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
    v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v10 != 0x8000000000000000 {
        do {
            v18 = v10;
            v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
            v5 = v18;
            v6 = *((&v10 as &char + 16) as &i64);
            if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, *((&v5 as &char + 8) as &i64), *((&v10 as &char + 16) as &i64))) || !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v2, v1)) {
                return 1;
            }
        } while ((v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3), v10 != 0x8000000000000000));
    }
    if uu_pr::write_columns(a0, a1, a2, &v0) {
        return 1;
    }
    v3 = *((&v4 as &char + 8) as &i64);
    v3.field_8 = vvar_372{stack -224} + (stack_base)[176] as i64 * 24;
    v3.field_16 = 0;
    v19 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if !v16 {
LABEL_5c6e7a:
        if !<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v8, v7) && !<std::io::stdio::StdoutLock as std::io::Write>::flush(&v0) {
            return 0;
        }
    } else {
        while (!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, *((v21 + 8) as &i64), *((v21 + 16) as &i64)) && (v19 + 1 == *((&v4 as &char + 16) as &i64) || !<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v2, v1))) {
            v19 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v16 {
                goto LABEL_5c6e7a;
            }
        }
    }
    return 1;
}
