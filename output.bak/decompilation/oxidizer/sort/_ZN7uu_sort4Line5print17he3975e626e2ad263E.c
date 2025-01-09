fn uu_sort::Line::print(a0: &u64, a1: u64, a2: &u64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v1: u8;  // [sp-0x11]
    let v3: u64;  // rax
    let v4: &u8;  // rsi
    let v5: u64;  // rax

    v0 = v3;
    v4 = *(a0);
    v5 = a0[1];
    if !*((&a2[15] as &char + 4) as &i8) {
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v4, v5), "src/uu/sort/src/sort.rs");
        v1 = *((&a2[19] as &char + 1) as &i8);
        return core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v1, 1), "src/uu/sort/src/sort.rs");
    }
    return core::result::Result<T,E>::unwrap(uu_sort::Line::print_debug(v4, v5, a2, a1), "src/uu/sort/src/sort.rs");
}
