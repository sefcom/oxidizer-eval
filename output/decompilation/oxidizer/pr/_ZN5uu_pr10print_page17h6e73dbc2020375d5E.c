fn uu_pr::print_page(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xf8]
    let v1: i64;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: struct32;  // [sp-0xe0], Other Possible Types: int
    let v4: struct24;  // [sp-0xc0]
    let v5: iNone;  // [sp-0xa8]
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x88]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x68]
    let v10: Option<struct24>;  // [sp-0x60]
    let v11: struct24;  // [sp-0x48]
    let v15: iNone;  // ymm0
    let v16: iNone;  // xmm0
    let v18: i64;  // rdx
    let v19: i64;  // r15
    let v21: i64;  // rdx

    v2 = *((a2 + 80) as &i64);
    v1 = *((a2 + 88) as &i64);
    v11 = uu_pr::header_content(a2, a3);
    v4 = uu_pr::trailer_content(*((a2 + 321) as &i8), *((a2 + 322) as &i8));
    v7 = *((a2 + 160) as &i64);
    v8 = *((a2 + 152) as &i64);
    v9 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v9);
    v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
    v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v10 as i64 != 0x8000000000000000 {
        do {
            v16 = v10 as i128;
            v15 = v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16 as u256;
            v5 = v16;
            v6 = *((&v10 as &char + 16) as &i64);
            if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, (&v5)[8] as i64, *((&v10 as &char + 16) as &i64))) || !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v2, v1)) {
                return 1;
            }
        } while ((v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3), v10 as i64 != 0x8000000000000000));
    }
    if uu_pr::write_columns(a0, a1, a2, &v0) {
        return 1;
    }
    if !v18 {
LABEL_5c7a0a:
        if !<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v8, v7) && !<std::io::stdio::StdoutLock as std::io::Write>::flush(&v0) {
            return 0;
        }
    } else {
        v19 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
        while (!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, *((v21 + 8) as &i64), *((v21 + 16) as &i64)) && (v19 + 1 == v4.field_16 || !<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v2, v1))) {
            v19 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
            if !v18 {
                goto LABEL_5c7a0a;
            }
        }
    }
    return 1;
}
