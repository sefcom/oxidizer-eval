fn uu_sort::Line::print(a0: i64, a1: i64, a2: i64) -> void {
    let v0: u64;  // [bp-0x18]
    let v1: u8;  // [bp-0x11]
    let v3: u64;  // rax

    v0 = v3;
    if !*((a2 + 124) as &i8) {
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, *(a0 as &i64), *((a0 + 8) as &i64)), "src/uu/sort/src/sort.rs");
        v1 = *((a2 + 153) as &i8);
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v1, 1), "src/uu/sort/src/sort.rs");
        return;
    }
    core::result::Result<T,E>::unwrap(uu_sort::Line::print_debug(*(a0 as &i64), *((a0 + 8) as &i64), a2, a1), "src/uu/sort/src/sort.rs");
    return;
}
