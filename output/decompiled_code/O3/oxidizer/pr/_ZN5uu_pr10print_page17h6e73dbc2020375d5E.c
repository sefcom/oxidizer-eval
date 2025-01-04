fn uu_pr::print_page(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xf8]
    let v1: i64;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: i64;  // [sp-0xe0], Other Possible Types: struct32
    let v4: i64;  // [sp-0xd8]
    let v5: i64;  // [sp-0xd0]
    let v6: struct24;  // [sp-0xc0], Other Possible Types: i192
    let v7: i128;  // [sp-0xa8]
    let v8: i64;  // [sp-0x98]
    let v9: i64;  // [sp-0x88]
    let v10: i64;  // [sp-0x80]
    let v11: i64;  // [sp-0x68]
    let v12: i192;  // [sp-0x60], Other Possible Types: Option<struct24>
    let v13: struct24;  // [sp-0x48], Other Possible Types: i192
    let v17: i64;  // rsi
    let v18: i64;  // rdx
    let v19: i256;  // ymm0
    let v20: i128;  // xmm0
    let v21: struct8;  // rax
    let v23: i64;  // rdx

    v2 = *((a2 + 80) as &i64);
    v1 = *((a2 + 88) as &i64);
    v13 = uu_pr::header_content(a2, a3);
    v6 = uu_pr::trailer_content(*((a2 + 321) as &i8), *((a2 + 322) as &i8));
    v9 = *((a2 + 160) as &i64);
    v10 = *((a2 + 152) as &i64);
    v11 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v11, v17, v18);
    v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
    v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v12 != 0x8000000000000000 {
        do {
            v20 = v12;
            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
            v7 = v20;
            v8 = *((&v12 as &char + 16) as &i64);
            if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, *((&v7 as &char + 8) as &i64), *((&v12 as &char + 16) as &i64))) || !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v2, v1)) {
                return 1;
            }
        } while ((v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3), v12 != 0x8000000000000000));
    }
    if uu_pr::write_columns(a0, a1, a2, &v0) {
        return 1;
    }
    v3 = *((&v6 as &char + 8) as &i64);
    v4 = v3 + *((&v6 as &char + 16) as &i64) * 24;
    v5 = 0;
    v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if !v18 {
LABEL_5c7a0a:
        if !<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v10, v9) && !<std::io::stdio::StdoutLock as std::io::Write>::flush(&v0) {
            return 0;
        }
    } else {
        while (!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, *((v23 + 8) as &i64), *((v23 + 16) as &i64)) && (v21 + 1 == *((&v6 as &char + 16) as &i64) || !<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v2, v1))) {
            v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v18 {
                goto LABEL_5c7a0a;
            }
        }
    }
    return 1;
}
