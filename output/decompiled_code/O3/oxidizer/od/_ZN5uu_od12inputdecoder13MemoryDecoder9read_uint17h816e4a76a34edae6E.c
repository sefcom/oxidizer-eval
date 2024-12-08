fn uu_od::inputdecoder::MemoryDecoder::read_uint(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v3: i64;  // rcx
    let v5: i64;  // rcx
    let v7: i64;  // rcx
    let v9: i64;  // rax
    let v10: i64;  // rdx
    let v11: i64;  // rdx
    let v12: i64;  // rdx

    v0 = a2;
    switch (a2) {
    case 1:
        v9 = *((*((*(a0 as &i64) + 8) as &i64) + a1) as &i8);
        return v9;
    case 2:
        v7 = *(a0 as &i64);
        v9 = uu_od::byteorder_io::ByteOrder::read_u16(*((a0 + 24) as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 2, *((v7 + 8) as &i64), *((v7 + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), v12) as i32;
        return v9;
    case 4:
        v3 = *(a0 as &i64);
        v9 = uu_od::byteorder_io::ByteOrder::read_u32(*((a0 + 24) as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 4, *((v3 + 8) as &i64), *((v3 + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), v10) as i32;
        return v9;
    case 8:
        v5 = *(a0 as &i64);
        return uu_od::byteorder_io::ByteOrder::read_u64(*((a0 + 24) as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 8, *((v5 + 8) as &i64), *((v5 + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), v11);
    default:
        panic!("Invalid byte_size: {:?}", &v0);
    }
}
