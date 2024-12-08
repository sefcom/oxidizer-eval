fn uu_od::inputdecoder::MemoryDecoder::read_float(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v2: i64;  // rcx
    let v4: i64;  // rcx
    let v6: i64;  // rcx
    let v8: i64;  // rdx
    let v9: i64;  // rdi
    let v10: i64;  // rdi
    let v11: i64;  // rsi
    let v12: i64;  // rdx
    let v13: i64;  // rdx

    v0 = a2;
    switch (a2) {
    case 2:
        v2 = *(a0 as &i64);
        v9 = uu_od::byteorder_io::ByteOrder::read_u16(*((a0 + 24) as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 2, *((v2 + 8) as &i64), *((v2 + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), v8) as i32;
        if !std_detect::detect::cache::test(v10, v11, v8) as i8 {
            return half::binary16::arch::f16_to_f64_fallback(v9);
        }
        half::binary16::arch::x86::f16_to_f32_x86_f16c(v9); /* do not return */
    case 4:
        v4 = *(a0 as &i64);
        return uu_od::byteorder_io::ByteOrder::read_f32(*((a0 + 24) as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 4, *((v4 + 8) as &i64), *((v4 + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), v13);
    case 8:
        v6 = *(a0 as &i64);
        return uu_od::byteorder_io::ByteOrder::read_f64(*((a0 + 24) as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 8, *((v6 + 8) as &i64), *((v6 + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), v12);
    default:
        panic!("Invalid byte_size: {:?}", &v0);
    }
}
