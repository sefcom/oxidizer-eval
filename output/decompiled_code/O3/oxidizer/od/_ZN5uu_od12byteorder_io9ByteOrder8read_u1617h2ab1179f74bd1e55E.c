fn uu_od::byteorder_io::ByteOrder::read_u16(a0: u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: &u16;  // rax
    let v4: &u16;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rdx
    let v8: u32;  // eax
    let v10: u32;  // eax
    let v11: u64;  // rax

    v0 = v2;
    if a0 && a0 == 1 {
        v3 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 2, a1, a2, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
        if v5 != 2 {
            v8 = (v3 | -0x100 | 1) as u32;
        } else {
            v8 = 0;
        }
        v11 = core::result::Result<T,E>::unwrap(*(v3) * 0x100 | v8, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
        return v11 | -0x10000 | __ROL__(v11, 8);
    }
    v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 2, a1, a2, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
    if v6 != 2 {
        v10 = (v4 | -0x100 | 1) as u32;
    } else {
        v10 = 0;
    }
    return core::result::Result<T,E>::unwrap(*(v4) * 0x100 | v10, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
}
