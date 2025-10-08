fn uu_cat::write_to_end(a0: &[u8], a1: i64) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v1: u8;  // [bp-0x22]
    let v2: struct33;  // [bp-0x21]
    let v4: u64;  // rax
    let v5: u32;  // rdi
    let v6: u32;  // rsi
    let v7: u32;  // rdx

    v0 = v4;
    v1 = 10;
    v2 = 13;
    if !(memchr::arch::generic::memchr::search_slice_with_raw(v5, v6, &v1, &v2) & 1) {
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, a0), "src/uu/cat/src/cat.rs");
        return v6;
    }
    core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v7, v5, v6, "src/uu/cat/src/cat.rs"), a1), "src/uu/cat/src/cat.rs");
    return v7;
}
