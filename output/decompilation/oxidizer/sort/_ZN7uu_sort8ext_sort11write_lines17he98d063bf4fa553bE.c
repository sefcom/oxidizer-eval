fn uu_sort::ext_sort::write_lines(a0: i64, a1: i64, a2: i64, a3: i8) -> long long {
    let v0: u8;  // [bp-0x41]
    let v1: u64;  // [bp-0x40]
    let v2: u64;  // [bp-0x38]
    let v4: i64;  // rax

    v1 = a0;
    v2 = a0 + a1 * 24;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if !v4 {
        return v4;
    }
    do {
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, *(v4 as &i64), *((v4 + 8) as &i64)), "src/uu/sort/src/ext_sort.rs");
        v0 = a3;
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, &v0, 1), "src/uu/sort/src/ext_sort.rs");
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    } while (v4);
    return v4;
}
