fn uu_wc::utf8::Incomplete::try_complete_offsets(a0: i64, a1: i32, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x50]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: u8;  // [bp-0x38]
    let v5: u64;  // r15
    let v6: u64;  // rbp
    let v7: u64;  // r14
    let v8: void*;  // rax
    let v10: u32;  // rdx
    let v12: u64;  // r14
    let v13: u64;  // r12

    v5 = *((a0 + 4) as &i8);
    v6 = 4 - v5;
    v0 = a1;
    v7 = core::cmp::Ord::min(v6, a2);
    v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v7, a0 + v5, v6, "src/uu/wc/src/utf8/mod.rs");
    core::slice::<impl [T]>::copy_from_slice(v8, v10, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v7, v0, a2, "src/uu/wc/src/utf8/mod.rs"), v10, "src/uu/wc/src/utf8/mod.rs");
    v1 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v7 + v5, a0, 4, "src/uu/wc/src/utf8/mod.rs"), a2);
    if let Err(_) = v1 {
        if v2 {
            v12 = v2;
            v7 = v12 - v5;
            core::option::unwrap(v12);
        } else if (v3 & 1) {
            v13 = *((&v1 as &char + 17) as &i8) as u8 as u64;
            if (v13 & 255) < (v5 & 255) {
                core::option::unwrap_failed(); /* do not return */
            }
        }
    }
    *((a0 + 4) as &u8) = v13;
    return v7;
}
