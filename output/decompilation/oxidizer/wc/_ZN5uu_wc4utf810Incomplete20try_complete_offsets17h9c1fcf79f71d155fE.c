fn uu_wc::utf8::Incomplete::try_complete_offsets(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x48]
    let v1: u64;  // [bp-0x40]
    let v2: core::slice::iter::Iter<u8>;  // [bp-0x38]
    let v4: u64;  // r15
    let v5: struct24;  // r13
    let v6: u64;  // r14
    let v7: void*;  // rax
    let v9: u32;  // rdx
    let v11: u64;  // r14
    let v12: core::option::Option<u32>;  // r12

    v4 = *((a0 + 4) as &i8);
    v5 = 4 - v4;
    v6 = core::cmp::min_by(v5, a2);
    v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v6, a0 + v4, v5, "src/uu/wc/src/utf8/mod.rs");
    core::slice::<impl [T]>::copy_from_slice(v7, v9, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, a1, a2, "src/uu/wc/src/utf8/mod.rs"), v9, "src/uu/wc/src/utf8/mod.rs");
    v0 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6 + v4, a0, 4, "src/uu/wc/src/utf8/mod.rs"), a2);
    if let Err(_) = v0 {
        if v1 {
            v11 = v1;
            v6 = v11 - v4;
            if v11 < v4 {
                core::option::unwrap_failed(); /* do not return */
            }
        } else if (v2 & 1) {
            v12 = *((&v0 as &char + 17) as &i8) as u8 as u64;
            if (v12 & 255) < (v4 & 255) {
                core::option::unwrap_failed(); /* do not return */
            }
        }
    }
    *((a0 + 4) as &u8) = v12 as u8;
    return v6;
}
