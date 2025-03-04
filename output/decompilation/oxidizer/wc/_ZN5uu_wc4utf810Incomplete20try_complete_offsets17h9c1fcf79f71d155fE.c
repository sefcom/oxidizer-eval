fn uu_wc::utf8::Incomplete::try_complete_offsets(a0: &struct1, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct16, struct10>;  // [sp-0x48]
    let v2: i64;  // r15
    let v3: i64;  // r13
    let v4: i64;  // r14
    let v5: i64;  // rdx
    let v7: i64;  // r14
    let v8: i64;  // r14
    let v9: i64;  // r12

    v2 = *((a0 + 4) as &i8);
    v3 = 4 - v2;
    v4 = core::cmp::min_by(v3, a2);
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v4, a0 + v2, v3, "src/uu/wc/src/utf8/mod.rs"), v5, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v4, a1, a2, "src/uu/wc/src/utf8/mod.rs"), v5, "src/uu/wc/src/utf8/mod.rs");
    v0 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v4 + v2, a0, 4, "src/uu/wc/src/utf8/mod.rs"), a2);
    if v0 as i64 {
        if v7 {
            v8 = *((&v0 as &char + 8) as &i64);
            v4 = v8 - v2;
            if v8 < v2 {
                core::option::unwrap_failed("src/uu/wc/src/utf8/mod.rs"); /* do not return */
            }
            v9 = v8 & 4294967295;
        } else if (*((&v0 as &char + 16) as &i8) & 1) {
            v9 = *((&v0 as &char + 17) as &i8);
            if (v9 & 255) < (v2 & 255) {
                core::option::unwrap_failed("src/uu/wc/src/utf8/mod.rs"); /* do not return */
            }
            v4 = (v9 & 4294967295) - v2;
        }
    }
    *((a0 + 4) as &u8) = v9 as u8;
    return v4;
}
