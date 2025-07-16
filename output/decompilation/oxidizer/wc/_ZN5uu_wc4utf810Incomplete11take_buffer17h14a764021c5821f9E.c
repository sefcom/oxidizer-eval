fn uu_wc::utf8::Incomplete::take_buffer(a0: i64) -> long long {
    let v1: u64;  // rdi

    v1 = *((a0 + 4) as &i8);
    *((a0 + 4) as &i8) = 0;
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v1, a0, 4, "src/uu/wc/src/utf8/mod.rs");
}
