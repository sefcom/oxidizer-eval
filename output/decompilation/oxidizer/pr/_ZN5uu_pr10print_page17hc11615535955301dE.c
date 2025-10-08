fn uu_pr::print_page(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd0]
    let v3: u64;  // [bp-0xc8]
    let v4: Option<struct24>;  // [bp-0xc0]
    let v5: u64;  // [bp-0xc0]
    let v6: u64;  // [bp-0xb8]
    let v7: u64;  // [bp-0xb0]
    let v8: struct24;  // [bp-0xa8], Other Possible Types: u8
    let v11: std::io::stdio::Stdout;  // [bp-0x68]
    let v12: u64;  // [bp-0x60]
    let v13: u64;  // [bp-0x58]
    let v14: u64;  // [bp-0x50]
    let v15: Result<struct16, struct16>;  // [bp-0x48]
    let v17: u64;  // rax
    let v18: i64;  // rdx
    let v19: i64;  // rdx
    let v20: i64;  // rdx
    let v21: u64;  // rbx

    v3 = *((a2 + 80) as &i64);
    v2 = *((a2 + 88) as &i64);
    v15 = uu_pr::header_content(a2, a3);
    uu_pr::trailer_content(&v12, *((a2 + 321) as &i8), *((a2 + 322) as &i8));
    v11 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v11);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8, &v15);
    v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
    if !((((0 ^ v4 as i64) & (0 ^ -(v5))) >> 63) as char) {
        while (!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v6, v7) && !<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v3, v2)) {
            v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
            if let None = v4 {
                goto LABEL_536fad;
            }
        }
    }
LABEL_536fad:
    if !(uu_pr::write_columns(a0, a1, a2) & 1) {
        v8 = struct24 {
            field_0: v13
            field_8: v13 + v14 * 24
            field_16: 0
        };
        v17 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
        if v18 {
            loop {
                v20 = v19;
                if <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, *((v20 + 8) as &i64), *((v20 + 16) as &i64)) || v17 + 1 != v14 && <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v3, v2) {
                    break;
                }
                v17 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
                v18 = v18;
                if !v19 {
                    break;
                }
            }
        }
    }
    return v21;
}
