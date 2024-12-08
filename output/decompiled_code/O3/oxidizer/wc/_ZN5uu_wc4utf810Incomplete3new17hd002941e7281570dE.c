fn uu_wc::utf8::Incomplete::new(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v1: u32;  // [sp-0x14]
    let v3: u64;  // rax
    let v4: u64;  // rdx

    v0 = v3;
    v1 = 0;
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a1, &v1, 4, "src/uu/wc/src/utf8/mod.rs"), v4, a0, a1, "src/uu/wc/src/utf8/mod.rs");
    return a1 * 0x100000000 | v1;
}
