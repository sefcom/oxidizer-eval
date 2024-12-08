fn uu_wc::utf8::Incomplete::take_buffer(a0: void*) -> u64 {
    let v1: u64;  // rdi

    v1 = a0->field_4;
    a0->field_4 = 0;
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v1, a0, 4, "src/uu/wc/src/utf8/mod.rs");
}
