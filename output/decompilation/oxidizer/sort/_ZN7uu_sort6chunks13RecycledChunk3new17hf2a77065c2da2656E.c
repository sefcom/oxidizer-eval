fn uu_sort::chunks::RecycledChunk::new(a1: i8) -> : struct120 {
    let a0: u8;  // sil
    let v0: core::result::Result<std::process::ExitStatus, std::io::error::Error>;  // [bp-0x80]
    let v1: u64;  // [bp-0x78]
    let v2: void*;  // [bp-0x70]
    let v3: void*;  // [bp-0x68]
    let v4: u64;  // [bp-0x60]
    let v5: void*;  // [bp-0x58]
    let v6: void*;  // [bp-0x50]
    let v7: core::result::Result<(), std::io::error::Error>;  // [bp-0x48]
    let v8: void*;  // [bp-0x40]
    let v9: void*;  // [bp-0x38]
    let v10: u64;  // [bp-0x30]
    let v11: void*;  // [bp-0x28]
    let v12: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x20]
    let v14: i64;  // rdi

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v12 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a0, a1);
    *((v14 + 16) as &i64) = 0;
    *(v14 as &core::result::Result<std::process::ExitStatus, std::io::error::Error>) = v0;
    *((v14 + 40) as &i64) = 0;
    *((v14 + 24) as &i128) = *(&v3 as &i128);
    *((v14 + 64) as &i64) = 0;
    *((v14 + 48) as &i128) = *(&v6 as &i128);
    *((v14 + 72) as &i128) = *(&v9 as &i128);
    *((v14 + 88) as &i64) = 0;
    *((v14 + 96) as &i128) = *(&v12.buf.cap as &i128);
    *((v14 + 112) as &u64) = v12.len;
    return;
}
