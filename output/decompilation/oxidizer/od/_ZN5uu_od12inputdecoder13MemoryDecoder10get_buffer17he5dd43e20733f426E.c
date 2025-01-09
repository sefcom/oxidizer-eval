fn uu_od::inputdecoder::MemoryDecoder::get_buffer(a0: void*, a1: u64) -> u64 {
    let v1: &u64;  // rcx

    v1 = a0->field_0;
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, *(&a0->field_8 as &i64), v1[1], v1[2], "src/uu/od/src/inputdecoder.rs");
}
