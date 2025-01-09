fn uu_sort::ext_sort::write_lines(a0: u32, a1: u32, a2: u64, a3: u8) -> u64 {
    let v0: u8;  // [sp-0x41]
    let v1: u64;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: struct8;  // rax

    v1 = a0;
    v2 = a0 + a1 * 24;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v4 {
        return v4;
    }
    do {
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, *(v4 as &i64), *((v4 + 8) as &i64)), "src/uu/sort/src/ext_sort.rs");
        v0 = a3;
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, &v0, 1), "src/uu/sort/src/ext_sort.rs");
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v4);
    return v4;
}
