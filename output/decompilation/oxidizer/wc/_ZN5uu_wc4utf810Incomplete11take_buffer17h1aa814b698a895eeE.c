fn uu_wc::utf8::Incomplete::take_buffer(a0: i64) -> u64 {
    let v1: u64;  // rsi

    v1 = *((a0 + 4) as &i8);
    *((a0 + 4) as &i8) = 0;
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v1, a0, 4, "src/uu/wc/src/utf8/mod.rs");
}
