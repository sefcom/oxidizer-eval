fn uu_od::byteorder_io::ByteOrder::read_f64(a0: u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x10]
    let v2: &u64;  // rax
    let v3: u64;  // rdx
    let v5: u64;  // rdx
    let v6: u64;  // rax
    let v7: u32;  // eax

    if a0 && a0 == 1 {
        v6 = core::result::Result<T,E>::unwrap((v3 == 8 ? 0 : <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 8, a1, a2, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs") | -0x100 | 1), "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
        return v6;
    }
    v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 8, a1, a2, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
    if v5 != 8 {
        v7 = (v2 | -0x100 | 1) as u32;
    } else {
        v0 = *(v2);
        v7 = 0;
    }
    v6 = core::result::Result<T,E>::unwrap(v7, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
    return v6;
}
