fn uu_od::byteorder_io::ByteOrder::read_u64(a0: u64, a1: u64, a2: u64) -> u64 {
    let v1: &u64;  // rax
    let v2: &u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // rdx
    let v5: u64;  // rbx
    let v6: u32;  // eax
    let v7: u32;  // eax

    if a0 && a0 == 1 {
        v1 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 8, a1, a2, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
        if v3 != 8 {
            v6 = (v1 | -0x100 | 1) as u32;
        } else {
            v5 = *(v1);
            v6 = 0;
        }
        core::result::Result<T,E>::unwrap(v6, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
        v5 = (((((v5 & -0xff00ff00ff0100) >> 8 | v5 * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((v5 & -0xff00ff00ff0100) >> 8 | v5 * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | ((((v5 & -0xff00ff00ff0100) >> 8 | v5 * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((v5 & -0xff00ff00ff0100) >> 8 | v5 * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000;
        return v5;
    }
    v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 8, a1, a2, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
    if v4 != 8 {
        v7 = (v2 | -0x100 | 1) as u32;
    } else {
        v5 = *(v2);
        v7 = 0;
    }
    core::result::Result<T,E>::unwrap(v7, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
    return v5;
}
