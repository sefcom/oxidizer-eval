fn uu_wc::utf8::Incomplete::new(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v1: u32;  // [bp-0x14]
    let v3: u64;  // rax
    let v5: u32;  // rdx

    v0 = v3;
    v1 = 0;
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a1, &v1, 4, "src/uu/wc/src/utf8/mod.rs"), v5, a0, a1, "src/uu/wc/src/utf8/mod.rs");
    return a1 * 0x100000000;
}
