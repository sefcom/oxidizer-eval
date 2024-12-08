fn uu_od::byteorder_io::ByteOrder::read_f32(a0: u64, a1: u64, a2: u64) -> int {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: &u32;  // rax
    let v4: &u32;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rdx
    let v8: u32;  // eax
    let v10: u32;  // eax
    let v11: u64;  // rax
    let v12: u256;  // ymm0

    v0 = v2;
    if !a0 || a0 != 1 {
        v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 4, a1, a2, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
        if v6 != 4 {
            v10 = (v4 | -0x100 | 1) as u32;
        } else {
            v10 = 0;
        }
        v11 = core::result::Result<T,E>::unwrap(*(v4) * 0x100 | v10, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
    } else {
        v3 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 4, a1, a2, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs");
        if v5 != 4 {
            v8 = (v3 | -0x100 | 1) as u32;
        } else {
            v8 = 0;
        }
        v11 = __buildin_bswap32(core::result::Result<T,E>::unwrap(*(v3) * 0x100 | v8, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/byteorder-1.5.0/src/lib.rs") as i32);
    }
    return v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11;
}
