fn uu_od::inputdecoder::MemoryDecoder::get_buffer(a0: u32, a1: u32) -> u64 {
    let v1: i64;  // rcx

    v1 = *(a0 as &i64);
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, *((a0 + 8) as &i64), *((v1 + 8) as &i64), *((v1 + 16) as &i64), "src/uu/od/src/inputdecoder.rs");
}
